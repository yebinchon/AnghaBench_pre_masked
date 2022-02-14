
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handle; } ;
struct TYPE_8__ {scalar_t__ handle; } ;
struct nv50_wndw_atom {TYPE_1__ sema; TYPE_4__ ntfy; } ;
struct TYPE_6__ {int name; int dev; } ;
struct nv50_wndw {TYPE_3__* func; TYPE_2__ plane; } ;
struct nv50_head_atom {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct TYPE_7__ {int (* release ) (struct nv50_wndw*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;} ;


 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nv50_wndw*,struct nv50_wndw_atom*,struct nv50_head_atom*) ;

__attribute__((used)) static void
FUNC_3(struct nv50_wndw *VAR_0,
          struct nv50_wndw_atom *VAR_1,
          struct nv50_head_atom *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_0->plane.dev);
 FUNC_0(VAR_3, "%s release\n", VAR_0->plane.name);
 VAR_0->func->release(VAR_0, VAR_1, VAR_2);
 VAR_1->ntfy.handle = 0;
 VAR_1->sema.handle = 0;
}
