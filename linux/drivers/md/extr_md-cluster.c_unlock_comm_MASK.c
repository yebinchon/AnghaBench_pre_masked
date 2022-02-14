
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_cluster_info {int wait; int state; TYPE_1__* token_lockres; int recv_mutex; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct md_cluster_info *VAR_2)
{
 FUNC_0(VAR_2->token_lockres->mode != VAR_0);
 FUNC_3(&VAR_2->recv_mutex);
 FUNC_2(VAR_2->token_lockres);
 FUNC_1(VAR_1, &VAR_2->state);
 FUNC_4(&VAR_2->wait);
}
