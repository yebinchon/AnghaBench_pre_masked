
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_atomic_state {int private_objs; int planes; int crtcs; int connectors; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct drm_atomic_state *VAR_0)
{
 FUNC_0(VAR_0->connectors);
 FUNC_0(VAR_0->crtcs);
 FUNC_0(VAR_0->planes);
 FUNC_0(VAR_0->private_objs);
}
