
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote_cb; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,char*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*) ;

void FUNC_4(void)
{
 VAR_1.remote_cb = VAR_0;
 FUNC_1(FUNC_2(&VAR_3, FUNC_0("testrepo.git"), "./foo", &VAR_1));

 FUNC_1(FUNC_3(&VAR_2, VAR_3, "my_origin"));
}
