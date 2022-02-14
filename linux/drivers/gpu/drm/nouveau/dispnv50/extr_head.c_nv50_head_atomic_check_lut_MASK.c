
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int buffer; int handle; } ;
struct TYPE_13__ {scalar_t__ olut; scalar_t__ mask; } ;
struct TYPE_12__ {struct drm_property_blob* gamma_lut; } ;
struct nv50_head_atom {TYPE_8__ olut; TYPE_4__ wndw; TYPE_3__ state; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct nv50_head {TYPE_9__* func; TYPE_2__ base; } ;
struct nv50_disp {TYPE_7__* core; } ;
struct drm_property_blob {int dummy; } ;
struct TYPE_18__ {int (* olut ) (struct nv50_head*,struct nv50_head_atom*) ;int olut_identity; } ;
struct TYPE_14__ {int handle; } ;
struct TYPE_15__ {TYPE_5__ vram; } ;
struct TYPE_16__ {TYPE_6__ chan; } ;


 int VAR_0 ;
 struct nv50_disp* FUNC_0 (int ) ;
 int FUNC_1 (struct nv50_head*,struct nv50_head_atom*) ;

__attribute__((used)) static int
FUNC_2(struct nv50_head *VAR_1,
      struct nv50_head_atom *VAR_2)
{
 struct nv50_disp *VAR_3 = FUNC_0(VAR_1->base.base.dev);
 struct drm_property_blob *VAR_4 = VAR_2->state.gamma_lut;


 if (VAR_4) {



  if (VAR_2->wndw.olut) {



   if (VAR_2->wndw.olut != VAR_2->wndw.mask)
    return -VAR_0;
   VAR_4 = ((void*)0);
  }
 }

 if (!VAR_4 && !VAR_1->func->olut_identity) {
  VAR_2->olut.handle = 0;
  return 0;
 }

 VAR_2->olut.handle = VAR_3->core->chan.vram.handle;
 VAR_2->olut.buffer = !VAR_2->olut.buffer;
 VAR_1->func->olut(VAR_1, VAR_2);
 return 0;
}
