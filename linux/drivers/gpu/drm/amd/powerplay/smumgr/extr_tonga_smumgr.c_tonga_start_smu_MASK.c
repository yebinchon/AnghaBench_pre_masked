
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int soft_regs_start; } ;
struct tonga_smumgr {TYPE_1__ smu7_data; } ;
struct pp_hwmgr {int device; scalar_t__ not_vf; struct tonga_smumgr* smu_backend; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,scalar_t__,int *,int) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_6)
{
 struct tonga_smumgr *VAR_7 = VAR_6->smu_backend;
 int VAR_8;


 if (!FUNC_2(VAR_6) && VAR_6->not_vf) {

  if (0 == FUNC_0(VAR_6->device, VAR_0,
     VAR_3, VAR_4)) {
   VAR_8 = FUNC_5(VAR_6);
   if (VAR_8)
    return VAR_8;
  } else {
   VAR_8 = FUNC_6(VAR_6);
   if (VAR_8)
    return VAR_8;
  }
 }




 FUNC_3(VAR_6,
   VAR_1 +
   FUNC_1(VAR_2, VAR_5),
   &(VAR_7->smu7_data.soft_regs_start), 0x40000);

 VAR_8 = FUNC_4(VAR_6);

 return VAR_8;
}
