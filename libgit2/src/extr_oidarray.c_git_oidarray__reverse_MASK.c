
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * ids; } ;
typedef TYPE_1__ git_oidarray ;
typedef int git_oid ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(git_oidarray *VAR_0)
{
 size_t VAR_1;
 git_oid VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->count / 2; VAR_1++) {
  FUNC_0(&VAR_2, &VAR_0->ids[VAR_1]);
  FUNC_0(&VAR_0->ids[VAR_1], &VAR_0->ids[(VAR_0->count-1)-VAR_1]);
  FUNC_0(&VAR_0->ids[(VAR_0->count-1)-VAR_1], &VAR_2);
 }
}
