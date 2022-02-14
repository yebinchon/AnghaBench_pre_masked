
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dev; int regs_lock; } ;
struct bcm2835_clock_data {scalar_t__ tcnt_mux; int name; int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bcm2835_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm2835_cprman*,scalar_t__) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct bcm2835_cprman*,int ) ;
 int FUNC_4 (struct bcm2835_cprman*,int ,int) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2)
{
 struct bcm2835_clock *VAR_3 = FUNC_0(VAR_2);
 struct bcm2835_cprman *VAR_4 = VAR_3->cprman;
 const struct bcm2835_clock_data *VAR_5 = VAR_3->data;

 FUNC_6(&VAR_4->regs_lock);
 FUNC_4(VAR_4, VAR_5->ctl_reg,
       FUNC_3(VAR_4, VAR_5->ctl_reg) |
       VAR_0 |
       VAR_1);
 FUNC_7(&VAR_4->regs_lock);




 if (VAR_5->tcnt_mux && 0) {
  FUNC_5(VAR_4->dev,
    "clk %s: rate %ld, measure %ld\n",
    VAR_5->name,
    FUNC_2(VAR_2),
    FUNC_1(VAR_4, VAR_5->tcnt_mux));
 }

 return 0;
}
