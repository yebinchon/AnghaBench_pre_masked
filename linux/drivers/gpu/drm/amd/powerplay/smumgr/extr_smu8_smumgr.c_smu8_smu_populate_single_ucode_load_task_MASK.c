
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {scalar_t__ kaddr; } ;
struct smu8_smumgr {size_t driver_buffer_length; TYPE_3__* driver_buffer; int toc_entry_used_count; TYPE_1__ toc_buffer; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
struct TOC {struct SMU_Task* tasks; } ;
struct TYPE_5__ {int high; int low; } ;
struct SMU_Task {int size_bytes; TYPE_2__ addr; int next; int arg; int type; } ;
typedef enum smu8_scratch_entry { ____Placeholder_smu8_scratch_entry } smu8_scratch_entry ;
struct TYPE_6__ {int firmware_ID; int data_size; int mc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
     struct pp_hwmgr *VAR_3,
     enum smu8_scratch_entry VAR_4,
     bool VAR_5)
{
 uint8_t VAR_6;
 struct smu8_smumgr *VAR_7 = VAR_3->smu_backend;
 struct TOC *VAR_8 = (struct TOC *)VAR_7->toc_buffer.kaddr;
 struct SMU_Task *VAR_9 = &VAR_8->tasks[VAR_7->toc_entry_used_count++];

 VAR_9->type = VAR_2;
 VAR_9->arg = FUNC_2(VAR_3, VAR_4);
 VAR_9->next = VAR_5 ? VAR_1 : VAR_7->toc_entry_used_count;

 for (VAR_6 = 0; VAR_6 < VAR_7->driver_buffer_length; VAR_6++)
  if (VAR_7->driver_buffer[VAR_6].firmware_ID == VAR_4)
   break;

 if (VAR_6 >= VAR_7->driver_buffer_length) {
  FUNC_1("Invalid Firmware Type\n");
  return -VAR_0;
 }

 VAR_9->addr.low = FUNC_0(VAR_7->driver_buffer[VAR_6].mc_addr);
 VAR_9->addr.high = FUNC_3(VAR_7->driver_buffer[VAR_6].mc_addr);
 VAR_9->size_bytes = VAR_7->driver_buffer[VAR_6].data_size;

 return 0;
}
