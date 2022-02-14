
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane {int disabling; scalar_t__ dp; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 struct ipu_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct ipu_plane *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->dp)
  FUNC_0(VAR_2->dp, 1);
 VAR_2->disabling = 1;
}
