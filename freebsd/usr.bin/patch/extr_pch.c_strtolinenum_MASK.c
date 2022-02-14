
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LINENUM ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char const*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ,char const**) ;

__attribute__((used)) static LINENUM
FUNC_4(char *VAR_2, char **VAR_3)
{
 LINENUM VAR_4;
 char VAR_5;
 char *VAR_6;
 const char *VAR_7;

 for (VAR_6 = VAR_2; FUNC_1((unsigned char)*VAR_6); VAR_6++)
  ;

 if (VAR_6 == VAR_2)
  FUNC_2();

 VAR_5 = *VAR_6;
 *VAR_6 = '\0';

 VAR_4 = FUNC_3(VAR_2, 0, VAR_0, &VAR_7);
 if (VAR_7 != ((void*)0))
  FUNC_0("invalid line number at line %ld: `%s' is %s\n",
      VAR_1, VAR_2, VAR_7);

 *VAR_6 = VAR_5;
 *VAR_3 = VAR_6;

 return VAR_4;
}
