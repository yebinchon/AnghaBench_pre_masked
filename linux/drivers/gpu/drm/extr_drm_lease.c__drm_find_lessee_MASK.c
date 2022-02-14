
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_master {TYPE_2__* dev; } ;
struct TYPE_6__ {int lessee_idr; } ;
struct TYPE_4__ {int idr_mutex; } ;
struct TYPE_5__ {TYPE_1__ mode_config; } ;


 TYPE_3__* FUNC_0 (struct drm_master*) ;
 struct drm_master* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct drm_master*
FUNC_3(struct drm_master *VAR_0, int VAR_1)
{
 FUNC_2(&VAR_0->dev->mode_config.idr_mutex);
 return FUNC_1(&FUNC_0(VAR_0)->lessee_idr, VAR_1);
}
