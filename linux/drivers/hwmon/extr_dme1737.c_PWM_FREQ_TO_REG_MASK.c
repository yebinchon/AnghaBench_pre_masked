
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(long VAR_1, int VAR_2)
{
 int VAR_3;


 if (VAR_1 > 27500) {
  VAR_3 = 10;
 } else if (VAR_1 > 22500) {
  VAR_3 = 11;
 } else {
  for (VAR_3 = 9; VAR_3 > 0; VAR_3--) {
   if (VAR_1 > (VAR_0[VAR_3] + VAR_0[VAR_3 - 1] + 1) / 2)
    break;
  }
 }

 return (VAR_2 & 0xf0) | VAR_3;
}
