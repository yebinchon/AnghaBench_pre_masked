
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct decon_context {scalar_t__ frame_id; int vblank_lock; TYPE_1__* crtc; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int base; } ;


 scalar_t__ FUNC_0 (struct decon_context*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct decon_context *VAR_0)
{
 u32 VAR_1;

 FUNC_2(&VAR_0->vblank_lock);

 VAR_1 = FUNC_0(VAR_0, 1);

 if (VAR_1 != VAR_0->frame_id) {

  if ((s32)(VAR_1 - VAR_0->frame_id) > 0)
   FUNC_1(&VAR_0->crtc->base);
  VAR_0->frame_id = VAR_1;
 }

 FUNC_3(&VAR_0->vblank_lock);
}
