
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_sys_drv {int sd_raidlevel; int sd_valid_spans; int sd_valid_arms; int * sd_span; } ;
struct TYPE_2__ {struct mlx_sys_drv* cc_sys_drives; } ;
struct conf_config {TYPE_1__ cc_cfg; } ;
 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct conf_config *VAR_1, int VAR_2)
{
    struct mlx_sys_drv *VAR_3 = &VAR_1->cc_cfg.cc_sys_drives[VAR_2];
    int VAR_4;

    FUNC_1("drive%02d ", VAR_2);
    switch(VAR_3->sd_raidlevel & 0xf) {
    case 132:
 FUNC_1("RAID0");
 break;
    case 131:
 FUNC_1("RAID1");
 break;
    case 130:
 FUNC_1("RAID3");
 break;
    case 129:
 FUNC_1("RAID5");
 break;
    case 128:
 FUNC_1("RAID6");
 break;
    case 133:
 FUNC_1("JBOD");
 break;
    default:
 FUNC_1("RAID?");
    }
    FUNC_1(" write%s\n", VAR_3->sd_raidlevel & VAR_0 ? "back" : "through");

    for (VAR_4 = 0; VAR_4 < VAR_3->sd_valid_spans; VAR_4++) {
 FUNC_1("  span%d ", VAR_4);
 FUNC_0(&VAR_3->sd_span[VAR_4], VAR_3->sd_valid_arms);
    }
}
