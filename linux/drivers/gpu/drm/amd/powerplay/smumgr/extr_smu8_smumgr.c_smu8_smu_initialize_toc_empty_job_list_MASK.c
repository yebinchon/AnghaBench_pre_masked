
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ kaddr; } ;
struct smu8_smumgr {TYPE_1__ toc_buffer; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
struct TOC {scalar_t__* JobList; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_2)
{
 int VAR_3;
 struct smu8_smumgr *VAR_4 = VAR_2->smu_backend;
 struct TOC *VAR_5 = (struct TOC *)VAR_4->toc_buffer.kaddr;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_5->JobList[VAR_3] = (uint8_t)VAR_0;

 return 0;
}
