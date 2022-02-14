
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct strbuf*,char*,scalar_t__,scalar_t__) ;
 char* FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (struct strbuf*,size_t,size_t) ;
 int FUNC_5 (struct strbuf*,scalar_t__,scalar_t__,char const*,scalar_t__) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static char *FUNC_8(char *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 size_t VAR_4, VAR_5;
 char *VAR_6 = VAR_1;


 while (!FUNC_1(VAR_6, "encoding ")) {
  VAR_6 = FUNC_6(VAR_6, '\n');
  if (!VAR_6 || *++VAR_6 == '\n')
   return VAR_1;
 }
 VAR_4 = VAR_6 - VAR_1;
 VAR_6 = FUNC_6(VAR_6, '\n');
 if (!VAR_6)
  return VAR_1;
 VAR_5 = VAR_6 + 1 - (VAR_1 + VAR_4);

 FUNC_2(&VAR_3, VAR_1, FUNC_7(VAR_1), FUNC_7(VAR_1) + 1);
 if (FUNC_0(VAR_2)) {

  FUNC_4(&VAR_3, VAR_4, VAR_5);
 } else {

  FUNC_5(&VAR_3, VAR_4 + FUNC_7("encoding "),
       VAR_5 - FUNC_7("encoding \n"),
       VAR_2, FUNC_7(VAR_2));
 }
 return FUNC_3(&VAR_3, ((void*)0));
}
