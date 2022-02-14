
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int aspace; } ;
struct mdp4_plane {int pipe; } ;
struct TYPE_2__ {struct msm_kms base; } ;
struct mdp4_kms {TYPE_1__ base; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int * pitches; } ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 struct mdp4_kms* FUNC_10 (struct drm_plane*) ;
 int FUNC_11 (struct mdp4_kms*,int ,int) ;
 int FUNC_12 (struct drm_framebuffer*,int ,int) ;
 struct mdp4_plane* FUNC_13 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_14(struct drm_plane *VAR_0,
  struct drm_framebuffer *VAR_1)
{
 struct mdp4_plane *VAR_2 = FUNC_13(VAR_0);
 struct mdp4_kms *VAR_3 = FUNC_10(VAR_0);
 struct msm_kms *VAR_4 = &VAR_3->base.base;
 enum mdp4_pipe VAR_5 = VAR_2->pipe;

 FUNC_11(VAR_3, FUNC_8(VAR_5),
   FUNC_0(VAR_1->pitches[0]) |
   FUNC_1(VAR_1->pitches[1]));

 FUNC_11(VAR_3, FUNC_9(VAR_5),
   FUNC_2(VAR_1->pitches[2]) |
   FUNC_3(VAR_1->pitches[3]));

 FUNC_11(VAR_3, FUNC_4(VAR_5),
   FUNC_12(VAR_1, VAR_4->aspace, 0));
 FUNC_11(VAR_3, FUNC_5(VAR_5),
   FUNC_12(VAR_1, VAR_4->aspace, 1));
 FUNC_11(VAR_3, FUNC_6(VAR_5),
   FUNC_12(VAR_1, VAR_4->aspace, 2));
 FUNC_11(VAR_3, FUNC_7(VAR_5),
   FUNC_12(VAR_1, VAR_4->aspace, 3));
}
