
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_flip_work {int unpin_work; int crtc_id; scalar_t__ event; } ;
struct TYPE_3__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {TYPE_2__* ddev; TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ flip_status; int flip_queue; int base; struct radeon_flip_work* flip_work; } ;
struct TYPE_4__ {int event_lock; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct radeon_device *VAR_2, int VAR_3)
{
 struct radeon_crtc *VAR_4 = VAR_2->mode_info.crtcs[VAR_3];
 struct radeon_flip_work *VAR_5;
 unsigned long VAR_6;


 if (VAR_4 == ((void*)0))
  return;

 FUNC_5(&VAR_2->ddev->event_lock, VAR_6);
 VAR_5 = VAR_4->flip_work;
 if (VAR_4->flip_status != VAR_1) {
  FUNC_0("radeon_crtc->flip_status = %d != "
     "RADEON_FLIP_SUBMITTED(%d)\n",
     VAR_4->flip_status,
     VAR_1);
  FUNC_6(&VAR_2->ddev->event_lock, VAR_6);
  return;
 }


 VAR_4->flip_status = VAR_0;
 VAR_4->flip_work = ((void*)0);


 if (VAR_5->event)
  FUNC_1(&VAR_4->base, VAR_5->event);

 FUNC_6(&VAR_2->ddev->event_lock, VAR_6);

 FUNC_2(&VAR_4->base);
 FUNC_4(VAR_2, VAR_5->crtc_id);
 FUNC_3(VAR_4->flip_queue, &VAR_5->unpin_work);
}
