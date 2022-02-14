
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int adjust; } ;
struct dm_crtc_state {TYPE_3__ vrr_params; scalar_t__ stream; } ;
struct common_irq_params {scalar_t__ irq_src; struct amdgpu_device* adev; } ;
struct TYPE_5__ {int dc; int freesync_module; } ;
struct amdgpu_device {scalar_t__ family; TYPE_2__* ddev; TYPE_1__ dm; } ;
struct TYPE_8__ {int state; } ;
struct amdgpu_crtc {TYPE_4__ base; int crtc_id; } ;
struct TYPE_6__ {int event_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct dm_crtc_state*) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 struct amdgpu_crtc* FUNC_4 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct dm_crtc_state* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_2)
{
 struct common_irq_params *VAR_3 = VAR_2;
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 struct amdgpu_crtc *VAR_5;
 struct dm_crtc_state *VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_4(VAR_4, VAR_3->irq_src - VAR_1);

 if (VAR_5) {
  VAR_6 = FUNC_8(VAR_5->base.state);

  FUNC_0("crtc:%d, vupdate-vrr:%d\n", VAR_5->crtc_id,
     FUNC_1(VAR_6));







  if (FUNC_1(VAR_6)) {
   FUNC_3(&VAR_5->base);


   if (VAR_6->stream &&
       VAR_4->family < VAR_0) {
    FUNC_6(&VAR_4->ddev->event_lock, VAR_7);
    FUNC_5(
        VAR_4->dm.freesync_module,
        VAR_6->stream,
        &VAR_6->vrr_params);

    FUNC_2(
        VAR_4->dm.dc,
        VAR_6->stream,
        &VAR_6->vrr_params.adjust);
    FUNC_7(&VAR_4->ddev->event_lock, VAR_7);
   }
  }
 }
}
