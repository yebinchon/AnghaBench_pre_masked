
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_0) {
  int VAR_1;
  int VAR_2;

  VAR_1 = VAR_0 / 1000;
  VAR_2 = (VAR_0 % 1000) * 1000;
  if (VAR_1 > 0)
    FUNC_0(VAR_1);
  if (VAR_2 > 0)
    FUNC_1(VAR_2);
}
