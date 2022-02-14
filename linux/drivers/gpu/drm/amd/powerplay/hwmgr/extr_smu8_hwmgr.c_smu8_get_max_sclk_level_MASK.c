
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu8_hwmgr {scalar_t__ max_sclk_level; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static uint32_t FUNC_2(struct pp_hwmgr *VAR_1)
{
 struct smu8_hwmgr *VAR_2 = VAR_1->backend;

 if (VAR_2->max_sclk_level == 0) {
  FUNC_1(VAR_1, VAR_0);
  VAR_2->max_sclk_level = FUNC_0(VAR_1) + 1;
 }

 return VAR_2->max_sclk_level;
}
