
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_usercommand {int mu_error; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct mlx_usercommand*) ;

void
FUNC_1(int VAR_1, void *VAR_2)
{
    struct mlx_usercommand *VAR_3 = (struct mlx_usercommand *)VAR_2;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3);
    if (VAR_4 != 0)
 VAR_3->mu_error = VAR_4;
}
