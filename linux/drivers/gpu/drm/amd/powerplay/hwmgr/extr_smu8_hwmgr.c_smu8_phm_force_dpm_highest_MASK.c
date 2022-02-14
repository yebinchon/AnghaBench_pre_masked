
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int soft_max_clk; } ;
struct smu8_hwmgr {TYPE_1__ sclk_dpm; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct smu8_hwmgr *VAR_3 = VAR_2->backend;

 FUNC_1(VAR_2,
     VAR_1,
     FUNC_0(VAR_2,
     VAR_3->sclk_dpm.soft_max_clk,
     VAR_1));

 FUNC_1(VAR_2,
    VAR_0,
    FUNC_0(VAR_2,
    VAR_3->sclk_dpm.soft_max_clk,
    VAR_0));

 return 0;
}
