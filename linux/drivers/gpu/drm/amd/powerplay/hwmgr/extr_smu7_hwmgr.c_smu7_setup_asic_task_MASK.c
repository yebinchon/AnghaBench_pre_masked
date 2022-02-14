
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_7(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to read clock registers!", VAR_2 = VAR_1);

 VAR_1 = FUNC_4(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to get memory type!", VAR_2 = VAR_1);

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to enable ACPI power management!", VAR_2 = VAR_1);

 VAR_1 = FUNC_5(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to init power gate state!", VAR_2 = VAR_1);

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to get MC microcode version!", VAR_2 = VAR_1);

 VAR_1 = FUNC_6(VAR_0);
 FUNC_0((0 == VAR_1),
   "Failed to init sclk threshold!", VAR_2 = VAR_1);

 return VAR_2;
}
