
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {scalar_t__ voltage_control; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct pp_hwmgr *VAR_1)
{
 const struct smu7_hwmgr *VAR_2 =
   (const struct smu7_hwmgr *)(VAR_1->backend);

 return (VAR_0 != VAR_2->voltage_control);
}
