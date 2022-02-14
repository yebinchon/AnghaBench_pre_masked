
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_4, unsigned long VAR_5,
        unsigned long VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;

 switch (VAR_5) {
 case 18900000:
  VAR_7 = 0x0054;
  break;
 case 20800000:
  VAR_7 = 0x0044;
  break;
 case 23100000:
  VAR_7 = 0x0043;
  break;
 case 26000000:
  VAR_7 = 0x0033;
  break;
 case 29700000:
  VAR_7 = 0x0032;
  break;
 case 34700000:
  VAR_7 = 0x0022;
  break;
 case 41600000:
  VAR_7 = 0x0021;
  break;
 case 52000000:
  VAR_7 = 0x0011;
  break;
 case 104000000:
  VAR_7 = 0x0000;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_3 + VAR_1) &
  ~VAR_2;
 FUNC_1(VAR_8 | VAR_7, VAR_3 + VAR_1);
 return 0;
}
