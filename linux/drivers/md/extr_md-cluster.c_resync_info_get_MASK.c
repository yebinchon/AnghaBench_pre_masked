
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int suspend_lock; int suspend_hi; int suspend_lo; } ;
typedef int sector_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_0, sector_t *VAR_1, sector_t *VAR_2)
{
 struct md_cluster_info *VAR_3 = VAR_0->cluster_info;

 FUNC_0(&VAR_3->suspend_lock);
 *VAR_1 = VAR_3->suspend_lo;
 *VAR_2 = VAR_3->suspend_hi;
 FUNC_1(&VAR_3->suspend_lock);
}
