
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ config_state; int eth_link_status; scalar_t__ oper_state; } ;
struct __opa_veswport_info {TYPE_1__ vport; } ;
struct opa_vnic_adapter {int lock; int netdev; struct __opa_veswport_info info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct opa_vnic_adapter *VAR_4, bool VAR_5)
{
 struct __opa_veswport_info *VAR_6 = &VAR_4->info;

 FUNC_0(&VAR_4->lock);

 if ((VAR_6->vport.config_state == VAR_3) && VAR_5) {
  VAR_6->vport.oper_state = VAR_3;
  VAR_6->vport.eth_link_status = VAR_1;
 } else {
  VAR_6->vport.oper_state = VAR_2;
  VAR_6->vport.eth_link_status = VAR_0;
 }

 if (VAR_6->vport.config_state == VAR_3)
  FUNC_2(VAR_4->netdev);
 else
  FUNC_3(VAR_4->netdev);
 FUNC_1(&VAR_4->lock);
}
