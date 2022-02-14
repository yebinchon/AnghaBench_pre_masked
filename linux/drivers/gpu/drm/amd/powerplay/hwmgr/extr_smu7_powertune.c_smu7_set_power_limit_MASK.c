
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu7_hwmgr {int power_containment_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

int FUNC_1(struct pp_hwmgr *VAR_2, uint32_t VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_2->backend);

 if (VAR_4->power_containment_features &
   VAR_0)
  return FUNC_0(VAR_2,
    VAR_1, VAR_3<<8);
 return 0;
}
