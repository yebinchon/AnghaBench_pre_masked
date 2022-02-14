
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct clk_hw {int dummy; } ;
struct bcm2835_cprman {int dummy; } ;
struct bcm2835_clock_data {int ctl_reg; } ;
struct bcm2835_clock {struct bcm2835_clock_data* data; struct bcm2835_cprman* cprman; } ;


 int FUNC_0 (int ) ;
 struct bcm2835_clock* FUNC_1 (struct clk_hw*) ;
 int VAR_0 ;
 int FUNC_2 (struct bcm2835_cprman*,int ,int ,int ,struct dentry*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1,
        struct dentry *VAR_2)
{
 struct bcm2835_clock *VAR_3 = FUNC_1(VAR_1);
 struct bcm2835_cprman *VAR_4 = VAR_3->cprman;
 const struct bcm2835_clock_data *VAR_5 = VAR_3->data;

 FUNC_2(VAR_4, VAR_5->ctl_reg,
  VAR_0,
  FUNC_0(VAR_0),
  VAR_2);
}
