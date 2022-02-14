
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uresp ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct c4iw_pd {int ibpd; int pdid; struct c4iw_dev* rhp; } ;
struct TYPE_6__ {scalar_t__ cur; scalar_t__ max; } ;
struct TYPE_7__ {int lock; TYPE_2__ pd; } ;
struct TYPE_5__ {int pdid_table; } ;
struct TYPE_8__ {TYPE_3__ stats; TYPE_1__ resource; } ;
struct c4iw_dev {TYPE_4__ rdev; } ;
struct c4iw_alloc_pd_resp {int pdid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ib_udata*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_udata*,struct c4iw_alloc_pd_resp*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,...) ;
 struct c4iw_pd* FUNC_6 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_7(struct ib_pd *VAR_2, struct ib_udata *VAR_3)
{
 struct c4iw_pd *VAR_4 = FUNC_6(VAR_2);
 struct ib_device *VAR_5 = VAR_2->device;
 u32 VAR_6;
 struct c4iw_dev *VAR_7;

 FUNC_5("ibdev %p\n", VAR_5);
 VAR_7 = (struct c4iw_dev *) VAR_5;
 VAR_6 = FUNC_1(&VAR_7->rdev.resource.pdid_table);
 if (!VAR_6)
  return -VAR_1;

 VAR_4->pdid = VAR_6;
 VAR_4->rhp = VAR_7;
 if (VAR_3) {
  struct c4iw_alloc_pd_resp VAR_8 = {.pdid = VAR_4->pdid};

  if (FUNC_2(VAR_3, &VAR_8, sizeof(VAR_8))) {
   FUNC_0(&VAR_4->ibpd, VAR_3);
   return -VAR_0;
  }
 }
 FUNC_3(&VAR_7->rdev.stats.lock);
 VAR_7->rdev.stats.pd.cur++;
 if (VAR_7->rdev.stats.pd.cur > VAR_7->rdev.stats.pd.max)
  VAR_7->rdev.stats.pd.max = VAR_7->rdev.stats.pd.cur;
 FUNC_4(&VAR_7->rdev.stats.lock);
 FUNC_5("pdid 0x%0x ptr 0x%p\n", VAR_6, VAR_4);
 return 0;
}
