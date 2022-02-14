
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s6e63j0x03 {TYPE_2__* bl_dev; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 struct s6e63j0x03* FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct s6e63j0x03*) ;
 int FUNC_2 (struct s6e63j0x03*) ;
 int FUNC_3 (struct s6e63j0x03*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_1)
{
 struct s6e63j0x03 *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  goto err;

 VAR_2->bl_dev->props.power = VAR_0;

 return 0;

err:
 FUNC_2(VAR_2);
 return VAR_3;
}
