
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int dev; } ;
struct nv50_msto {int disabled; int * head; struct nv50_mstc* mstc; TYPE_1__ encoder; } ;
struct nv50_mstm {int mgr; } ;
struct nv50_mstc {int port; struct nv50_mstm* mstm; } ;
struct nouveau_drm {int dummy; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 struct nouveau_drm* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nv50_msto *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_2(VAR_0->encoder.dev);
 struct nv50_mstc *VAR_2 = VAR_0->mstc;
 struct nv50_mstm *VAR_3 = VAR_2->mstm;

 if (!VAR_0->disabled)
  return;

 FUNC_0(VAR_1, "%s: msto cleanup\n", VAR_0->encoder.name);

 FUNC_1(&VAR_3->mgr, VAR_2->port);

 VAR_0->mstc = ((void*)0);
 VAR_0->head = ((void*)0);
 VAR_0->disabled = 0;
}
