
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {scalar_t__ recovery_thread; int recovery_map; } ;


 scalar_t__ FUNC_0 (int ,struct mddev*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_1, int VAR_2)
{
 struct md_cluster_info *VAR_3 = VAR_1->cluster_info;

 FUNC_3(VAR_2, &VAR_3->recovery_map);
 if (!VAR_3->recovery_thread) {
  VAR_3->recovery_thread = FUNC_0(VAR_0,
    VAR_1, "recover");
  if (!VAR_3->recovery_thread) {
   FUNC_2("md-cluster: Could not create recovery thread\n");
   return;
  }
 }
 FUNC_1(VAR_3->recovery_thread);
}
