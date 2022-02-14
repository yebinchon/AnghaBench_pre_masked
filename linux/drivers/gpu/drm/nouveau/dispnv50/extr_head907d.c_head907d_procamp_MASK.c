
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int sin; int cos; } ;
struct TYPE_8__ {TYPE_1__ sat; } ;
struct nv50_head_atom {TYPE_2__ procamp; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_11__ {int index; TYPE_4__ base; } ;
struct nv50_head {TYPE_5__ base; } ;
struct nv50_dmac {int dummy; } ;
struct TYPE_12__ {TYPE_3__* core; } ;
struct TYPE_9__ {struct nv50_dmac chan; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_dmac*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_dmac*,int) ;
 TYPE_6__* FUNC_4 (int ) ;

void
FUNC_5(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_dmac *VAR_2 = &FUNC_4(VAR_0->base.base.dev)->core->chan;
 u32 *VAR_3;
 if ((VAR_3 = FUNC_3(VAR_2, 2))) {
  FUNC_2(VAR_3, 0x0498 + (VAR_0->base.index * 0x300), 1);
  FUNC_0(VAR_3, VAR_1->procamp.sat.sin << 20 |
          VAR_1->procamp.sat.cos << 8);
  FUNC_1(VAR_3, VAR_2);
 }
}
