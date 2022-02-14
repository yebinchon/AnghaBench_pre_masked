
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct clk_notifier_data {unsigned long new_rate; unsigned long old_rate; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct cdns_i2c {unsigned long i2c_clk; unsigned long input_clk; TYPE_2__ adap; int dev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (unsigned long*,unsigned long,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned long,struct cdns_i2c*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct cdns_i2c* FUNC_4 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3, unsigned long
  VAR_4, void *VAR_5)
{
 struct clk_notifier_data *VAR_6 = VAR_5;
 struct cdns_i2c *VAR_7 = FUNC_4(VAR_3);

 if (FUNC_3(VAR_7->dev))
  return VAR_1;

 switch (VAR_4) {
 case 128:
 {
  unsigned long VAR_8 = VAR_6->new_rate;
  unsigned long VAR_9 = VAR_7->i2c_clk;
  unsigned int VAR_10, VAR_11;
  int VAR_12;

  VAR_12 = FUNC_0(&VAR_9, VAR_8, &VAR_10, &VAR_11);
  if (VAR_12) {
   FUNC_2(VAR_7->adap.dev.parent,
     "clock rate change rejected\n");
   return VAR_2;
  }


  if (VAR_6->new_rate > VAR_6->old_rate)
   FUNC_1(VAR_6->new_rate, VAR_7);

  return VAR_1;
 }
 case 129:
  VAR_7->input_clk = VAR_6->new_rate;

  if (VAR_6->new_rate < VAR_6->old_rate)
   FUNC_1(VAR_6->new_rate, VAR_7);
  return VAR_1;
 case 130:

  if (VAR_6->new_rate > VAR_6->old_rate)
   FUNC_1(VAR_6->old_rate, VAR_7);
  return VAR_1;
 default:
  return VAR_0;
 }
}
