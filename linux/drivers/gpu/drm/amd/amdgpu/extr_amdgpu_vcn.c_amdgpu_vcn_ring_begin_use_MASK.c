
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dpg_pause_state {void* jpeg; void* fw_based; } ;
struct amdgpu_ring {size_t me; TYPE_3__* funcs; struct amdgpu_device* adev; } ;
struct TYPE_8__ {unsigned int num_enc_rings; int (* pause_dpg_mode ) (struct amdgpu_device*,struct dpg_pause_state*) ;TYPE_2__* inst; int idle_work; } ;
struct TYPE_5__ {scalar_t__ dpm_enabled; } ;
struct amdgpu_device {scalar_t__ asic_type; int pg_flags; TYPE_4__ vcn; TYPE_1__ pm; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {int ring_jpeg; int * ring_enc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_device*,struct dpg_pause_state*) ;

void FUNC_6(struct amdgpu_ring *VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_8->adev;
 bool VAR_10 = !FUNC_4(&VAR_9->vcn.idle_work);

 if (VAR_10) {
  FUNC_3(VAR_9, 0);
  if (VAR_9->asic_type < VAR_5 && VAR_9->pm.dpm_enabled)
   FUNC_1(VAR_9, 1);
  else
   FUNC_0(VAR_9, VAR_2,
              VAR_3);
 }

 if (VAR_9->pg_flags & VAR_4) {
  struct dpg_pause_state VAR_11;
  unsigned int VAR_12 = 0;
  unsigned int VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_9->vcn.num_enc_rings; ++VAR_13) {
   VAR_12 += FUNC_2(&VAR_9->vcn.inst[VAR_8->me].ring_enc[VAR_13]);
  }
  if (VAR_12)
   VAR_11.fw_based = VAR_6;
  else
   VAR_11.fw_based = VAR_7;

  if (FUNC_2(&VAR_9->vcn.inst[VAR_8->me].ring_jpeg))
   VAR_11.jpeg = VAR_6;
  else
   VAR_11.jpeg = VAR_7;

  if (VAR_8->funcs->type == VAR_0)
   VAR_11.fw_based = VAR_6;
  else if (VAR_8->funcs->type == VAR_1)
   VAR_11.jpeg = VAR_6;

  VAR_9->vcn.pause_dpg_mode(VAR_9, &VAR_11);
 }
}
