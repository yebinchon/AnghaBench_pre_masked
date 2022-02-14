
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cluster_bucket {scalar_t__ RT; TYPE_1__* T; } ;
struct TYPE_3__ {int custom_field; } ;


 int FUNC_0 (scalar_t__,int ,int,void*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3 (struct rpc_cluster_bucket *VAR_0, void **VAR_1, int VAR_2) {
  if (!VAR_0->RT) {
    if (VAR_0->T->custom_field != -1) {
      FUNC_1 (VAR_0->T, VAR_0->T->custom_field);
      VAR_0->RT = FUNC_2 (VAR_0->T);
    } else {
      return 0;
    }
  }
  return FUNC_0 (VAR_0->RT, 0, VAR_2, (void *)VAR_1);
}
