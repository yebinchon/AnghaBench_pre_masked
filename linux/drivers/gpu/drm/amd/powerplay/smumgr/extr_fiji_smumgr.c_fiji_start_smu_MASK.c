
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int avfs_supported; int device; scalar_t__ not_vf; scalar_t__ smu_backend; } ;
struct TYPE_2__ {int soft_regs_start; } ;
struct fiji_smumgr {TYPE_1__ smu7_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*,scalar_t__,int *,int) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_6)
{
 int VAR_7 = 0;
 struct fiji_smumgr *VAR_8 = (struct fiji_smumgr *)(VAR_6->smu_backend);


 if (!FUNC_5(VAR_6) && VAR_6->not_vf) {

  if (0 == FUNC_0(VAR_6->device,
    VAR_0,
    VAR_3, VAR_4)) {
   VAR_7 = FUNC_2(VAR_6);
   if (VAR_7)
    return VAR_7;
  } else {
   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7)
    return VAR_7;
  }
  if (FUNC_1(VAR_6))
   VAR_6->avfs_supported = 0;
 }




 FUNC_6(VAR_6,
   VAR_2 +
   FUNC_4(VAR_1, VAR_5),
   &(VAR_8->smu7_data.soft_regs_start), 0x40000);

 VAR_7 = FUNC_7(VAR_6);

 return VAR_7;
}
