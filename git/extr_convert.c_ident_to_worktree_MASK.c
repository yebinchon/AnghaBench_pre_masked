
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char const* buf; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int hexsz; } ;


 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,size_t,char*,struct object_id*) ;
 char* FUNC_3 (char const*,char,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (struct object_id*) ;
 int FUNC_6 (struct strbuf*,char const*,size_t) ;
 int FUNC_7 (struct strbuf*,char*) ;
 char* FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_10(const char *VAR_1, size_t VAR_2,
        struct strbuf *VAR_3, int VAR_4)
{
 struct object_id VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
 int VAR_9;

 if (!VAR_4)
  return 0;

 VAR_9 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_9)
  return 0;


 if (VAR_1 == VAR_3->buf)
  VAR_6 = FUNC_8(VAR_3, ((void*)0));
 FUNC_2(VAR_1, VAR_2, "blob", &VAR_5);

 FUNC_9(VAR_3, VAR_2 + VAR_9 * (VAR_0->hexsz + 3));
 for (;;) {

  VAR_7 = FUNC_3(VAR_1, '$', VAR_2);
  if (!VAR_7)
   break;
  FUNC_6(VAR_3, VAR_1, VAR_7 + 1 - VAR_1);
  VAR_2 -= VAR_7 + 1 - VAR_1;
  VAR_1 = VAR_7 + 1;


  if (VAR_2 < 3 || FUNC_4("Id", VAR_1, 2))
   continue;


  if (VAR_1[2] == '$') {
   VAR_1 += 3;
   VAR_2 -= 3;
  } else if (VAR_1[2] == ':') {







   VAR_7 = FUNC_3(VAR_1 + 3, '$', VAR_2 - 3);
   if (!VAR_7) {

    break;
   }

   if (FUNC_3(VAR_1 + 3, '\n', VAR_7 - VAR_1 - 3)) {

    continue;
   }

   VAR_8 = FUNC_3(VAR_1 + 4, ' ', VAR_7 - VAR_1 - 4);
   if (VAR_8 && VAR_8 < VAR_7-1) {




    continue;
   }

   VAR_2 -= VAR_7 + 1 - VAR_1;
   VAR_1 = VAR_7 + 1;
  } else {

   continue;
  }


  FUNC_7(VAR_3, "Id: ");
  FUNC_7(VAR_3, FUNC_5(&VAR_5));
  FUNC_7(VAR_3, " $");
 }
 FUNC_6(VAR_3, VAR_1, VAR_2);

 FUNC_1(VAR_6);
 return 1;
}
