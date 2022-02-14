
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_sys_drv_span {int sp_start_lba; int sp_nblks; int* sp_arm; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct mlx_sys_drv_span *VAR_0, int VAR_1)
{
    int VAR_2;

    FUNC_0("0x%08x-0x%08x %uMB on", VAR_0->sp_start_lba, VAR_0->sp_start_lba + VAR_0->sp_nblks, VAR_0->sp_nblks / 2048);
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 FUNC_0(" disk%02d%02d", VAR_0->sp_arm[VAR_2] >> 4, VAR_0->sp_arm[VAR_2] & 0x0f);
    FUNC_0("\n");
}
