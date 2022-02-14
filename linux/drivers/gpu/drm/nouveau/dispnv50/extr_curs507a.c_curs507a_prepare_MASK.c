
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


typedef scalar_t__ u32 ;
struct TYPE_10__ {scalar_t__* offset; } ;
struct nv50_wndw_atom {TYPE_2__ image; } ;
struct TYPE_9__ {int dev; } ;
struct nv50_wndw {TYPE_1__ plane; } ;
struct TYPE_12__ {scalar_t__ handle; scalar_t__ offset; int visible; } ;
struct TYPE_11__ {int curs; } ;
struct nv50_head_atom {TYPE_4__ curs; TYPE_3__ set; } ;
struct TYPE_16__ {TYPE_7__* core; } ;
struct TYPE_13__ {scalar_t__ handle; } ;
struct TYPE_14__ {TYPE_5__ vram; } ;
struct TYPE_15__ {TYPE_6__ chan; } ;


 TYPE_8__* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nv50_wndw *VAR_0, struct nv50_head_atom *VAR_1,
   struct nv50_wndw_atom *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0->plane.dev)->core->chan.vram.handle;
 u32 VAR_4 = VAR_2->image.offset[0];
 if (VAR_1->curs.handle != VAR_3 || VAR_1->curs.offset != VAR_4) {
  VAR_1->curs.handle = VAR_3;
  VAR_1->curs.offset = VAR_4;
  VAR_1->set.curs = VAR_1->curs.visible;
 }
}
