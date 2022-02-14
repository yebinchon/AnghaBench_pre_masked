
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {scalar_t__ suspend_lo; scalar_t__ suspend_hi; int suspend_lock; int state; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct mddev *VAR_2, int VAR_3,
  sector_t VAR_4, sector_t VAR_5)
{
 struct md_cluster_info *VAR_6 = VAR_2->cluster_info;
 int VAR_7 = 0;

 if ((VAR_3 == VAR_1) &&
  FUNC_2(VAR_0, &VAR_6->state))
  return 1;

 FUNC_0(&VAR_6->suspend_lock);
 if (VAR_5 > VAR_6->suspend_lo && VAR_4 < VAR_6->suspend_hi)
  VAR_7 = 1;
 FUNC_1(&VAR_6->suspend_lock);
 return VAR_7;
}
