
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int regs_lock; } ;
struct bcm2835_clock_data {int div_reg; int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int) ;
 struct bcm2835_clock* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct bcm2835_cprman*,int ) ;
 int FUNC_3 (struct bcm2835_cprman*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2,
      unsigned long VAR_3, unsigned long VAR_4)
{
 struct bcm2835_clock *VAR_5 = FUNC_1(VAR_2);
 struct bcm2835_cprman *VAR_6 = VAR_5->cprman;
 const struct bcm2835_clock_data *VAR_7 = VAR_5->data;
 u32 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, 0);
 u32 VAR_9;

 FUNC_4(&VAR_6->regs_lock);
 VAR_9 = FUNC_2(VAR_6, VAR_7->ctl_reg) & ~VAR_1;
 VAR_9 |= (VAR_8 & VAR_0) ? VAR_1 : 0;
 FUNC_3(VAR_6, VAR_7->ctl_reg, VAR_9);

 FUNC_3(VAR_6, VAR_7->div_reg, VAR_8);

 FUNC_5(&VAR_6->regs_lock);

 return 0;
}
