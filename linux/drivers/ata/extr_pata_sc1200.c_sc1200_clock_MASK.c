
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{

 u8 VAR_1 = FUNC_0(0x903C);
 u8 VAR_2 = FUNC_0(0x903D);
 u16 VAR_3;

 if (VAR_1 == 0x04 && VAR_2 < VAR_0)
  return 0;




 VAR_3 = FUNC_1(0x901E);
 VAR_3 >>= 8;
 VAR_3 &= 0x03;
 if (VAR_3 == 3)
  VAR_3 = 0;
 return VAR_3;
}
