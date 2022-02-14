
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv50_msto {int disabled; TYPE_2__* head; struct nv50_mstc* mstc; } ;
struct nv50_mstm {int modified; int disabled; int links; TYPE_3__* outp; int mgr; } ;
struct nv50_mstc {int port; struct nv50_mstm* mstm; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_6__ {int (* update ) (TYPE_3__*,int ,int *,int ,int ) ;} ;
struct TYPE_4__ {int index; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (int *,int ) ;
 struct nv50_msto* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (TYPE_3__*,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_encoder *VAR_0)
{
 struct nv50_msto *VAR_1 = FUNC_1(VAR_0);
 struct nv50_mstc *VAR_2 = VAR_1->mstc;
 struct nv50_mstm *VAR_3 = VAR_2->mstm;

 FUNC_0(&VAR_3->mgr, VAR_2->port);

 VAR_3->outp->update(VAR_3->outp, VAR_1->head->base.index, ((void*)0), 0, 0);
 VAR_3->modified = 1;
 if (!--VAR_3->links)
  VAR_3->disabled = 1;
 VAR_1->disabled = 1;
}
