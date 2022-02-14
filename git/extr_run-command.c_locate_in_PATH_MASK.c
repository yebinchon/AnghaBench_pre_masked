
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_1)
{
 const char *VAR_2 = FUNC_0("PATH");
 struct strbuf VAR_3 = VAR_0;

 if (!VAR_2 || !*VAR_2)
  return ((void*)0);

 while (1) {
  const char *VAR_4 = FUNC_8(VAR_2, ':');

  FUNC_7(&VAR_3);


  if (VAR_4 != VAR_2) {
   FUNC_2(&VAR_3, VAR_2, VAR_4 - VAR_2);
   FUNC_3(&VAR_3, '/');
  }
  FUNC_4(&VAR_3, VAR_1);

  if (FUNC_1(VAR_3.buf))
   return FUNC_5(&VAR_3, ((void*)0));

  if (!*VAR_4)
   break;
  VAR_2 = VAR_4 + 1;
 }

 FUNC_6(&VAR_3);
 return ((void*)0);
}
