
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_7__ {int version; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;

void FUNC_6(void)
{
 git_diff *VAR_3;
 git_diff_options VAR_4 = VAR_0;
 const git_error *VAR_5;

 VAR_2 = FUNC_2("status");

 VAR_4.version = 0;
 FUNC_1(FUNC_3(&VAR_3, VAR_2, ((void*)0), &VAR_4));
 VAR_5 = FUNC_5();
 FUNC_0(VAR_1, VAR_5->klass);

 FUNC_4();
 VAR_4.version = 1024;
 FUNC_1(FUNC_3(&VAR_3, VAR_2, ((void*)0), &VAR_4));
 VAR_5 = FUNC_5();
 FUNC_0(VAR_1, VAR_5->klass);
}
