
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_pd {int user; } ;
struct TYPE_3__ {scalar_t__ max_pd; } ;
struct TYPE_4__ {TYPE_1__ props; } ;
struct rvt_dev_info {scalar_t__ n_pds_allocated; int n_pds_lock; TYPE_2__ dparms; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;
 struct rvt_pd* FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct ib_device *VAR_3 = VAR_1->device;
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_3);
 struct rvt_pd *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;
 FUNC_2(&VAR_4->n_pds_lock);
 if (VAR_4->n_pds_allocated == VAR_4->dparms.props.max_pd) {
  FUNC_3(&VAR_4->n_pds_lock);
  VAR_6 = -VAR_0;
  goto bail;
 }

 VAR_4->n_pds_allocated++;
 FUNC_3(&VAR_4->n_pds_lock);


 VAR_5->user = !!VAR_2;

bail:
 return VAR_6;
}
