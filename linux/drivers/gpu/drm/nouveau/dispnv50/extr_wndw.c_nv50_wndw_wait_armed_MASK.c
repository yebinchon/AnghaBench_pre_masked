
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


struct TYPE_10__ {int offset; } ;
struct TYPE_8__ {scalar_t__ ntfy; } ;
struct nv50_wndw_atom {TYPE_4__ ntfy; TYPE_2__ set; } ;
struct TYPE_11__ {int device; } ;
struct TYPE_12__ {TYPE_5__ base; } ;
struct TYPE_7__ {int dev; } ;
struct nv50_wndw {TYPE_6__ wndw; TYPE_3__* func; TYPE_1__ plane; } ;
struct nv50_disp {int sync; } ;
struct TYPE_9__ {int (* ntfy_wait_begun ) (int ,int ,int ) ;} ;


 struct nv50_disp* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1)
{
 struct nv50_disp *VAR_2 = FUNC_0(VAR_0->plane.dev);
 if (VAR_1->set.ntfy) {
  return VAR_0->func->ntfy_wait_begun(VAR_2->sync,
         VAR_1->ntfy.offset,
         VAR_0->wndw.base.device);
 }
 return 0;
}
