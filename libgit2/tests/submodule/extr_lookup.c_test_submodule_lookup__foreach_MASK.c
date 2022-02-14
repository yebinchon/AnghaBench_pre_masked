
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ sm_lookup_data ;
typedef int git_config ;
typedef int data ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

void FUNC_8(void)
{
 git_config *VAR_2;
 sm_lookup_data VAR_3;

 FUNC_7(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(FUNC_6(VAR_0, VAR_1, &VAR_3));
 FUNC_0(8, VAR_3.count);

 FUNC_7(&VAR_3, 0, sizeof(VAR_3));


 FUNC_1(FUNC_4(&VAR_2, "submod2/.gitmodules"));

 FUNC_1(FUNC_5(VAR_2, "submodule.smchangedindex.path", "sm_changed_index"));
 FUNC_1(FUNC_5(VAR_2, "submodule.smchangedindex.url", "../submod2_target"));
 FUNC_1(FUNC_2(VAR_2, "submodule.sm_changed_index.path"));
 FUNC_1(FUNC_2(VAR_2, "submodule.sm_changed_index.url"));

 FUNC_3(VAR_2);

 FUNC_1(FUNC_6(VAR_0, VAR_1, &VAR_3));
 FUNC_0(8, VAR_3.count);
}
