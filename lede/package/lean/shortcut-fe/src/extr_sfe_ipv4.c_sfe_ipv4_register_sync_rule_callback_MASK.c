
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4 {int lock; int sync_rule_callback; } ;
typedef int sfe_sync_rule_callback_t ;


 struct sfe_ipv4 VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(sfe_sync_rule_callback_t VAR_1)
{
 struct sfe_ipv4 *VAR_2 = &VAR_0;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2->sync_rule_callback, VAR_1);
 FUNC_2(&VAR_2->lock);
}
