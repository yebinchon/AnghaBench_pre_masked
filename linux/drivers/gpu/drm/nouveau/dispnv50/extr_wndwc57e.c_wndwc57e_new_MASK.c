
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_wndw {int dummy; } ;
struct nouveau_drm {int dummy; } ;
typedef int s32 ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct nouveau_drm*,int,int,int ,int ,struct nv50_wndw**) ;
 int VAR_0 ;

int
FUNC_2(struct nouveau_drm *VAR_1, enum drm_plane_type VAR_2, int VAR_3,
      s32 VAR_4, struct nv50_wndw **VAR_5)
{
 return FUNC_1(&VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
        FUNC_0(VAR_3 >> 1), VAR_5);
}
