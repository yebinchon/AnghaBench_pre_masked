
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int) ;

void FUNC_2 (int VAR_0, int *VAR_1, int VAR_2) {
  FUNC_0 (sizeof (int) == 4);
  VAR_1[0] = VAR_2;
  FUNC_0 ((VAR_2 & 3) == 0);
  VAR_2 >>= 2;
  FUNC_0 (VAR_2 >= 5);

  VAR_1[1] = VAR_0;
  VAR_1[VAR_2 - 1] = (int)FUNC_1 (VAR_1, VAR_1[0] - 4);
}
