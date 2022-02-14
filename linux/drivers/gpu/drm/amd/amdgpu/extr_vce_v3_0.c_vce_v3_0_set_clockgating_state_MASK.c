
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int harvest_config; } ;
struct amdgpu_device {int cg_flags; int grbm_idx_mutex; TYPE_1__ vce; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_6,
       enum amd_clockgating_state VAR_7)
{
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_6;
 bool VAR_9 = (VAR_7 == VAR_0) ? 1 : 0;
 int VAR_10;

 if (!(VAR_8->cg_flags & VAR_1))
  return 0;

 FUNC_3(&VAR_8->grbm_idx_mutex);
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {

  if (VAR_8->vce.harvest_config & (1 << VAR_10))
   continue;

  FUNC_2(VAR_2, FUNC_0(VAR_10));

  if (!VAR_9) {

   uint32_t VAR_11 = FUNC_1(VAR_4);
   VAR_11 &= ~(0xf | 0xff0);
   VAR_11 |= ((0x0 << 0) | (0x04 << 4));
   FUNC_2(VAR_4, VAR_11);


   VAR_11 = FUNC_1(VAR_5);
   VAR_11 &= ~(0xf | 0xff0);
   VAR_11 |= ((0x0 << 0) | (0x04 << 4));
   FUNC_2(VAR_5, VAR_11);
  }

  FUNC_5(VAR_8, VAR_9);
 }

 FUNC_2(VAR_2, VAR_3);
 FUNC_4(&VAR_8->grbm_idx_mutex);

 return 0;
}
