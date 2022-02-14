
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu7_smumgr {scalar_t__ soft_regs_start; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,int ,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_3, uint32_t VAR_4)
{
 struct smu7_smumgr *VAR_5 = (struct smu7_smumgr *)(VAR_3->smu_backend);
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2,
     VAR_5->soft_regs_start + FUNC_1(VAR_3,
     VAR_0, VAR_1),
     VAR_4, VAR_4);
 return VAR_6;
}
