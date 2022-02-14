
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_usercommand {int mu_datasize; int mu_bufptr; scalar_t__ mu_status; int * mu_command; struct mlx_core_cfg* mu_buf; } ;
struct mlx_core_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,void*) ;

int
FUNC_1(int VAR_2, struct mlx_core_cfg *VAR_3)
{
    struct mlx_usercommand VAR_4;


    VAR_4.mu_datasize = sizeof(*VAR_3);
    VAR_4.mu_buf = VAR_3;
    VAR_4.mu_bufptr = 8;
    VAR_4.mu_command[0] = VAR_0;


    FUNC_0(VAR_2, VAR_1, (void *)&VAR_4);

    return(VAR_4.mu_status != 0);
}
