
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ietf_mpa_v2 {int dummy; } ;
struct ietf_mpa_v1 {int dummy; } ;
struct i40iw_kmem_info {int addr; } ;
struct i40iw_cm_node {int mpa_frame_rev; } ;




 int FUNC_0 (struct i40iw_cm_node*,int ,int ) ;
 int FUNC_1 (struct i40iw_cm_node*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i40iw_cm_node *VAR_0,
        struct i40iw_kmem_info *VAR_1,
        u8 VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_0->mpa_frame_rev) {
 case 129:
  VAR_3 = sizeof(struct ietf_mpa_v1);
  FUNC_0(VAR_0, VAR_1->addr, VAR_2);
  break;
 case 128:
  VAR_3 = sizeof(struct ietf_mpa_v2);
  FUNC_1(VAR_0, VAR_1->addr, VAR_2);
  break;
 default:
  break;
 }

 return VAR_3;
}
