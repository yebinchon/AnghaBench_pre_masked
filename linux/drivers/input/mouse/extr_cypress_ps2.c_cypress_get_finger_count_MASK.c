
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned char VAR_1)
{
 unsigned char VAR_2;
 int VAR_3;

 VAR_2 = VAR_1 >> 6;
 VAR_3 = VAR_2 & 0x03;

 if (VAR_3 == 1)
  return 1;

 if (VAR_1 & VAR_0) {

  switch (VAR_3) {
   case 0: return 4;
   case 2: return 5;
   default:

    return 0;
  }
 }

 return VAR_3;
}
