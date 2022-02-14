
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_2__ {int message; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int **,int ,char*) ;

void FUNC_4(void)
{
 git_reference *VAR_2;

 FUNC_1(VAR_0, FUNC_3(&VAR_2, VAR_1, "idontexist"));
 FUNC_0("no reference found for shorthand 'idontexist'", FUNC_2()->message);
}
