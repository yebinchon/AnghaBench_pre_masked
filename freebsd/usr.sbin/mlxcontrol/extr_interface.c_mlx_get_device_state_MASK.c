
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_usercommand {int mu_datasize; int mu_bufptr; int* mu_command; scalar_t__ mu_status; struct mlx_phys_drv* mu_buf; } ;
struct mlx_phys_drv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,void*) ;

int
FUNC_1(int VAR_2, int VAR_3, int VAR_4, struct mlx_phys_drv *VAR_5)
{
    struct mlx_usercommand VAR_6;


    VAR_6.mu_datasize = sizeof(*VAR_5);
    VAR_6.mu_buf = VAR_5;
    VAR_6.mu_bufptr = 8;
    VAR_6.mu_command[0] = VAR_0;
    VAR_6.mu_command[2] = VAR_3;
    VAR_6.mu_command[3] = VAR_4;


    FUNC_0(VAR_2, VAR_1, (void *)&VAR_6);

    return(VAR_6.mu_status != 0);
}
