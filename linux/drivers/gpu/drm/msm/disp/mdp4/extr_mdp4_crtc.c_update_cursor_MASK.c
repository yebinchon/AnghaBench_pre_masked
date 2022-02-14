
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_kms {int aspace; } ;
struct TYPE_3__ {struct msm_kms base; } ;
struct mdp4_kms {int blank_cursor_iova; TYPE_1__ base; } ;
struct TYPE_4__ {int stale; int next_iova; int lock; int y; int x; struct drm_gem_object* scanout_bo; int height; int width; struct drm_gem_object* next_bo; } ;
struct mdp4_crtc {int dma; TYPE_2__ cursor; int unref_cursor_work; } ;
struct drm_gem_object {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum mdp4_dma { ____Placeholder_mdp4_dma } mdp4_dma ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct drm_gem_object*) ;
 int FUNC_10 (struct drm_gem_object*) ;
 struct mdp4_kms* FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (struct mdp4_kms*,int ,int) ;
 int FUNC_13 (struct drm_gem_object*,int ,int*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 struct mdp4_crtc* FUNC_16 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_17(struct drm_crtc *VAR_2)
{
 struct mdp4_crtc *VAR_3 = FUNC_16(VAR_2);
 struct mdp4_kms *VAR_4 = FUNC_11(VAR_2);
 struct msm_kms *VAR_5 = &VAR_4->base.base;
 enum mdp4_dma VAR_6 = VAR_3->dma;
 unsigned long VAR_7;

 FUNC_14(&VAR_3->cursor.lock, VAR_7);
 if (VAR_3->cursor.stale) {
  struct drm_gem_object *VAR_8 = VAR_3->cursor.next_bo;
  struct drm_gem_object *VAR_9 = VAR_3->cursor.scanout_bo;
  uint64_t VAR_10 = VAR_3->cursor.next_iova;

  if (VAR_8) {

   FUNC_10(VAR_8);
   FUNC_13(VAR_8, VAR_5->aspace, &VAR_10);


   FUNC_12(VAR_4, FUNC_8(VAR_6),
     FUNC_4(VAR_3->cursor.width) |
     FUNC_3(VAR_3->cursor.height));
   FUNC_12(VAR_4, FUNC_5(VAR_6), VAR_10);
   FUNC_12(VAR_4, FUNC_6(VAR_6),
     FUNC_0(VAR_0) |
     VAR_1);
  } else {

   FUNC_12(VAR_4, FUNC_5(VAR_6),
     VAR_4->blank_cursor_iova);
  }


  if (VAR_9)
   FUNC_9(&VAR_3->unref_cursor_work, VAR_9);

  VAR_3->cursor.scanout_bo = VAR_8;
  VAR_3->cursor.stale = 0;
 }

 FUNC_12(VAR_4, FUNC_7(VAR_6),
   FUNC_1(VAR_3->cursor.x) |
   FUNC_2(VAR_3->cursor.y));

 FUNC_15(&VAR_3->cursor.lock, VAR_7);
}
