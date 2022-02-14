
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_phys_drv {int pd_flags1; } ;
struct TYPE_2__ {struct mlx_phys_drv* cc_phys_drives; } ;
struct conf_config {TYPE_1__ cc_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_phys_drv*,int,int,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct conf_config *VAR_1, int VAR_2, int VAR_3)
{
    struct mlx_phys_drv *VAR_4 = &VAR_1->cc_cfg.cc_phys_drives[VAR_2 * 16 + VAR_3];


    if (!(VAR_4->pd_flags1 & VAR_0))
 return;

    FUNC_0(VAR_4, VAR_2, VAR_3, "# ", 1);
}
