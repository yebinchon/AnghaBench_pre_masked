
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nv50_head_atom_mask {int mask; scalar_t__ curs; scalar_t__ core; scalar_t__ olut; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_4__ {int mask; } ;
struct nv50_head_atom {TYPE_2__ set; TYPE_1__ clr; } ;
struct nv50_head {TYPE_3__* func; } ;
struct TYPE_6__ {int (* curs_clr ) (struct nv50_head*) ;int (* core_clr ) (struct nv50_head*) ;int (* olut_clr ) (struct nv50_head*) ;} ;


 int FUNC_0 (struct nv50_head*) ;
 int FUNC_1 (struct nv50_head*) ;
 int FUNC_2 (struct nv50_head*) ;

void
FUNC_3(struct nv50_head *VAR_0,
      struct nv50_head_atom *VAR_1, bool VAR_2)
{
 union nv50_head_atom_mask VAR_3 = {
  .mask = VAR_1->clr.mask & ~(VAR_2 ? 0 : VAR_1->set.mask),
 };
 if (VAR_3.olut) VAR_0->func->olut_clr(VAR_0);
 if (VAR_3.core) VAR_0->func->core_clr(VAR_0);
 if (VAR_3.curs) VAR_0->func->curs_clr(VAR_0);
}
