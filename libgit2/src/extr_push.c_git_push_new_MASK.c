
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int repo; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_9__ {int report_status; int pb_parallelism; int specs; int status; int updates; TYPE_1__* remote; int repo; } ;
typedef TYPE_2__ git_push ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

int FUNC_5(git_push **VAR_2, git_remote *VAR_3)
{
 git_push *VAR_4;

 *VAR_2 = ((void*)0);

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 FUNC_0(VAR_4);

 VAR_4->repo = VAR_3->repo;
 VAR_4->remote = VAR_3;
 VAR_4->report_status = 1;
 VAR_4->pb_parallelism = 1;

 if (FUNC_4(&VAR_4->specs, 0, VAR_0) < 0) {
  FUNC_2(VAR_4);
  return -1;
 }

 if (FUNC_4(&VAR_4->status, 0, VAR_1) < 0) {
  FUNC_3(&VAR_4->specs);
  FUNC_2(VAR_4);
  return -1;
 }

 if (FUNC_4(&VAR_4->updates, 0, ((void*)0)) < 0) {
  FUNC_3(&VAR_4->status);
  FUNC_3(&VAR_4->specs);
  FUNC_2(VAR_4);
  return -1;
 }

 *VAR_2 = VAR_4;
 return 0;
}
