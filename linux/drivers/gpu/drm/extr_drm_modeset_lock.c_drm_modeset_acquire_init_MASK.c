
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_modeset_acquire_ctx {int interruptible; int locked; int ww_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_modeset_acquire_ctx*,int ,int) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct drm_modeset_acquire_ctx *VAR_2,
  uint32_t VAR_3)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_2(&VAR_2->ww_ctx, &VAR_1);
 FUNC_0(&VAR_2->locked);

 if (VAR_3 & VAR_0)
  VAR_2->interruptible = 1;
}
