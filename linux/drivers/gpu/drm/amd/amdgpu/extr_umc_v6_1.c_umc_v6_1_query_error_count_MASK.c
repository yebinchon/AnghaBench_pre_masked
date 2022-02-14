
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ras_err_data {int ue_count; int ce_count; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int ,int *) ;
 int FUNC_1 (struct amdgpu_device*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
        struct ras_err_data *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3)
{
 FUNC_1(VAR_0, VAR_2,
         &(VAR_1->ce_count));
 FUNC_0(VAR_0, VAR_2,
        &(VAR_1->ue_count));
}
