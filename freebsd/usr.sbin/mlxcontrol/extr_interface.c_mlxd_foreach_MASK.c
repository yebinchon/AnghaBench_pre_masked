
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxd_foreach_action {void (* func ) (int,void*) ;void* arg; } ;


 int FUNC_0 (int ,struct mlxd_foreach_action*) ;
 int VAR_0 ;

void
FUNC_1(void (*VAR_1)(int VAR_2, void *VAR_3), void *VAR_4)
{
    struct mlxd_foreach_action VAR_5;

    VAR_5.func = VAR_1;
    VAR_5.arg = VAR_4;
    FUNC_0(VAR_0, &VAR_5);
}
