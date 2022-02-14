
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_bo {int dummy; } ;
struct drm_crtc {TYPE_2__* primary; } ;
struct TYPE_4__ {TYPE_1__* fb; } ;
struct TYPE_3__ {int * obj; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct radeon_bo* FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_bo*,int) ;
 int FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_bo*) ;
 int FUNC_5 (struct drm_crtc*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_1)
{
 FUNC_5(VAR_1, VAR_0);
 if (VAR_1->primary->fb) {
  int VAR_2;
  struct radeon_bo *VAR_3;

  VAR_3 = FUNC_1(VAR_1->primary->fb->obj[0]);
  VAR_2 = FUNC_2(VAR_3, 0);
  if (FUNC_6(VAR_2))
   FUNC_0("failed to reserve rbo before unpin\n");
  else {
   FUNC_3(VAR_3);
   FUNC_4(VAR_3);
  }
 }
}
