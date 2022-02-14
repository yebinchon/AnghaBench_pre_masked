
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int aspace; } ;
struct TYPE_2__ {struct msm_kms base; } ;
struct mdp5_kms {TYPE_1__ base; } ;
struct drm_framebuffer {int * pitches; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


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
 int FUNC_10 (struct mdp5_kms*,int ,int) ;
 int FUNC_11 (struct drm_framebuffer*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct mdp5_kms *VAR_0,
          enum mdp5_pipe VAR_1,
          struct drm_framebuffer *VAR_2)
{
 struct msm_kms *VAR_3 = &VAR_0->base.base;

 FUNC_10(VAR_0, FUNC_8(VAR_1),
   FUNC_0(VAR_2->pitches[0]) |
   FUNC_1(VAR_2->pitches[1]));

 FUNC_10(VAR_0, FUNC_9(VAR_1),
   FUNC_2(VAR_2->pitches[2]) |
   FUNC_3(VAR_2->pitches[3]));

 FUNC_10(VAR_0, FUNC_4(VAR_1),
   FUNC_11(VAR_2, VAR_3->aspace, 0));
 FUNC_10(VAR_0, FUNC_5(VAR_1),
   FUNC_11(VAR_2, VAR_3->aspace, 1));
 FUNC_10(VAR_0, FUNC_6(VAR_1),
   FUNC_11(VAR_2, VAR_3->aspace, 2));
 FUNC_10(VAR_0, FUNC_7(VAR_1),
   FUNC_11(VAR_2, VAR_3->aspace, 3));
}
