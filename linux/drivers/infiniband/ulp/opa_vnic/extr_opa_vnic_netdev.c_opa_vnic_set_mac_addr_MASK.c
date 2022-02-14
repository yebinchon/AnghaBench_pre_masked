
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct TYPE_3__ {int uc_macs_gen_count; } ;
struct TYPE_4__ {TYPE_1__ vport; } ;
struct opa_vnic_adapter {TYPE_2__ info; int lock; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct opa_vnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct opa_vnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct opa_vnic_adapter *VAR_4 = FUNC_4(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 int VAR_6;

 if (!FUNC_1(VAR_2->dev_addr, VAR_5->sa_data, VAR_0))
  return 0;

 FUNC_2(&VAR_4->lock);
 VAR_6 = FUNC_0(VAR_2, VAR_3);
 FUNC_3(&VAR_4->lock);
 if (VAR_6)
  return VAR_6;

 VAR_4->info.vport.uc_macs_gen_count++;
 FUNC_5(VAR_4,
       VAR_1);
 return 0;
}
