
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dcu_drm_device {int regmap; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {struct fsl_dcu_drm_device* dev_private; } ;


 int FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_1,
          struct drm_plane_state *VAR_2)
{
 struct fsl_dcu_drm_device *VAR_3 = VAR_1->dev->dev_private;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 < 0)
  return;

 FUNC_2(VAR_3->regmap, FUNC_0(VAR_5, 4), &VAR_4);
 VAR_4 &= ~VAR_0;
 FUNC_3(VAR_3->regmap, FUNC_0(VAR_5, 4), VAR_4);
}
