
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct align {int position; unsigned int width; } ;
struct TYPE_3__ {struct align align; } ;
struct used_atom {TYPE_1__ u; } ;
struct string_list {int nr; TYPE_2__* items; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_4__ {char* string; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (struct strbuf*,int ,char const*) ;
 int FUNC_4 (struct strbuf*,int,int ) ;
 int FUNC_5 (struct string_list*,int ) ;
 int FUNC_6 (struct string_list*,char const*,char,int) ;
 scalar_t__ FUNC_7 (char const*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_8(const struct ref_format *VAR_2, struct used_atom *VAR_3,
        const char *VAR_4, struct strbuf *VAR_5)
{
 struct align *VAR_6 = &VAR_3->u.align;
 struct string_list VAR_7 = VAR_1;
 int VAR_8;
 unsigned int VAR_9 = ~0U;

 if (!VAR_4)
  return FUNC_4(VAR_5, -1, FUNC_0("expected format: %%(align:<width>,<position>)"));

 VAR_6->position = VAR_0;

 FUNC_6(&VAR_7, VAR_4, ',', -1);
 for (VAR_8 = 0; VAR_8 < VAR_7.nr; VAR_8++) {
  const char *VAR_10 = VAR_7.items[VAR_8].string;
  int VAR_11;

  if (FUNC_2(VAR_10, "position=", &VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   if (VAR_11 < 0) {
    FUNC_3(VAR_5, FUNC_0("unrecognized position:%s"), VAR_10);
    FUNC_5(&VAR_7, 0);
    return -1;
   }
   VAR_6->position = VAR_11;
  } else if (FUNC_2(VAR_10, "width=", &VAR_10)) {
   if (FUNC_7(VAR_10, 10, &VAR_9)) {
    FUNC_3(VAR_5, FUNC_0("unrecognized width:%s"), VAR_10);
    FUNC_5(&VAR_7, 0);
    return -1;
   }
  } else if (!FUNC_7(VAR_10, 10, &VAR_9))
   ;
  else if ((VAR_11 = FUNC_1(VAR_10)) >= 0)
   VAR_6->position = VAR_11;
  else {
   FUNC_3(VAR_5, FUNC_0("unrecognized %%(align) argument: %s"), VAR_10);
   FUNC_5(&VAR_7, 0);
   return -1;
  }
 }

 if (VAR_9 == ~0U) {
  FUNC_5(&VAR_7, 0);
  return FUNC_4(VAR_5, -1, FUNC_0("positive width expected with the %%(align) atom"));
 }
 VAR_6->width = VAR_9;
 FUNC_5(&VAR_7, 0);
 return 0;
}
