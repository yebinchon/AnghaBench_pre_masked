
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu8_smumgr {unsigned long scratch_buffer_length; int toc_entry_clock_table; TYPE_1__* scratch_buffer; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
struct TYPE_2__ {scalar_t__ firmware_ID; int mc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_5)
{
 struct smu8_smumgr *VAR_6 = VAR_5->smu_backend;
 unsigned long VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->scratch_buffer_length; VAR_7++) {
  if (VAR_6->scratch_buffer[VAR_7].firmware_ID
    == VAR_4)
   break;
 }

 FUNC_2(VAR_5,
    VAR_2,
    FUNC_3(VAR_6->scratch_buffer[VAR_7].mc_addr));

 FUNC_2(VAR_5,
    VAR_3,
    FUNC_0(VAR_6->scratch_buffer[VAR_7].mc_addr));

 FUNC_2(VAR_5, VAR_1,
    VAR_6->toc_entry_clock_table);

 FUNC_1(VAR_5, VAR_0);

 return 0;
}
