
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cc_num_sys_drives; } ;
struct conf_config {TYPE_1__ cc_cfg; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (struct conf_config*,int,int) ;
 int FUNC_3 (struct conf_config*,int) ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(int VAR_0, char *VAR_1[])
{
    struct conf_config VAR_2;
    int VAR_3 = 0;
    int VAR_4, VAR_5;

    FUNC_0(&VAR_2.cc_cfg, sizeof(VAR_2.cc_cfg));
    if (FUNC_1(VAR_3, &VAR_2.cc_cfg)) {
 FUNC_4("mlx%d: error submitting READ CONFIGURATION\n", VAR_3);
    } else {

 FUNC_4("# Controller <INSERT DETAILS HERE>\n");
 FUNC_4("#\n# Physical devices connected:\n");
 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
     for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
     FUNC_2(&VAR_2, VAR_4, VAR_5);
 FUNC_4("#\n# System Drives defined:\n");

 for (VAR_4 = 0; VAR_4 < VAR_2.cc_cfg.cc_num_sys_drives; VAR_4++)
     FUNC_3(&VAR_2, VAR_4);
    }
    return(0);
}
