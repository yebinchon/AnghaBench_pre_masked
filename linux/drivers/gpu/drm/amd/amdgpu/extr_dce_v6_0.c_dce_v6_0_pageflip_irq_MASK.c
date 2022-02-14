
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_flip_work {int unpin_work; scalar_t__ event; } ;
struct TYPE_3__ {unsigned int num_crtc; struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_2__* ddev; TYPE_1__ mode_info; } ;
struct amdgpu_crtc {scalar_t__ pflip_status; int base; struct amdgpu_flip_work* pflip_works; } ;
struct TYPE_4__ {int event_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_7,
     struct amdgpu_irq_src *VAR_8,
     struct amdgpu_iv_entry *VAR_9)
{
 unsigned long VAR_10;
 unsigned VAR_11;
 struct amdgpu_crtc *VAR_12;
 struct amdgpu_flip_work *VAR_13;

 VAR_11 = (VAR_9->src_id - 8) >> 1;
 VAR_12 = VAR_7->mode_info.crtcs[VAR_11];

 if (VAR_11 >= VAR_7->mode_info.num_crtc) {
  FUNC_1("invalid pageflip crtc %d\n", VAR_11);
  return -VAR_2;
 }

 if (FUNC_2(VAR_6 + VAR_5[VAR_11]) &
     VAR_4)
  FUNC_3(VAR_6 + VAR_5[VAR_11],
         VAR_3);


 if (VAR_12 == ((void*)0))
  return 0;

 FUNC_7(&VAR_7->ddev->event_lock, VAR_10);
 VAR_13 = VAR_12->pflip_works;
 if (VAR_12->pflip_status != VAR_1){
  FUNC_0("amdgpu_crtc->pflip_status = %d != "
      "AMDGPU_FLIP_SUBMITTED(%d)\n",
      VAR_12->pflip_status,
      VAR_1);
  FUNC_8(&VAR_7->ddev->event_lock, VAR_10);
  return 0;
 }


 VAR_12->pflip_status = VAR_0;
 VAR_12->pflip_works = ((void*)0);


 if (VAR_13->event)
  FUNC_4(&VAR_12->base, VAR_13->event);

 FUNC_8(&VAR_7->ddev->event_lock, VAR_10);

 FUNC_5(&VAR_12->base);
 FUNC_6(&VAR_13->unpin_work);

 return 0;
}
