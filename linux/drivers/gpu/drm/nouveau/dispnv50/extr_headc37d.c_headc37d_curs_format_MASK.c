
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
struct nv50_wndw_atom {TYPE_2__ image; } ;
struct TYPE_3__ {int format; } ;
struct nv50_head_atom {TYPE_1__ curs; } ;
struct nv50_head {int dummy; } ;



int
FUNC_0(struct nv50_head *VAR_0, struct nv50_wndw_atom *VAR_1,
       struct nv50_head_atom *VAR_2)
{
 VAR_2->curs.format = VAR_1->image.format;
 return 0;
}
