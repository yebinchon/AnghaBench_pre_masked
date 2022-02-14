
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int resync_lockres; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mddev*) ;

__attribute__((used)) static int FUNC_1(struct mddev *VAR_1)
{
 struct md_cluster_info *VAR_2 = VAR_1->cluster_info;
 return FUNC_0(VAR_2->resync_lockres, VAR_0, VAR_1);
}
