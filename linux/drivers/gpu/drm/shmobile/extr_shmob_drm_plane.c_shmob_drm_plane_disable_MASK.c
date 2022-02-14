
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmob_drm_plane {int index; int * format; } ;
struct shmob_drm_device {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_2__ {struct shmob_drm_device* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct shmob_drm_device*,int ,int ) ;
 struct shmob_drm_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_0,
       struct drm_modeset_acquire_ctx *VAR_1)
{
 struct shmob_drm_plane *VAR_2 = FUNC_2(VAR_0);
 struct shmob_drm_device *VAR_3 = VAR_0->dev->dev_private;

 VAR_2->format = ((void*)0);

 FUNC_1(VAR_3, FUNC_0(VAR_2->index), 0);
 return 0;
}
