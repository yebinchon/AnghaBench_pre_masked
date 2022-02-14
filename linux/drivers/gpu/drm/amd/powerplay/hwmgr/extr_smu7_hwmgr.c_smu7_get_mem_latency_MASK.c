
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu7_hwmgr {scalar_t__ mem_latency_high; scalar_t__ mem_latency_low; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_3, uint32_t VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_3->backend);

 if (VAR_4 >= VAR_1 && VAR_4 < VAR_0)
  return VAR_5->mem_latency_high;
 else if (VAR_4 >= VAR_0)
  return VAR_5->mem_latency_low;
 else
  return VAR_2;
}
