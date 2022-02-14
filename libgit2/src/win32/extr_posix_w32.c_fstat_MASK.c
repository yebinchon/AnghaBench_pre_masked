
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ HANDLE ;
typedef int BY_HANDLE_FILE_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct stat*,int *) ;

int FUNC_3(int VAR_3, struct stat *VAR_4)
{
 BY_HANDLE_FILE_INFORMATION VAR_5;

 HANDLE VAR_6 = (HANDLE)FUNC_1(VAR_3);

 if (VAR_6 == VAR_1 ||
  !FUNC_0(VAR_6, &VAR_5)) {
  VAR_2 = VAR_0;
  return -1;
 }

 FUNC_2(VAR_4, &VAR_5);
 return 0;
}
