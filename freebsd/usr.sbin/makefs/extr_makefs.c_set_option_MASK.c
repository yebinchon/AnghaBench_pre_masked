
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int option_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int const*,char*,char*,char*,size_t) ;

int
FUNC_4(const option_t *VAR_0, const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = VAR_4; *VAR_5; VAR_5++)
  if (*VAR_5 == '=') {
   *VAR_5++ = '\0';
   break;
  }
 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_5, VAR_2, VAR_3);
 FUNC_2(VAR_4);
 return VAR_6;
}
