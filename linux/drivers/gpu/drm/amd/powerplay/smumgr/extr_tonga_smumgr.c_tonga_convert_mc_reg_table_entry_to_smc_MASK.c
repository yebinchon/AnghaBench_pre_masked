
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t num_entries; int validflag; int last; TYPE_2__* mc_reg_table_entry; } ;
struct tonga_smumgr {TYPE_1__ mc_reg_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_4__ {size_t const mclk_max; } ;
typedef int SMU72_Discrete_MCRegisterSet ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(
  struct pp_hwmgr *VAR_0,
  const uint32_t VAR_1,
  SMU72_Discrete_MCRegisterSet *VAR_2
  )
{
 struct tonga_smumgr *VAR_3 = (struct tonga_smumgr *)(VAR_0->smu_backend);
 uint32_t VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->mc_reg_table.num_entries; VAR_4++) {
  if (VAR_1 <=
   VAR_3->mc_reg_table.mc_reg_table_entry[VAR_4].mclk_max) {
   break;
  }
 }

 if ((VAR_4 == VAR_3->mc_reg_table.num_entries) && (VAR_4 > 0))
  --VAR_4;

 FUNC_0(&VAR_3->mc_reg_table.mc_reg_table_entry[VAR_4],
    VAR_2, VAR_3->mc_reg_table.last,
    VAR_3->mc_reg_table.validflag);

 return 0;
}
