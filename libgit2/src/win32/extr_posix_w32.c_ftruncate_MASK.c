
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,long) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int VAR_3 ;

int FUNC_2(int VAR_4, git_off_t VAR_5)
{
 if (VAR_5 < 0) {
  VAR_3 = VAR_1;
  return -1;
 }


 return ((FUNC_1(VAR_4, VAR_5) == 0) ? 0 : -1);
}
