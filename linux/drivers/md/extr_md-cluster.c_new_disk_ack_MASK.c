
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int newdisk_completion; int no_new_dev_lockres; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_2, bool VAR_3)
{
 struct md_cluster_info *VAR_4 = VAR_2->cluster_info;

 if (!FUNC_4(VAR_1, &VAR_4->state)) {
  FUNC_3("md-cluster(%s): Spurious cluster confirmation\n", FUNC_2(VAR_2));
  return -VAR_0;
 }

 if (VAR_3)
  FUNC_1(VAR_4->no_new_dev_lockres);
 FUNC_0(&VAR_4->newdisk_completion);
 return 0;
}
