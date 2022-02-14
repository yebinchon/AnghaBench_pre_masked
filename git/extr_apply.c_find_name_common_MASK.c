
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 char* FUNC_5 (char const*,int) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,int ,int,char const*) ;

__attribute__((used)) static char *FUNC_9(struct strbuf *VAR_0,
         const char *VAR_1,
         const char *VAR_2,
         int VAR_3,
         const char *VAR_4,
         int VAR_5)
{
 int VAR_6;
 const char *VAR_7 = ((void*)0);

 if (VAR_3 == 0)
  VAR_7 = VAR_1;
 while (VAR_1 != VAR_4) {
  char VAR_8 = *VAR_1;

  if (!VAR_4 && FUNC_0(VAR_8)) {
   if (VAR_8 == '\n')
    break;
   if (FUNC_1(VAR_8, VAR_5))
    break;
  }
  VAR_1++;
  if (VAR_8 == '/' && !--VAR_3)
   VAR_7 = VAR_1;
 }
 if (!VAR_7)
  return FUNC_2(FUNC_7(VAR_2));
 VAR_6 = VAR_1 - VAR_7;
 if (!VAR_6)
  return FUNC_2(FUNC_7(VAR_2));







 if (VAR_2) {
  int VAR_9 = FUNC_3(VAR_2);
  if (VAR_9 < VAR_6 && !FUNC_4(VAR_7, VAR_2, VAR_9))
   return FUNC_2(FUNC_6(VAR_2));
 }

 if (VAR_0->len) {
  char *VAR_10 = FUNC_8("%s%.*s", VAR_0->buf, VAR_6, VAR_7);
  return FUNC_2(VAR_10);
 }

 return FUNC_2(FUNC_5(VAR_7, VAR_6));
}
