
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct mddev *VAR_2 = VAR_1;
 struct md_cluster_info *VAR_3 = VAR_2->cluster_info;
 FUNC_0(VAR_0, &VAR_3->state);
}
