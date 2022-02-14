
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_hooks {int * wc_hook; int uc_hook; } ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,void*) ;
 char* FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(void)
{
 struct iconv_hooks VAR_3;
 iconv_t VAR_4;
 size_t VAR_5 = 15, VAR_6 = 40;
 const char **VAR_7;
 const char *VAR_8 = "Hello World!";
 char **VAR_9;
 char *VAR_10;

 VAR_7 = &VAR_8;
 VAR_3.uc_hook = VAR_2;
 VAR_3.wc_hook = ((void*)0);

 VAR_10 = FUNC_4(40);
 VAR_9 = &VAR_10;

 VAR_4 = FUNC_2("UTF-8", "ASCII");
 if (VAR_4 == (iconv_t)-1)
  return (-1);
 if (FUNC_3(VAR_4, VAR_0, (void *)&VAR_3) != 0)
  return (-1);
 if (FUNC_0(VAR_4, VAR_7, &VAR_5, VAR_9, &VAR_6) == (size_t)-1)
  return (-1);
 if (FUNC_1(VAR_4) == -1)
  return (-1);
 return (VAR_1 ? 0 : 1);
}
