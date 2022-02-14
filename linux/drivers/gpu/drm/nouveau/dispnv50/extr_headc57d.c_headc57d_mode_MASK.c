
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
struct TYPE_10__ {int active; int synce; int blanke; int blanks; int blank2e; int blank2s; } ;
struct TYPE_9__ {int active; int synce; int blanke; int blanks; } ;
struct nv50_head_mode {int clock; TYPE_4__ v; TYPE_3__ h; } ;
struct nv50_head_atom {struct nv50_head_mode mode; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_11__ {int index; TYPE_2__ base; } ;
struct nv50_head {TYPE_5__ base; } ;
struct nv50_dmac {int dummy; } ;
struct TYPE_12__ {TYPE_1__* core; } ;
struct TYPE_7__ {struct nv50_dmac chan; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_dmac*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_dmac*,int) ;
 TYPE_6__* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_dmac *VAR_2 = &FUNC_4(VAR_0->base.base.dev)->core->chan;
 struct nv50_head_mode *VAR_3 = &VAR_1->mode;
 u32 *VAR_4;
 if ((VAR_4 = FUNC_3(VAR_2, 12))) {
  FUNC_2(VAR_4, 0x2064 + (VAR_0->base.index * 0x400), 5);
  FUNC_0(VAR_4, (VAR_3->v.active << 16) | VAR_3->h.active );
  FUNC_0(VAR_4, (VAR_3->v.synce << 16) | VAR_3->h.synce );
  FUNC_0(VAR_4, (VAR_3->v.blanke << 16) | VAR_3->h.blanke );
  FUNC_0(VAR_4, (VAR_3->v.blanks << 16) | VAR_3->h.blanks );
  FUNC_0(VAR_4, (VAR_3->v.blank2e << 16) | VAR_3->v.blank2s);
  FUNC_2(VAR_4, 0x200c + (VAR_0->base.index * 0x400), 1);
  FUNC_0(VAR_4, VAR_3->clock * 1000);
  FUNC_2(VAR_4, 0x2028 + (VAR_0->base.index * 0x400), 1);
  FUNC_0(VAR_4, VAR_3->clock * 1000);

  FUNC_2(VAR_4, 0x2030 + (VAR_0->base.index * 0x400), 1);
  FUNC_0(VAR_4, 0x00001014);
  FUNC_1(VAR_4, VAR_2);
 }
}
