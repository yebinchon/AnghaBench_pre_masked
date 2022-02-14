
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4) {
  ssize_t VAR_5;

  do
    VAR_5 = FUNC_1(VAR_3, &VAR_4, sizeof(VAR_4));
  while (VAR_5 == -1 && VAR_2 == VAR_0);

  if (VAR_5 == -1 && VAR_2 == VAR_1)
    return;

  FUNC_0(VAR_5 == sizeof(VAR_4));
}
