
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {TYPE_3__* ddev; TYPE_2__ mode_info; } ;
struct TYPE_4__ {int hwmode; } ;
struct radeon_crtc {scalar_t__ flip_status; TYPE_1__ base; } ;
struct TYPE_6__ {int event_lock; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (TYPE_3__*,int,int ,int*,int*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (struct radeon_device*,int) ;
 int VAR_3 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct radeon_device *VAR_4, int VAR_5)
{
 struct radeon_crtc *VAR_6 = VAR_4->mode_info.crtcs[VAR_5];
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;


 if (VAR_6 == ((void*)0))
  return;
 if ((VAR_3 == 2) && FUNC_1(VAR_4))
  return;

 FUNC_6(&VAR_4->ddev->event_lock, VAR_7);
 if (VAR_6->flip_status != VAR_2) {
  FUNC_2("radeon_crtc->flip_status = %d != "
     "RADEON_FLIP_SUBMITTED(%d)\n",
     VAR_6->flip_status,
     VAR_2);
  FUNC_7(&VAR_4->ddev->event_lock, VAR_7);
  return;
 }

 VAR_8 = FUNC_5(VAR_4, VAR_5);
 if (VAR_8 &&
     (VAR_0 &
      FUNC_4(VAR_4->ddev, VAR_5,
     VAR_1,
     &VAR_9, &VAR_10, ((void*)0), ((void*)0),
     &VAR_4->mode_info.crtcs[VAR_5]->base.hwmode)) &&
     ((VAR_9 >= 0 && VAR_10 < 0) || (VAR_10 >= 0 && !FUNC_0(VAR_4)))) {






  VAR_8 = 0;
 }
 FUNC_7(&VAR_4->ddev->event_lock, VAR_7);
 if (!VAR_8)
  FUNC_3(VAR_4, VAR_5);
}
