
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
struct bcm2835_gate_data {scalar_t__ ctl_reg; int parent; int name; } ;
struct bcm2835_cprman {int regs_lock; scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk* FUNC_0 (int ,int ,int ,int,scalar_t__,int ,int ,int *) ;

__attribute__((used)) static struct clk *FUNC_1(struct bcm2835_cprman *VAR_3,
      const struct bcm2835_gate_data *VAR_4)
{
 return FUNC_0(VAR_3->dev, VAR_4->name, VAR_4->parent,
     VAR_0 | VAR_1,
     VAR_3->regs + VAR_4->ctl_reg,
     VAR_2, 0, &VAR_3->regs_lock);
}
