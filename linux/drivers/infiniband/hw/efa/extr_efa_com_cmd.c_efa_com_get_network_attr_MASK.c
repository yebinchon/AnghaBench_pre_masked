
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_com_get_network_attr_result {int mtu; int addr; } ;
struct efa_com_dev {int efa_dev; } ;
struct TYPE_3__ {int mtu; int addr; } ;
struct TYPE_4__ {TYPE_1__ network_attr; } ;
struct efa_admin_get_feature_resp {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_dev*,struct efa_admin_get_feature_resp*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct efa_com_dev *VAR_1,
        struct efa_com_get_network_attr_result *VAR_2)
{
 struct efa_admin_get_feature_resp VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3,
      VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to get network attributes %d\n",
          VAR_4);
  return VAR_4;
 }

 FUNC_2(VAR_2->addr, VAR_3.u.network_attr.addr,
        sizeof(VAR_3.u.network_attr.addr));
 VAR_2->mtu = VAR_3.u.network_attr.mtu;

 return 0;
}
