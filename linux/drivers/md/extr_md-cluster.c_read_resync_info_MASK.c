
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resync_info {int lo; int hi; } ;
struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {scalar_t__ suspend_lo; scalar_t__ suspend_hi; } ;
struct TYPE_2__ {int sb_lvbptr; } ;
struct dlm_lock_resource {TYPE_1__ lksb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_lock_resource*,int ) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct resync_info*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mddev *VAR_1,
       struct dlm_lock_resource *VAR_2)
{
 struct resync_info VAR_3;
 struct md_cluster_info *VAR_4 = VAR_1->cluster_info;
 int VAR_5 = 0;

 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_3, VAR_2->lksb.sb_lvbptr, sizeof(struct resync_info));
 if (FUNC_2(VAR_3.hi) > 0) {
  VAR_4->suspend_hi = FUNC_2(VAR_3.hi);
  VAR_4->suspend_lo = FUNC_2(VAR_3.lo);
  VAR_5 = 1;
 }
 FUNC_1(VAR_2);
 return VAR_5;
}
