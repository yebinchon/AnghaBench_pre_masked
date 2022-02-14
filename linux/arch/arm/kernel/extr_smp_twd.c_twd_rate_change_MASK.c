
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct clk_notifier_data {int new_rate; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,void*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3,
 unsigned long VAR_4, void *VAR_5)
{
 struct clk_notifier_data *VAR_6 = VAR_5;






 if (VAR_4 == VAR_1)
  FUNC_0(VAR_2,
      (void *)&VAR_6->new_rate, 1);

 return VAR_0;
}
