
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 u32 VAR_2 = 0;
 u32 VAR_3, VAR_4;
 int VAR_5;

 FUNC_2(VAR_0, VAR_3, VAR_4);

 switch (VAR_3 & 0x07) {
 case 5:
  VAR_2 = 100000;
  break;
 case 1:
  VAR_2 = 133333;
  break;
 case 3:
  VAR_2 = 166667;
  break;
 case 2:
  VAR_2 = 200000;
  break;
 case 0:
  VAR_2 = 266667;
  break;
 case 4:
  VAR_2 = 333333;
  break;
 default:
  FUNC_1("PCORE - MSR_FSB_FREQ undefined value\n");
 }

 FUNC_2(VAR_1, VAR_3, VAR_4);
 FUNC_0("PCORE - MSR_IA32_EBL_CR_POWERON: 0x%x 0x%x\n",
   VAR_3, VAR_4);

 VAR_4 = (VAR_3 >> 22) & 0x1f;
 FUNC_0("bits 22-26 are 0x%x, speed is %u\n",
   VAR_4, (VAR_4 * VAR_2));

 VAR_5 = (VAR_4 * VAR_2);
 return VAR_5;
}
