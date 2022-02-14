
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu10_hwmgr {int gfx_max_freq_limit; int gfx_min_freq_limit; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_1, bool VAR_2)
{
 struct smu10_hwmgr *VAR_3;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 VAR_3 = (struct smu10_hwmgr *)(VAR_1->backend);

 if (VAR_2)
  return VAR_3->gfx_min_freq_limit;
 else
  return VAR_3->gfx_max_freq_limit;
}
