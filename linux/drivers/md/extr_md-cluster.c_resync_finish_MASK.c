
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int flags; int recovery; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int resync_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mddev *VAR_2)
{
 struct md_cluster_info *VAR_3 = VAR_2->cluster_info;
 int VAR_4 = 0;

 FUNC_0(VAR_1, &VAR_2->recovery);





 if (!FUNC_3(VAR_0, &VAR_2->flags))
  VAR_4 = FUNC_2(VAR_2, 0, 0);
 FUNC_1(VAR_3->resync_lockres);
 return VAR_4;
}
