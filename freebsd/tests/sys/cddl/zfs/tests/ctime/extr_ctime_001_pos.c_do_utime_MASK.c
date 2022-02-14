
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int *) ;

int
FUNC_3(const char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0)) {
  return (-1);
 }




 if (FUNC_2(VAR_2, ((void*)0)) == -1) {
  VAR_3 = VAR_0;
 }
 if (VAR_3 != 0) {
  FUNC_1(VAR_1, "utime(%s, NULL)\n", VAR_2);
  FUNC_0(1);
 }

 return (VAR_3);
}
