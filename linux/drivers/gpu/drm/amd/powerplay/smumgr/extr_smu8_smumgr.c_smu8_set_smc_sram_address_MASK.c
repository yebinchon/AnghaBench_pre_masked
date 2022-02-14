
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int * device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3,
         uint32_t VAR_4, uint32_t VAR_5)
{
 if (VAR_3 == ((void*)0) || VAR_3->device == ((void*)0))
  return -VAR_0;

 if (0 != (3 & VAR_4)) {
  FUNC_1("SMC address must be 4 byte aligned\n");
  return -VAR_0;
 }

 if (VAR_5 <= (VAR_4 + 3)) {
  FUNC_1("SMC address beyond the SMC RAM area\n");
  return -VAR_0;
 }

 FUNC_0(VAR_3->device, VAR_2,
    VAR_1 + VAR_4);

 return 0;
}
