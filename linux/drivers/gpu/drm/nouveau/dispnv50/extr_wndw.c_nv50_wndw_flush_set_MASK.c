
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int point; int mask; scalar_t__ blend; scalar_t__ scale; scalar_t__ csc; scalar_t__ xlut; scalar_t__ image; scalar_t__ ntfy; scalar_t__ sema; } ;
struct TYPE_9__ {int load; int buffer; int offset; } ;
struct TYPE_10__ {TYPE_2__ i; } ;
struct TYPE_8__ {int interval; scalar_t__ mode; } ;
struct nv50_wndw_atom {TYPE_5__ set; TYPE_3__ xlut; scalar_t__ ilut; TYPE_1__ image; } ;
struct TYPE_14__ {size_t type; int data; int wimm; } ;
struct nv50_wndw {TYPE_7__ interlock; TYPE_6__* immd; TYPE_4__* func; int ilut; } ;
struct TYPE_13__ {int (* update ) (struct nv50_wndw*,int*) ;int (* point ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;} ;
struct TYPE_11__ {int (* blend_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* scale_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* csc_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* xlut_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* image_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* ntfy_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;int (* sema_set ) (struct nv50_wndw*,struct nv50_wndw_atom*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_2 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_3 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_4 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_5 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_6 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_7 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_8 (struct nv50_wndw*,struct nv50_wndw_atom*) ;
 int FUNC_9 (struct nv50_wndw*,int*) ;

void
FUNC_10(struct nv50_wndw *VAR_2, u32 *VAR_3,
      struct nv50_wndw_atom *VAR_4)
{
 if (VAR_3[VAR_0]) {
  VAR_4->image.mode = 0;
  VAR_4->image.interval = 1;
 }

 if (VAR_4->set.sema ) VAR_2->func->sema_set (VAR_2, VAR_4);
 if (VAR_4->set.ntfy ) VAR_2->func->ntfy_set (VAR_2, VAR_4);
 if (VAR_4->set.image) VAR_2->func->image_set(VAR_2, VAR_4);

 if (VAR_4->set.xlut ) {
  if (VAR_4->ilut) {
   VAR_4->xlut.i.offset =
    FUNC_0(&VAR_2->ilut, VAR_4->xlut.i.buffer,
           VAR_4->ilut, VAR_4->xlut.i.load);
  }
  VAR_2->func->xlut_set(VAR_2, VAR_4);
 }

 if (VAR_4->set.csc ) VAR_2->func->csc_set (VAR_2, VAR_4);
 if (VAR_4->set.scale) VAR_2->func->scale_set(VAR_2, VAR_4);
 if (VAR_4->set.blend) VAR_2->func->blend_set(VAR_2, VAR_4);
 if (VAR_4->set.point) {
  if (VAR_4->set.point = 0, VAR_4->set.mask)
   VAR_3[VAR_2->interlock.type] |= VAR_2->interlock.data;
  VAR_3[VAR_1] |= VAR_2->interlock.wimm;

  VAR_2->immd->point(VAR_2, VAR_4);
  VAR_2->immd->update(VAR_2, VAR_3);
 } else {
  VAR_3[VAR_2->interlock.type] |= VAR_2->interlock.data;
 }
}
