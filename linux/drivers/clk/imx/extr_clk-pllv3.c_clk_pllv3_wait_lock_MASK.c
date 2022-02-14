
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv3 {int power_bit; int base; scalar_t__ powerup_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct clk_pllv3 *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_0(10);
 u32 VAR_5 = FUNC_1(VAR_3->base) & VAR_3->power_bit;


 if ((VAR_3->powerup_set && !VAR_5) || (!VAR_3->powerup_set && VAR_5))
  return 0;


 do {
  if (FUNC_1(VAR_3->base) & VAR_0)
   break;
  if (FUNC_2(VAR_2, VAR_4))
   break;
  FUNC_3(50, 500);
 } while (1);

 return FUNC_1(VAR_3->base) & VAR_0 ? 0 : -VAR_1;
}
