
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int regs_lock; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_clock*) ;
 int FUNC_2 (struct bcm2835_cprman*,int ) ;
 int FUNC_3 (struct bcm2835_cprman*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_1)
{
 struct bcm2835_clock *VAR_2 = FUNC_0(VAR_1);
 struct bcm2835_cprman *VAR_3 = VAR_2->cprman;
 const struct bcm2835_clock_data *VAR_4 = VAR_2->data;

 FUNC_4(&VAR_3->regs_lock);
 FUNC_3(VAR_3, VAR_4->ctl_reg,
       FUNC_2(VAR_3, VAR_4->ctl_reg) & ~VAR_0);
 FUNC_5(&VAR_3->regs_lock);


 FUNC_1(VAR_2);
}
