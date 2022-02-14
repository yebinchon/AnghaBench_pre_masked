
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct md_cluster_info*) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_1)
{
 struct md_cluster_info *VAR_2 = VAR_1->cluster_info;
 FUNC_0(VAR_0, &VAR_2->state);
 FUNC_1(VAR_2);
}
