
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int iH; int iW; int oH; int oW; } ;
struct nv50_head_atom {TYPE_4__ view; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_8__ {int index; TYPE_2__ base; } ;
struct nv50_head {TYPE_3__ base; } ;
struct nv50_dmac {int dummy; } ;
struct TYPE_10__ {TYPE_1__* core; } ;
struct TYPE_6__ {struct nv50_dmac chan; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_dmac*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_dmac*,int) ;
 TYPE_5__* FUNC_4 (int ) ;

void
FUNC_5(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_dmac *VAR_2 = &FUNC_4(VAR_0->base.base.dev)->core->chan;
 u32 *VAR_3;
 if ((VAR_3 = FUNC_3(VAR_2, 4))) {
  FUNC_2(VAR_3, 0x204c + (VAR_0->base.index * 0x400), 1);
  FUNC_0(VAR_3, (VAR_1->view.iH << 16) | VAR_1->view.iW);
  FUNC_2(VAR_3, 0x2058 + (VAR_0->base.index * 0x400), 1);
  FUNC_0(VAR_3, (VAR_1->view.oH << 16) | VAR_1->view.oW);
  FUNC_1(VAR_3, VAR_2);
 }
}
