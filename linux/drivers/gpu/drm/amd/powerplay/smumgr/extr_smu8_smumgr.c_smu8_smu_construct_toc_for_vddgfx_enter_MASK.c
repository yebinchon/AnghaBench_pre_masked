
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ kaddr; } ;
struct smu8_smumgr {scalar_t__ toc_entry_used_count; TYPE_1__ toc_buffer; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
struct TOC {scalar_t__* JobList; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_4)
{
 struct smu8_smumgr *VAR_5 = VAR_4->smu_backend;
 struct TOC *VAR_6 = (struct TOC *)VAR_5->toc_buffer.kaddr;

 VAR_6->JobList[VAR_0] = (uint8_t)VAR_5->toc_entry_used_count;
 FUNC_0(VAR_4,
        VAR_1,
        VAR_3, 0);

 FUNC_0(VAR_4,
        VAR_2,
        VAR_3, 1);

 return 0;
}
