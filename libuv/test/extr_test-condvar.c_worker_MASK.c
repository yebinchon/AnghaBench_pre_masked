
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int posted_2; int (* wait_cond ) (TYPE_1__*,int *) ;int posted_1; int (* signal_cond ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(void* VAR_0) {
  worker_config* VAR_1 = VAR_0;
  VAR_1->signal_cond(VAR_1, &VAR_1->posted_1);
  VAR_1->wait_cond(VAR_1, &VAR_1->posted_2);
}
