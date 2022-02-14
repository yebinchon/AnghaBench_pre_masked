
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int off_t ;


 char* VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int ,char const) ;

__attribute__((used)) static void
FUNC_1(char *VAR_1, size_t VAR_2, off_t VAR_3)
{
 const char *VAR_4 = VAR_0;

 while (VAR_3 > 9999 && VAR_4[1] != '\0') {
  VAR_3 /= 1024;
  VAR_4++;
 }
 FUNC_0(VAR_1, VAR_2, "%4ju %cB", (uintmax_t)VAR_3, *VAR_4);
}
