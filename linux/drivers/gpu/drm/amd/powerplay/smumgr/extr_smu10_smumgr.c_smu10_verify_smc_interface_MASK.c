
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 uint32_t VAR_4;

 FUNC_2(VAR_3,
   VAR_1);
 VAR_4 = FUNC_1(VAR_3);

 if ((VAR_4 != VAR_2) &&
     (VAR_4 != VAR_2 + 1)) {
  FUNC_0("Attempt to read SMC IF Version Number Failed!\n");
  return -VAR_0;
 }

 return 0;
}
