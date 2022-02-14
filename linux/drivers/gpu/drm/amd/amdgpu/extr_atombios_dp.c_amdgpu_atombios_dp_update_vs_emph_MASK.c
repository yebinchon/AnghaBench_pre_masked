
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_atombios_dp_link_train_info {int dp_lane_count; int * train_set; int aux; int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct amdgpu_atombios_dp_link_train_info *VAR_2)
{

 FUNC_0(VAR_2->encoder,
            VAR_0,
            0, VAR_2->train_set[0]);


 FUNC_1(VAR_2->aux, VAR_1,
     VAR_2->train_set, VAR_2->dp_lane_count);
}
