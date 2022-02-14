
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,unsigned long,int) ;

void FUNC_1(float VAR_0[], unsigned long VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = VAR_1/4;
 if (VAR_1 < VAR_4) return;
 if (VAR_2 >= 0) {
  for (VAR_3=VAR_1;VAR_3>=VAR_4;VAR_3>>=1) FUNC_0(VAR_0,VAR_3,VAR_2);
 } else {
  for (VAR_3=VAR_4;VAR_3<=VAR_1;VAR_3<<=1) FUNC_0(VAR_0,VAR_3,VAR_2);
 }
}
