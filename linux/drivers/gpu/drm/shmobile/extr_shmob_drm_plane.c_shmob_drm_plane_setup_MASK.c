
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_plane {int dummy; } ;
struct drm_plane {int * fb; } ;


 int FUNC_0 (struct shmob_drm_plane*,int *) ;
 struct shmob_drm_plane* FUNC_1 (struct drm_plane*) ;

void FUNC_2(struct drm_plane *VAR_0)
{
 struct shmob_drm_plane *VAR_1 = FUNC_1(VAR_0);

 if (VAR_0->fb == ((void*)0))
  return;

 FUNC_0(VAR_1, VAR_0->fb);
}
