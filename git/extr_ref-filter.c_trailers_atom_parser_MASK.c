
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int no_divider; int unfold; int only_trailers; } ;
struct TYPE_7__ {int option; TYPE_2__ trailer_opts; } ;
struct TYPE_8__ {TYPE_3__ contents; } ;
struct used_atom {TYPE_4__ u; } ;
struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_5__ {char* string; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,int ,char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*,char const*,char,int) ;

__attribute__((used)) static int FUNC_5(const struct ref_format *VAR_2, struct used_atom *VAR_3,
    const char *VAR_4, struct strbuf *VAR_5)
{
 struct string_list VAR_6 = VAR_1;
 int VAR_7;

 VAR_3->u.contents.trailer_opts.no_divider = 1;

 if (VAR_4) {
  FUNC_4(&VAR_6, VAR_4, ',', -1);
  for (VAR_7 = 0; VAR_7 < VAR_6.nr; VAR_7++) {
   const char *VAR_8 = VAR_6.items[VAR_7].string;
   if (!FUNC_2(VAR_8, "unfold"))
    VAR_3->u.contents.trailer_opts.unfold = 1;
   else if (!FUNC_2(VAR_8, "only"))
    VAR_3->u.contents.trailer_opts.only_trailers = 1;
   else {
    FUNC_1(VAR_5, FUNC_0("unknown %%(trailers) argument: %s"), VAR_8);
    FUNC_3(&VAR_6, 0);
    return -1;
   }
  }
 }
 VAR_3->u.contents.option = VAR_0;
 FUNC_3(&VAR_6, 0);
 return 0;
}
