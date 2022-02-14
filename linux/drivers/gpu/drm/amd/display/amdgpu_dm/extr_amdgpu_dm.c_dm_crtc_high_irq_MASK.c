
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int adjust; scalar_t__ supported; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct dm_crtc_state {TYPE_4__ vrr_params; scalar_t__ stream; TYPE_1__ freesync_config; } ;
struct common_irq_params {scalar_t__ irq_src; struct amdgpu_device* adev; } ;
struct TYPE_8__ {int dc; int freesync_module; } ;
struct amdgpu_device {scalar_t__ family; TYPE_3__* ddev; TYPE_2__ dm; } ;
struct TYPE_11__ {int state; } ;
struct amdgpu_crtc {TYPE_5__ base; int crtc_id; } ;
struct TYPE_9__ {int event_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct dm_crtc_state*) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 struct amdgpu_crtc* FUNC_5 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct dm_crtc_state* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_3)
{
 struct common_irq_params *VAR_4 = VAR_3;
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 struct amdgpu_crtc *VAR_6;
 struct dm_crtc_state *VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_5(VAR_5, VAR_4->irq_src - VAR_1);

 if (VAR_6) {
  VAR_7 = FUNC_9(VAR_6->base.state);

  FUNC_0("crtc:%d, vupdate-vrr:%d\n", VAR_6->crtc_id,
     FUNC_2(VAR_7));






  if (!FUNC_2(VAR_7))
   FUNC_4(&VAR_6->base);




  FUNC_1(&VAR_6->base);

  if (VAR_7->stream && VAR_5->family >= VAR_0 &&
      VAR_7->vrr_params.supported &&
      VAR_7->freesync_config.state == VAR_2) {
   FUNC_7(&VAR_5->ddev->event_lock, VAR_8);
   FUNC_6(
    VAR_5->dm.freesync_module,
    VAR_7->stream,
    &VAR_7->vrr_params);

   FUNC_3(
    VAR_5->dm.dc,
    VAR_7->stream,
    &VAR_7->vrr_params.adjust);
   FUNC_8(&VAR_5->ddev->event_lock, VAR_8);
  }
 }
}
