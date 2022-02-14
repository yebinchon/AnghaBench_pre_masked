
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mvdd_table; int vddci_table; int vddc_table; int mclk_table; int sclk_table; } ;
struct smu7_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_6)
{
 struct smu7_hwmgr *VAR_7 = (struct smu7_hwmgr *)(VAR_6->backend);

 FUNC_0(&(VAR_7->dpm_table), 0x00, sizeof(VAR_7->dpm_table));

 FUNC_1(
   &VAR_7->dpm_table.sclk_table,
    FUNC_2(VAR_6,
     VAR_1),
     VAR_0);
 FUNC_1(
   &VAR_7->dpm_table.mclk_table,
   FUNC_2(VAR_6,
    VAR_2), VAR_0);

 FUNC_1(
   &VAR_7->dpm_table.vddc_table,
    FUNC_2(VAR_6,
     VAR_4),
     VAR_0);
 FUNC_1(
   &VAR_7->dpm_table.vddci_table,
   FUNC_2(VAR_6,
    VAR_5), VAR_0);

 FUNC_1(
   &VAR_7->dpm_table.mvdd_table,
    FUNC_2(VAR_6,
     VAR_3),
     VAR_0);
 return 0;
}
