
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sun8i_phy_clk {TYPE_1__* phy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sun8i_phy_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
      unsigned long VAR_4)
{
 struct sun8i_phy_clk *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6 = 0;
 u8 VAR_7 = 0, VAR_8;

 for (VAR_8 = 1; VAR_8 <= 16; VAR_8++) {
  unsigned long VAR_9 = VAR_4 / VAR_8;

  if (VAR_9 > VAR_3)
   continue;

  if (!VAR_6 ||
      (VAR_3 - VAR_9) < (VAR_3 - VAR_6)) {
   VAR_6 = VAR_9;
   VAR_7 = VAR_8;
  }
 }

 FUNC_2(VAR_5->phy->regs, VAR_1,
      VAR_0,
      FUNC_0(VAR_7));

 return 0;
}
