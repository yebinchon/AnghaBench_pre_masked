
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {scalar_t__ kaddr; } ;
struct smu8_smumgr {size_t scratch_buffer_length; TYPE_3__* scratch_buffer; int toc_entry_used_count; TYPE_1__ toc_buffer; } ;
struct smu8_ih_meta_data {int command; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; } ;
struct TOC {struct SMU_Task* tasks; } ;
struct TYPE_5__ {int high; int low; } ;
struct SMU_Task {size_t type; int size_bytes; TYPE_2__ addr; int next; int arg; } ;
typedef enum smu8_scratch_entry { ____Placeholder_smu8_scratch_entry } smu8_scratch_entry ;
struct TYPE_6__ {int firmware_ID; scalar_t__ kaddr; int data_size; int mc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
   struct pp_hwmgr *VAR_5,
   enum smu8_scratch_entry VAR_6,
   uint8_t VAR_7, bool VAR_8)
{
 uint8_t VAR_9;
 struct smu8_smumgr *VAR_10 = VAR_5->smu_backend;
 struct TOC *VAR_11 = (struct TOC *)VAR_10->toc_buffer.kaddr;
 struct SMU_Task *VAR_12 = &VAR_11->tasks[VAR_10->toc_entry_used_count++];

 VAR_12->type = VAR_7;
 VAR_12->arg = FUNC_2(VAR_5, VAR_6);
 VAR_12->next = VAR_8 ? VAR_1 : VAR_10->toc_entry_used_count;

 for (VAR_9 = 0; VAR_9 < VAR_10->scratch_buffer_length; VAR_9++)
  if (VAR_10->scratch_buffer[VAR_9].firmware_ID == VAR_6)
   break;

 if (VAR_9 >= VAR_10->scratch_buffer_length) {
  FUNC_1("Invalid Firmware Type\n");
  return -VAR_0;
 }

 VAR_12->addr.low = FUNC_0(VAR_10->scratch_buffer[VAR_9].mc_addr);
 VAR_12->addr.high = FUNC_3(VAR_10->scratch_buffer[VAR_9].mc_addr);
 VAR_12->size_bytes = VAR_10->scratch_buffer[VAR_9].data_size;

 if (VAR_4 == VAR_6) {
  struct smu8_ih_meta_data *VAR_13 =
       (struct smu8_ih_meta_data *)VAR_10->scratch_buffer[VAR_9].kaddr;
  VAR_13->command =
   VAR_2 | VAR_3;
 }

 return 0;
}
