
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int visible; int format; int layout; int pitch; int w; scalar_t__ blocks; scalar_t__ blockh; scalar_t__ kind; scalar_t__ offset; int handle; int h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_19__ {int vdisplay; int hdisplay; } ;
struct TYPE_20__ {TYPE_6__ mode; } ;
struct TYPE_18__ {int visible; } ;
struct TYPE_17__ {scalar_t__ cpp; } ;
struct TYPE_16__ {scalar_t__ cpp; int h; int w; scalar_t__ y; scalar_t__ x; } ;
struct nv50_head_atom {TYPE_11__ core; TYPE_7__ state; TYPE_5__ curs; TYPE_4__ ovly; TYPE_3__ base; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
struct nv50_head {TYPE_2__ base; } ;
struct nv50_disp {TYPE_10__* core; } ;
struct TYPE_21__ {int handle; } ;
struct TYPE_22__ {TYPE_8__ vram; } ;
struct TYPE_12__ {TYPE_9__ chan; } ;


 int FUNC_0 (int ,int) ;
 struct nv50_disp* FUNC_1 (int ) ;

void
FUNC_2(struct nv50_head *VAR_0, struct nv50_head_atom *VAR_1)
{
 struct nv50_disp *VAR_2 = FUNC_1(VAR_0->base.base.dev);
 if ((VAR_1->core.visible = (VAR_1->base.cpp != 0))) {
  VAR_1->core.x = VAR_1->base.x;
  VAR_1->core.y = VAR_1->base.y;
  VAR_1->core.w = VAR_1->base.w;
  VAR_1->core.h = VAR_1->base.h;
 } else
 if ((VAR_1->core.visible = (VAR_1->ovly.cpp != 0)) ||
     (VAR_1->core.visible = VAR_1->curs.visible)) {





  VAR_1->core.x = 0;
  VAR_1->core.y = 0;
  VAR_1->core.w = VAR_1->state.mode.hdisplay;
  VAR_1->core.h = VAR_1->state.mode.vdisplay;
 }
 VAR_1->core.handle = VAR_2->core->chan.vram.handle;
 VAR_1->core.offset = 0;
 VAR_1->core.format = 0xcf;
 VAR_1->core.kind = 0;
 VAR_1->core.layout = 1;
 VAR_1->core.blockh = 0;
 VAR_1->core.blocks = 0;
 VAR_1->core.pitch = FUNC_0(VAR_1->core.w, 64) * 4;
}
