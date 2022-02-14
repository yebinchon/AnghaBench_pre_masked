
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,char const**,size_t*,char**,size_t*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (size_t) ;
 size_t FUNC_4 (char*) ;

int
FUNC_5(void)
{
 iconv_t VAR_1;
 size_t VAR_2, VAR_3;
 char *VAR_4 = "FOOBAR";
 const char *VAR_5 = "FOOBAR";
 char ** VAR_6;
 const char ** VAR_7 = &VAR_5;
 char *VAR_8, *VAR_9;

 VAR_2 = VAR_3 = FUNC_4("FOOBAR");

 if ((VAR_1 = FUNC_2("UTF-8", "ASCII")) == (iconv_t)-1)
  FUNC_0(1, ((void*)0));

 if ((VAR_9 = FUNC_3(VAR_2)) == ((void*)0))
  FUNC_0(1, ((void*)0));

 if (FUNC_1(VAR_1, VAR_7, &VAR_2, &VAR_9, &VAR_3) == -1)
  FUNC_0(1, ((void*)0));

 VAR_6 = &VAR_4;
 VAR_2 = VAR_3 = FUNC_4("FOOBAR");

 if ((VAR_8 = FUNC_3(VAR_2)) == ((void*)0))
  FUNC_0(1, ((void*)0));

 if (FUNC_1(VAR_1, VAR_6, &VAR_2, &VAR_8, &VAR_3) == -1)
  FUNC_0(1, ((void*)0));

 return (VAR_0);

}
