
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ kaddr; } ;
struct smu8_smumgr {scalar_t__ toc_entry_used_count; TYPE_1__ toc_buffer; } ;
struct pp_hwmgr {scalar_t__ chip_id; struct smu8_smumgr* smu_backend; } ;
struct TOC {scalar_t__* JobList; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,int) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_12)
{
 struct smu8_smumgr *VAR_13 = VAR_12->smu_backend;
 struct TOC *VAR_14 = (struct TOC *)VAR_13->toc_buffer.kaddr;

 VAR_14->JobList[VAR_1] = (uint8_t)VAR_13->toc_entry_used_count;

 FUNC_1(VAR_12,
    VAR_2, 0);
 FUNC_1(VAR_12,
    VAR_6, 0);
 FUNC_1(VAR_12,
    VAR_3, 0);
 FUNC_1(VAR_12,
    VAR_4, 0);

 if (VAR_12->chip_id == VAR_0)
  FUNC_1(VAR_12,
    VAR_4, 0);
 else
  FUNC_1(VAR_12,
    VAR_5, 0);

 FUNC_1(VAR_12,
    VAR_7, 0);


 FUNC_0(VAR_12,
    VAR_8,
    VAR_11, 0);

 FUNC_0(VAR_12,
    VAR_9,
    VAR_11, 0);

 FUNC_0(VAR_12,
    VAR_10,
    VAR_11, 1);

 return 0;
}
