
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_cluster_info {int state; int recv_thread; } ;
struct dlm_lock_resource {TYPE_1__* mddev; } ;
struct TYPE_2__ {struct md_cluster_info* cluster_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, int VAR_4)
{
 struct dlm_lock_resource *VAR_5 = VAR_3;
 struct md_cluster_info *VAR_6 = VAR_5->mddev->cluster_info;

 if (VAR_4 == VAR_0) {
  if (FUNC_2(VAR_1, &VAR_6->state))
   FUNC_0(VAR_6->recv_thread);
  else
   FUNC_1(VAR_2, &VAR_6->state);
 }
}
