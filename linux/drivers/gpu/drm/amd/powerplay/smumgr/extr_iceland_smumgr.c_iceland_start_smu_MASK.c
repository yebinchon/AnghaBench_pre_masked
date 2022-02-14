
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {struct iceland_smumgr* smu_backend; } ;
struct TYPE_2__ {int soft_regs_start; } ;
struct iceland_smumgr {TYPE_1__ smu7_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*,scalar_t__,int *,int) ;
 int FUNC_5 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_3)
{
 struct iceland_smumgr *VAR_4 = VAR_3->smu_backend;
 int VAR_5;

 if (!FUNC_3(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   return VAR_5;

  FUNC_0(VAR_3);
 }




 FUNC_4(VAR_3,
   VAR_0 +
   FUNC_2(VAR_1, VAR_2),
   &(VAR_4->smu7_data.soft_regs_start), 0x40000);

 VAR_5 = FUNC_5(VAR_3);

 return VAR_5;
}
