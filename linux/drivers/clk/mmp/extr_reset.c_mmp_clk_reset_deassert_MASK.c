
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct mmp_clk_reset_unit {struct mmp_clk_reset_cell* cells; } ;
struct mmp_clk_reset_cell {scalar_t__ lock; int reg; int bits; } ;


 struct mmp_clk_reset_unit* FUNC_0 (struct reset_controller_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_0,
    unsigned long VAR_1)
{
 struct mmp_clk_reset_unit *VAR_2 = FUNC_0(VAR_0);
 struct mmp_clk_reset_cell *VAR_3;
 unsigned long VAR_4 = 0;
 u32 VAR_5;

 VAR_3 = &VAR_2->cells[VAR_1];
 if (VAR_3->lock)
  FUNC_2(VAR_3->lock, VAR_4);

 VAR_5 = FUNC_1(VAR_3->reg);
 VAR_5 &= ~VAR_3->bits;
 FUNC_4(VAR_5, VAR_3->reg);

 if (VAR_3->lock)
  FUNC_3(VAR_3->lock, VAR_4);

 return 0;
}
