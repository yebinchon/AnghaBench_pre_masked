
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* pers; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int suspend_lock; scalar_t__ suspend_lo; scalar_t__ suspend_hi; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mddev*,int) ;
 int FUNC_3 (struct mddev*,int) ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_0, int VAR_1)
{
 struct md_cluster_info *VAR_2 = VAR_0->cluster_info;
 VAR_0->pers->quiesce(VAR_0, 1);
 FUNC_0(&VAR_2->suspend_lock);
 VAR_2->suspend_hi = 0;
 VAR_2->suspend_lo = 0;
 FUNC_1(&VAR_2->suspend_lock);
 VAR_0->pers->quiesce(VAR_0, 0);
}
