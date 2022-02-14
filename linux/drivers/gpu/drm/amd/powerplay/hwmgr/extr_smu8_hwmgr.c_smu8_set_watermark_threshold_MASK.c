
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int soft_max_clk; } ;
struct smu8_hwmgr {TYPE_1__ sclk_dpm; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct smu8_hwmgr *VAR_2 =
      VAR_1->backend;

 FUNC_0(VAR_1,
     VAR_0,
     VAR_2->sclk_dpm.soft_max_clk);

 return 0;
}
