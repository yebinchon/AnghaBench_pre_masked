
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_stats {int writeback; int demotion; int promotion; } ;
typedef enum policy_operation { ____Placeholder_policy_operation } policy_operation ;





 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cache_stats *VAR_0, enum policy_operation VAR_1)
{
 switch (VAR_1) {
 case 129:
  FUNC_0(&VAR_0->promotion);
  break;

 case 130:
  FUNC_0(&VAR_0->demotion);
  break;

 case 128:
  FUNC_0(&VAR_0->writeback);
  break;
 }
}
