
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,char,int) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0, int VAR_1,
     const char *VAR_2, int VAR_3)
{
 const char *VAR_4;

 while ((VAR_4 = FUNC_0(VAR_2, '\t', VAR_3)) != ((void*)0)) {
  int VAR_5 = FUNC_1(VAR_2, VAR_4);







  if (VAR_5 < 0)
   break;


  FUNC_2(VAR_0, VAR_2, VAR_4 - VAR_2);


  FUNC_3(VAR_0, ' ', VAR_1 - (VAR_5 % VAR_1));


  VAR_3 -= VAR_4 + 1 - VAR_2;
  VAR_2 = VAR_4 + 1;
 }






 FUNC_2(VAR_0, VAR_2, VAR_3);
}
