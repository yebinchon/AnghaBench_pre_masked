
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_3__ {scalar_t__ nr; } ;


 struct strbuf VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int,char*,char const**) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(struct strbuf *VAR_2)
{
 const char *VAR_3;

 if (FUNC_1(VAR_2->buf, "Authorization:", &VAR_3) ||
     FUNC_1(VAR_2->buf, "Proxy-Authorization:", &VAR_3)) {

  while (FUNC_0(*VAR_3))
   VAR_3++;
  while (*VAR_3 && !FUNC_0(*VAR_3))
   VAR_3++;

  FUNC_4(VAR_2, VAR_3 - VAR_2->buf);
  FUNC_3(VAR_2, " <redacted>");
 } else if (VAR_1.nr &&
     FUNC_1(VAR_2->buf, "Cookie:", &VAR_3)) {
  struct strbuf VAR_4 = VAR_0;
  char *VAR_5;

  while (FUNC_0(*VAR_3))
   VAR_3++;






  VAR_5 = (char *) VAR_3;

  while (VAR_5) {
   char *VAR_6;
   char *VAR_7 = FUNC_8(VAR_5, "; ");
   if (VAR_7)
    *VAR_7 = 0;
   VAR_6 = FUNC_5(VAR_5, '=');
   if (!VAR_6) {

    FUNC_3(&VAR_4, VAR_5);
    continue;
   }
   *VAR_6 = 0;
   if (FUNC_6(&VAR_1, VAR_5)) {
    FUNC_3(&VAR_4, VAR_5);
    FUNC_3(&VAR_4, "=<redacted>");
   } else {
    *VAR_6 = '=';
    FUNC_3(&VAR_4, VAR_5);
   }
   if (VAR_7) {




    FUNC_3(&VAR_4, "; ");
    VAR_5 = VAR_7 + FUNC_7("; ");
   } else {
    VAR_5 = ((void*)0);
   }
  }

  FUNC_4(VAR_2, VAR_3 - VAR_2->buf);
  FUNC_2(VAR_2, &VAR_4);
 }
}
