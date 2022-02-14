
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {scalar_t__ handle; } ;
struct TYPE_14__ {int olut; int curs; } ;
struct TYPE_13__ {int visible; } ;
struct TYPE_12__ {int offset; int h; int w; int layout; int pitch; int blocks; int blockh; int kind; int format; int handle; int y; int x; } ;
struct nv50_head_atom {TYPE_7__ olut; TYPE_6__ set; TYPE_5__ curs; TYPE_4__ core; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_11__ {int index; TYPE_2__ base; } ;
struct nv50_head {TYPE_3__ base; } ;
struct nv50_dmac {int dummy; } ;
struct TYPE_16__ {TYPE_1__* core; } ;
struct TYPE_9__ {struct nv50_dmac chan; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_dmac*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_dmac*,int) ;
 TYPE_8__* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_dmac *VAR_2 = &FUNC_4(VAR_0->base.base.dev)->core->chan;
 u32 *VAR_3;
 if ((VAR_3 = FUNC_3(VAR_2, 9))) {
  FUNC_2(VAR_3, 0x0860 + VAR_0->base.index * 0x400, 1);
  FUNC_0(VAR_3, VAR_1->core.offset >> 8);
  FUNC_2(VAR_3, 0x0868 + VAR_0->base.index * 0x400, 4);
  FUNC_0(VAR_3, VAR_1->core.h << 16 | VAR_1->core.w);
  FUNC_0(VAR_3, VAR_1->core.layout << 20 |
          (VAR_1->core.pitch >> 8) << 8 |
          VAR_1->core.blocks << 8 |
          VAR_1->core.blockh);
  FUNC_0(VAR_3, VAR_1->core.kind << 16 |
          VAR_1->core.format << 8);
  FUNC_0(VAR_3, VAR_1->core.handle);
  FUNC_2(VAR_3, 0x08c0 + VAR_0->base.index * 0x400, 1);
  FUNC_0(VAR_3, VAR_1->core.y << 16 | VAR_1->core.x);
  FUNC_1(VAR_3, VAR_2);





  VAR_1->set.curs = VAR_1->curs.visible;
  VAR_1->set.olut = VAR_1->olut.handle != 0;
 }
}
