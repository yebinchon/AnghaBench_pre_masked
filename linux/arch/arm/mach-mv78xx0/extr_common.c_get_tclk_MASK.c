
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




 switch ((FUNC_1(VAR_0) >> 6) & 7) {
 case 1:
  VAR_1 = 166666667;
  break;
 case 3:
  VAR_1 = 200000000;
  break;
 default:
  FUNC_0("unknown TCLK PLL setting: %.8x\n",
   FUNC_1(VAR_0));
 }

 return VAR_1;
}
