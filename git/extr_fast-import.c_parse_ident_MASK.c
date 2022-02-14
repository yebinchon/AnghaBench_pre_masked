
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;



 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char const*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char const*,size_t) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,struct strbuf*) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_8(const char *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;
 struct strbuf VAR_5 = VAR_0;


 if (*VAR_2 == '<')
  --VAR_2;

 VAR_3 = VAR_2 + FUNC_6(VAR_2, "<>");
 if (*VAR_3 != '<')
  FUNC_1("Missing < in ident string: %s", VAR_2);
 if (VAR_3 != VAR_2 && VAR_3[-1] != ' ')
  FUNC_1("Missing space before < in ident string: %s", VAR_2);
 VAR_3 = VAR_3 + 1 + FUNC_6(VAR_3 + 1, "<>");
 if (*VAR_3 != '>')
  FUNC_1("Missing > in ident string: %s", VAR_2);
 VAR_3++;
 if (*VAR_3 != ' ')
  FUNC_1("Missing space after > in ident string: %s", VAR_2);
 VAR_3++;
 VAR_4 = VAR_3 - VAR_2;
 FUNC_3(&VAR_5, VAR_2, VAR_4);

 switch (VAR_1) {
 case 129:
  if (FUNC_7(VAR_3, &VAR_5) < 0)
   FUNC_1("Invalid raw date \"%s\" in ident: %s", VAR_3, VAR_2);
  break;
 case 128:
  if (FUNC_2(VAR_3, &VAR_5) < 0)
   FUNC_1("Invalid rfc2822 date \"%s\" in ident: %s", VAR_3, VAR_2);
  break;
 case 130:
  if (FUNC_5("now", VAR_3))
   FUNC_1("Date in ident must be 'now': %s", VAR_2);
  FUNC_0(&VAR_5);
  break;
 }

 return FUNC_4(&VAR_5, ((void*)0));
}
