
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1;




 switch ((FUNC_1(VAR_0) >> 5) & 7) {
 case 0:
  VAR_1 = 166666667;
  break;
 case 1:
  VAR_1 = 200000000;
  break;
 case 2:
  VAR_1 = 266666667;
  break;
 case 3:
  VAR_1 = 333333333;
  break;
 case 4:
  VAR_1 = 400000000;
  break;
 default:
  FUNC_0("unknown HCLK PLL setting: %.8x\n",
   FUNC_1(VAR_0));
 }

 return VAR_1;
}
