
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);

 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_1->device, VAR_0, VAR_3);

 return 0;
}
