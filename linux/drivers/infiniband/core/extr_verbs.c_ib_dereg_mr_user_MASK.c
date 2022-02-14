
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_sig_attrs {int dummy; } ;
struct ib_pd {int usecnt; } ;
struct ib_mr {TYPE_2__* device; int res; struct ib_sig_attrs* sig_attrs; struct ib_dm* dm; struct ib_pd* pd; } ;
struct ib_dm {int usecnt; } ;
struct TYPE_3__ {int (* dereg_mr ) (struct ib_mr*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_sig_attrs*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_mr*,struct ib_udata*) ;

int FUNC_4(struct ib_mr *VAR_0, struct ib_udata *VAR_1)
{
 struct ib_pd *VAR_2 = VAR_0->pd;
 struct ib_dm *VAR_3 = VAR_0->dm;
 struct ib_sig_attrs *VAR_4 = VAR_0->sig_attrs;
 int VAR_5;

 FUNC_2(&VAR_0->res);
 VAR_5 = VAR_0->device->ops.dereg_mr(VAR_0, VAR_1);
 if (!VAR_5) {
  FUNC_0(&VAR_2->usecnt);
  if (VAR_3)
   FUNC_0(&VAR_3->usecnt);
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
