
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_syscon {scalar_t__ clk_val; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 struct clk_syscon* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_9, unsigned long VAR_10,
          unsigned long VAR_11)
{
 struct clk_syscon *VAR_12 = FUNC_1(VAR_9);
 u16 VAR_13;


 if (VAR_12->clk_val != VAR_7)
  return -VAR_0;
 switch (VAR_10) {
 case 13000000:
  VAR_13 = VAR_5;
  break;
 case 52000000:
  VAR_13 = VAR_4;
  break;
 case 104000000:
  VAR_13 = VAR_3;
  break;
 case 208000000:
  VAR_13 = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 VAR_13 |= FUNC_0(VAR_8 + VAR_1) &
  ~VAR_6 ;
 FUNC_2(VAR_13, VAR_8 + VAR_1);
 return 0;
}
