
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opa_vnic_adapter {int netdev; TYPE_1__* rn_ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* ndo_stop ) (int ) ;} ;


 int VAR_0 ;
 struct opa_vnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct opa_vnic_adapter*,int) ;
 int FUNC_2 (struct opa_vnic_adapter*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct opa_vnic_adapter *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = VAR_2->rn_ops->ndo_stop(VAR_2->netdev);
 if (VAR_3) {
  FUNC_4("close failed %d\n", VAR_3);
  return VAR_3;
 }


 FUNC_1(VAR_2, 0);
 FUNC_2(VAR_2,
       VAR_0);
 return 0;
}
