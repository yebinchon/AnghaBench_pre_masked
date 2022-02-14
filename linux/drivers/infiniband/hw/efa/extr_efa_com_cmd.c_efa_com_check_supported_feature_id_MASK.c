
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efa_com_dev {int supported_features; } ;
typedef enum efa_admin_aq_feature_id { ____Placeholder_efa_admin_aq_feature_id } efa_admin_aq_feature_id ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct efa_com_dev *VAR_1,
       enum efa_admin_aq_feature_id VAR_2)
{
 u32 VAR_3 = 1 << VAR_2;


 if (VAR_2 != VAR_0 &&
     !(VAR_1->supported_features & VAR_3))
  return 0;

 return 1;
}
