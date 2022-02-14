
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pp_hwmgr {int * device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct pp_hwmgr*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct pp_hwmgr *VAR_1,
    uint32_t VAR_2,
    uint32_t VAR_3,
    uint32_t VAR_4,
    uint32_t VAR_5)
{
 if (VAR_1 == ((void*)0) || VAR_1->device == ((void*)0)) {
  FUNC_2("Invalid Hardware Manager!");
  return -VAR_0;
 }

 FUNC_0(VAR_1->device, VAR_2, VAR_3);
 return FUNC_1(VAR_1, VAR_2 + 1, VAR_5, VAR_4);
}
