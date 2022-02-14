
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


struct TYPE_9__ {int ntfy; } ;
struct TYPE_12__ {int offset; int awaken; int handle; } ;
struct nv50_wndw_atom {TYPE_3__ set; TYPE_6__ ntfy; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ sync; } ;
struct TYPE_11__ {int dev; } ;
struct nv50_wndw {int ntfy; TYPE_4__* func; TYPE_2__ wndw; TYPE_5__ plane; } ;
struct nv50_disp {int sync; } ;
struct TYPE_10__ {int (* ntfy_reset ) (int ,int) ;} ;


 struct nv50_disp* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 struct nv50_disp *VAR_2 = FUNC_0(VAR_0->plane.dev);

 VAR_1->ntfy.handle = VAR_0->wndw.sync.handle;
 VAR_1->ntfy.offset = VAR_0->ntfy;
 VAR_1->ntfy.awaken = 0;
 VAR_1->set.ntfy = 1;

 VAR_0->func->ntfy_reset(VAR_2->sync, VAR_0->ntfy);
 VAR_0->ntfy ^= 0x10;
}
