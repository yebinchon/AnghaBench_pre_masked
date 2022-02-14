
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int usecnt; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_ah {TYPE_2__* device; struct ib_pd* pd; struct ib_gid_attr* sgid_attr; } ;
struct TYPE_3__ {int (* destroy_ah ) (struct ib_ah*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_ah*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ib_gid_attr const*) ;
 int FUNC_4 (struct ib_ah*,int) ;

int FUNC_5(struct ib_ah *VAR_1, u32 VAR_2, struct ib_udata *VAR_3)
{
 const struct ib_gid_attr *VAR_4 = VAR_1->sgid_attr;
 struct ib_pd *VAR_5;

 FUNC_2(VAR_2 & VAR_0);

 VAR_5 = VAR_1->pd;

 VAR_1->device->ops.destroy_ah(VAR_1, VAR_2);
 FUNC_0(&VAR_5->usecnt);
 if (VAR_4)
  FUNC_3(VAR_4);

 FUNC_1(VAR_1);
 return 0;
}
