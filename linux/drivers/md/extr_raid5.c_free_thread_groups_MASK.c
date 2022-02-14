
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* worker_groups; } ;
struct TYPE_2__ {struct TYPE_2__* workers; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct r5conf *VAR_0)
{
 if (VAR_0->worker_groups)
  FUNC_0(VAR_0->worker_groups[0].workers);
 FUNC_0(VAR_0->worker_groups);
 VAR_0->worker_groups = ((void*)0);
}
