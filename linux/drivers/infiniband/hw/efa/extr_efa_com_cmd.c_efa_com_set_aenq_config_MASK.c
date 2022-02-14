
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct efa_com_dev {int efa_dev; } ;
struct efa_admin_set_feature_resp {int dummy; } ;
struct TYPE_7__ {int enabled_groups; } ;
struct TYPE_8__ {TYPE_3__ aenq; } ;
struct efa_admin_set_feature_cmd {TYPE_4__ u; } ;
struct TYPE_5__ {int supported_groups; int enabled_groups; } ;
struct TYPE_6__ {TYPE_1__ aenq; } ;
struct efa_admin_get_feature_resp {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efa_com_dev*,struct efa_admin_get_feature_resp*,int ) ;
 int FUNC_1 (struct efa_com_dev*,struct efa_admin_set_feature_resp*,struct efa_admin_set_feature_cmd*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*,int,...) ;

int FUNC_4(struct efa_com_dev *VAR_2, u32 VAR_3)
{
 struct efa_admin_get_feature_resp VAR_4;
 struct efa_admin_set_feature_resp VAR_5;
 struct efa_admin_set_feature_cmd VAR_6 = {};
 int VAR_7;

 FUNC_2(VAR_2->efa_dev, "Configuring aenq with groups[%#x]\n", VAR_3);

 VAR_7 = FUNC_0(VAR_2, &VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_3(VAR_2->efa_dev,
          "Failed to get aenq attributes: %d\n",
          VAR_7);
  return VAR_7;
 }

 FUNC_2(VAR_2->efa_dev,
    "Get aenq groups: supported[%#x] enabled[%#x]\n",
    VAR_4.u.aenq.supported_groups,
    VAR_4.u.aenq.enabled_groups);

 if ((VAR_4.u.aenq.supported_groups & VAR_3) != VAR_3) {
  FUNC_3(
   VAR_2->efa_dev,
   "Trying to set unsupported aenq groups[%#x] supported[%#x]\n",
   VAR_3, VAR_4.u.aenq.supported_groups);
  return -VAR_1;
 }

 VAR_6.u.aenq.enabled_groups = VAR_3;
 VAR_7 = FUNC_1(VAR_2, &VAR_5, &VAR_6,
      VAR_0);
 if (VAR_7) {
  FUNC_3(VAR_2->efa_dev,
          "Failed to set aenq attributes: %d\n",
          VAR_7);
  return VAR_7;
 }

 return 0;
}
