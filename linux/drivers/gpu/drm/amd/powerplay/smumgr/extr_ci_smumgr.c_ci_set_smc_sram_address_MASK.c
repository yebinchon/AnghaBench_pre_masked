
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_4,
     uint32_t VAR_5, uint32_t VAR_6)
{
 if ((0 != (3 & VAR_5))
  || ((VAR_5 + 3) >= VAR_6)) {
  FUNC_2("smc_addr invalid \n");
  return -VAR_1;
 }

 FUNC_1(VAR_4->device, VAR_3, VAR_5);
 FUNC_0(VAR_4->device, VAR_2, VAR_0, 0);
 return 0;
}
