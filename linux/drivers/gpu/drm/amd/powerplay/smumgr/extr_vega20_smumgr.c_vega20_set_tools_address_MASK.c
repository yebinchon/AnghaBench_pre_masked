
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* entry; } ;
struct vega20_smumgr {TYPE_1__ smu_tables; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_4__ {scalar_t__ mc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct vega20_smumgr *VAR_4 =
   (struct vega20_smumgr *)(VAR_3->smu_backend);
 int VAR_5 = 0;

 if (VAR_4->smu_tables.entry[VAR_2].mc_addr) {
  VAR_5 = FUNC_2(VAR_3,
    VAR_0,
    FUNC_1(VAR_4->smu_tables.entry[VAR_2].mc_addr));
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_3,
     VAR_1,
     FUNC_0(VAR_4->smu_tables.entry[VAR_2].mc_addr));
 }

 return VAR_5;
}
