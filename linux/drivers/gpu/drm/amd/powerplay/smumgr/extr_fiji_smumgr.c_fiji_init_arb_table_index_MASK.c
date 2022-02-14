
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_2__ {int arb_table_start; } ;
struct fiji_smumgr {TYPE_1__ smu7_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct fiji_smumgr *VAR_3 = (struct fiji_smumgr *)(VAR_2->smu_backend);
 uint32_t VAR_4;
 int VAR_5;
 VAR_5 = FUNC_0(VAR_2,
   VAR_3->smu7_data.arb_table_start, &VAR_4, VAR_1);

 if (VAR_5)
  return VAR_5;

 VAR_4 &= 0x00FFFFFF;
 VAR_4 |= ((uint32_t)VAR_0) << 24;

 return FUNC_1(VAR_2,
   VAR_3->smu7_data.arb_table_start, VAR_4, VAR_1);
}
