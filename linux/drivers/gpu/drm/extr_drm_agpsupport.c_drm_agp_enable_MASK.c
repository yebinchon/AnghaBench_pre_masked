
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; } ;
struct drm_agp_mode {int mode; } ;
struct TYPE_2__ {int enabled; int bridge; int mode; int acquired; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct drm_device *VAR_1, struct drm_agp_mode VAR_2)
{
 if (!VAR_1->agp || !VAR_1->agp->acquired)
  return -VAR_0;

 VAR_1->agp->mode = VAR_2.mode;
 FUNC_0(VAR_1->agp->bridge, VAR_2.mode);
 VAR_1->agp->enabled = 1;
 return 0;
}
