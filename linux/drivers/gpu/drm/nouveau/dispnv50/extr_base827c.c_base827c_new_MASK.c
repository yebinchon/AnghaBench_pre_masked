
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_wndw {int dummy; } ;
struct nouveau_drm {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct nouveau_drm*,int,int ,int,struct nv50_wndw**) ;
 int VAR_1 ;

int
FUNC_1(struct nouveau_drm *VAR_2, int VAR_3, s32 VAR_4,
      struct nv50_wndw **VAR_5)
{
 return FUNC_0(&VAR_1, VAR_0, VAR_2, VAR_3, VAR_4,
        0x00000002 << (VAR_3 * 8), VAR_5);
}
