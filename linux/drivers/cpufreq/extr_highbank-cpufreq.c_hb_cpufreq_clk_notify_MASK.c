
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct clk_notifier_data {scalar_t__ new_rate; scalar_t__ old_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5,
    unsigned long VAR_6, void *VAR_7)
{
 struct clk_notifier_data *VAR_8 = VAR_7;
 int VAR_9 = 0;

 if (VAR_6 == VAR_4) {
  if (VAR_8->new_rate > VAR_8->old_rate)
   while (FUNC_0(VAR_8->new_rate))
    if (VAR_9++ > VAR_0)
     return VAR_1;
 } else if (VAR_6 == VAR_3) {
  if (VAR_8->new_rate < VAR_8->old_rate)
   while (FUNC_0(VAR_8->new_rate))
    if (VAR_9++ > VAR_0)
     return VAR_1;
 }

 return VAR_2;
}
