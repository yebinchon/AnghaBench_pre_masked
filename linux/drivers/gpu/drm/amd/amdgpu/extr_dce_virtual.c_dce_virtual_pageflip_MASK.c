
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_flip_work {struct amdgpu_flip_work* shared; int old_abo; scalar_t__ event; } ;
struct TYPE_3__ {unsigned int num_crtc; struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_2__* ddev; TYPE_1__ mode_info; } ;
struct amdgpu_crtc {scalar_t__ pflip_status; int base; struct amdgpu_flip_work* pflip_works; } ;
struct TYPE_4__ {int event_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amdgpu_flip_work*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_3,
    unsigned VAR_4)
{
 unsigned long VAR_5;
 struct amdgpu_crtc *VAR_6;
 struct amdgpu_flip_work *VAR_7;

 VAR_6 = VAR_3->mode_info.crtcs[VAR_4];

 if (VAR_4 >= VAR_3->mode_info.num_crtc) {
  FUNC_1("invalid pageflip crtc %d\n", VAR_4);
  return -VAR_2;
 }


 if (VAR_6 == ((void*)0))
  return 0;

 FUNC_6(&VAR_3->ddev->event_lock, VAR_5);
 VAR_7 = VAR_6->pflip_works;
 if (VAR_6->pflip_status != VAR_1) {
  FUNC_0("amdgpu_crtc->pflip_status = %d != "
   "AMDGPU_FLIP_SUBMITTED(%d)\n",
   VAR_6->pflip_status,
   VAR_1);
  FUNC_7(&VAR_3->ddev->event_lock, VAR_5);
  return 0;
 }


 VAR_6->pflip_status = VAR_0;
 VAR_6->pflip_works = ((void*)0);


 if (VAR_7->event)
  FUNC_3(&VAR_6->base, VAR_7->event);

 FUNC_7(&VAR_3->ddev->event_lock, VAR_5);

 FUNC_4(&VAR_6->base);
 FUNC_2(&VAR_7->old_abo);
 FUNC_5(VAR_7->shared);
 FUNC_5(VAR_7);

 return 0;
}
