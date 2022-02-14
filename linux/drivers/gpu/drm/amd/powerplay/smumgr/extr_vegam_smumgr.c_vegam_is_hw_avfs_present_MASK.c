
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct pp_hwmgr *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->device, VAR_0,
   VAR_1 + (49 * 4));
 VAR_3 &= 0x00000001;

 if (VAR_3)
  return 1;

 return 0;
}
