
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int recv_thread; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mddev*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mddev *VAR_2, int VAR_3)
{
 struct md_cluster_info *VAR_4 = VAR_2->cluster_info;


 if (FUNC_0(VAR_2, VAR_3))
  FUNC_2("md-cluster: failed to gather all resyn infos\n");
 FUNC_3(VAR_0, &VAR_4->state);

 if (FUNC_4(VAR_1, &VAR_4->state))
  FUNC_1(VAR_4->recv_thread);
}
