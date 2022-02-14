
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ vce; int grbm_idx_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 u32 VAR_8 = 0;
 FUNC_4(&VAR_7->grbm_idx_mutex);
 FUNC_3(VAR_4, FUNC_0(0));
 if (FUNC_2(VAR_5) & VAR_0) {
  VAR_8 = FUNC_1(VAR_8, VAR_3, VAR_1, 1);
  VAR_8 = FUNC_1(VAR_8, VAR_3, VAR_2, 1);
 }
 FUNC_3(VAR_4, FUNC_0(1));
 if (FUNC_2(VAR_5) & VAR_0) {
  VAR_8 = FUNC_1(VAR_8, VAR_3, VAR_1, 1);
  VAR_8 = FUNC_1(VAR_8, VAR_3, VAR_2, 1);
 }
 FUNC_3(VAR_4, FUNC_0(0));
 FUNC_5(&VAR_7->grbm_idx_mutex);

 if (VAR_8) {
  VAR_7->vce.srbm_soft_reset = VAR_8;
  return 1;
 } else {
  VAR_7->vce.srbm_soft_reset = 0;
  return 0;
 }
}
