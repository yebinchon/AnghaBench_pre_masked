
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static void FUNC_0(unsigned long VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3, VAR_4;

 VAR_3 = 0;
 VAR_4 = 0;

 if (VAR_0) {
  while (!(VAR_0 & 0x1)) {
   VAR_0 = VAR_0 >> 1;
   VAR_3++;
  }

  while (VAR_0 & 0x1) {
   VAR_0 = VAR_0 >> 1;
   VAR_4++;
  }
 }

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
