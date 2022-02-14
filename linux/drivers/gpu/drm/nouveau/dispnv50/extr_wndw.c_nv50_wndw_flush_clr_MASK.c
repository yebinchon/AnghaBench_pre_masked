
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union nv50_wndw_atom_mask {int mask; scalar_t__ image; scalar_t__ csc; scalar_t__ xlut; scalar_t__ ntfy; scalar_t__ sema; } ;
typedef int u32 ;
struct TYPE_6__ {int mask; } ;
struct TYPE_5__ {int mask; } ;
struct nv50_wndw_atom {TYPE_2__ set; TYPE_1__ clr; } ;
struct TYPE_8__ {size_t type; int data; } ;
struct nv50_wndw {TYPE_4__ interlock; TYPE_3__* func; } ;
struct TYPE_7__ {int (* image_clr ) (struct nv50_wndw*) ;int (* csc_clr ) (struct nv50_wndw*) ;int (* xlut_clr ) (struct nv50_wndw*) ;int (* ntfy_clr ) (struct nv50_wndw*) ;int (* sema_clr ) (struct nv50_wndw*) ;} ;


 int FUNC_0 (struct nv50_wndw*) ;
 int FUNC_1 (struct nv50_wndw*) ;
 int FUNC_2 (struct nv50_wndw*) ;
 int FUNC_3 (struct nv50_wndw*) ;
 int FUNC_4 (struct nv50_wndw*) ;

void
FUNC_5(struct nv50_wndw *VAR_0, u32 *VAR_1, bool VAR_2,
      struct nv50_wndw_atom *VAR_3)
{
 union nv50_wndw_atom_mask VAR_4 = {
  .mask = VAR_3->clr.mask & ~(VAR_2 ? 0 : VAR_3->set.mask),
 };
 if (VAR_4.sema ) VAR_0->func-> sema_clr(VAR_0);
 if (VAR_4.ntfy ) VAR_0->func-> ntfy_clr(VAR_0);
 if (VAR_4.xlut ) VAR_0->func-> xlut_clr(VAR_0);
 if (VAR_4.csc ) VAR_0->func-> csc_clr(VAR_0);
 if (VAR_4.image) VAR_0->func->image_clr(VAR_0);

 VAR_1[VAR_0->interlock.type] |= VAR_0->interlock.data;
}
