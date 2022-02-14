
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane {int disabling; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (struct ipu_plane*,int) ;
 struct ipu_plane* FUNC_1 (struct drm_plane*) ;

void FUNC_2(struct drm_plane *VAR_0)
{
 struct ipu_plane *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->disabling) {
  VAR_1->disabling = 0;
  FUNC_0(VAR_1, 0);
 }
}
