
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_7__ {int version; } ;
typedef TYPE_2__ git_config_backend ;
typedef int git_config ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;

void FUNC_8(void)
{
 git_config *VAR_2;
 git_config_backend VAR_3 = VAR_0;
 const git_error *VAR_4;

 VAR_3.version = 1024;

 FUNC_2(FUNC_5(&VAR_2));
 FUNC_1(FUNC_3(VAR_2, &VAR_3, 0, ((void*)0), 0));
 VAR_4 = FUNC_7();
 FUNC_0(VAR_1, VAR_4->klass);

 FUNC_6();
 VAR_3.version = 1024;
 FUNC_1(FUNC_3(VAR_2, &VAR_3, 0, ((void*)0), 0));
 VAR_4 = FUNC_7();
 FUNC_0(VAR_1, VAR_4->klass);

 FUNC_4(VAR_2);
}
