
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mc_addr; scalar_t__ kaddr; } ;
struct smu8_smumgr {int smu_buffer_used_bytes; TYPE_1__ smu_buffer; } ;
struct smu8_buffer_entry {int data_size; char* kaddr; int mc_addr; int firmware_ID; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
typedef enum smu8_scratch_entry { ____Placeholder_smu8_scratch_entry } smu8_scratch_entry ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
    struct pp_hwmgr *VAR_0,
    enum smu8_scratch_entry VAR_1,
    uint32_t VAR_2,
    struct smu8_buffer_entry *VAR_3)
{
 struct smu8_smumgr *VAR_4 = VAR_0->smu_backend;
 uint32_t VAR_5 = FUNC_0(VAR_2);

 VAR_3->data_size = VAR_2;
 VAR_3->kaddr = (char *) VAR_4->smu_buffer.kaddr +
    VAR_4->smu_buffer_used_bytes;
 VAR_3->mc_addr = VAR_4->smu_buffer.mc_addr + VAR_4->smu_buffer_used_bytes;
 VAR_3->firmware_ID = VAR_1;

 VAR_4->smu_buffer_used_bytes += VAR_5;

 return 0;
}
