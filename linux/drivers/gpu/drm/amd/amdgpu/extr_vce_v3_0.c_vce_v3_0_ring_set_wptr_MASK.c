
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int me; int wptr; struct amdgpu_device* adev; } ;
struct TYPE_2__ {scalar_t__ harvest_config; } ;
struct amdgpu_device {int grbm_idx_mutex; TYPE_1__ vce; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_7->adev;

 FUNC_3(&VAR_8->grbm_idx_mutex);
 if (VAR_8->vce.harvest_config == 0 ||
  VAR_8->vce.harvest_config == VAR_1)
  FUNC_1(VAR_2, FUNC_0(0));
 else if (VAR_8->vce.harvest_config == VAR_0)
  FUNC_1(VAR_2, FUNC_0(1));

 if (VAR_7->me == 0)
  FUNC_1(VAR_4, FUNC_2(VAR_7->wptr));
 else if (VAR_7->me == 1)
  FUNC_1(VAR_5, FUNC_2(VAR_7->wptr));
 else
  FUNC_1(VAR_6, FUNC_2(VAR_7->wptr));

 FUNC_1(VAR_2, VAR_3);
 FUNC_4(&VAR_8->grbm_idx_mutex);
}
