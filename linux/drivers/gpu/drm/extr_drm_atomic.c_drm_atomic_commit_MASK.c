
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_config {TYPE_1__* funcs; } ;
struct drm_atomic_state {TYPE_2__* dev; } ;
struct TYPE_4__ {struct drm_mode_config mode_config; } ;
struct TYPE_3__ {int (* atomic_commit ) (TYPE_2__*,struct drm_atomic_state*,int) ;} ;


 int FUNC_0 (char*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int FUNC_2 (TYPE_2__*,struct drm_atomic_state*,int) ;

int FUNC_3(struct drm_atomic_state *VAR_0)
{
 struct drm_mode_config *VAR_1 = &VAR_0->dev->mode_config;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_0("committing %p\n", VAR_0);

 return VAR_1->funcs->atomic_commit(VAR_0->dev, VAR_0, 0);
}
