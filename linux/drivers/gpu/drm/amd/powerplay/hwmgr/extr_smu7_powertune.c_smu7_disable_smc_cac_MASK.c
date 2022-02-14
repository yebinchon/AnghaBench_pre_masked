
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smu7_hwmgr {int cac_enabled; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

int FUNC_3(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);
 int VAR_4 = 0;

 if (FUNC_1(VAR_0) && VAR_3->cac_enabled) {
  int VAR_5 = FUNC_2(VAR_2,
    (uint16_t)(VAR_1));
  FUNC_0((VAR_5 == 0),
    "Failed to disable CAC in SMC.", VAR_4 = -1);

  VAR_3->cac_enabled = 0;
 }
 return VAR_4;
}
