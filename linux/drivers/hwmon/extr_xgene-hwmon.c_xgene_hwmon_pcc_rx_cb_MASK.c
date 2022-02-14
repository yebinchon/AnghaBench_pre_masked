
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* param2; void* param1; void* msg; } ;
struct xgene_hwmon_dev {int workq; int kfifo_lock; int async_msg_fifo; int rd_complete; TYPE_1__ sync_msg; scalar_t__ resp_pending; struct acpi_pcct_shared_memory* pcc_comm_addr; } ;
struct slimpro_resp_msg {int dummy; } ;
struct mbox_client {int dummy; } ;
struct acpi_pcct_shared_memory {int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct slimpro_resp_msg*,int,int *) ;
 int FUNC_5 (int *) ;
 struct xgene_hwmon_dev* FUNC_6 (struct mbox_client*) ;
 scalar_t__ FUNC_7 (struct xgene_hwmon_dev*,struct slimpro_resp_msg*) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct mbox_client *VAR_8, void *VAR_9)
{
 struct xgene_hwmon_dev *VAR_10 = FUNC_6(VAR_8);
 struct acpi_pcct_shared_memory *VAR_11 = VAR_10->pcc_comm_addr;
 struct slimpro_resp_msg VAR_12;







 if (FUNC_7(VAR_10, &VAR_12) < 0)
  return;

 VAR_9 = VAR_11 + 1;

 if (!FUNC_8(&VAR_11->status,
        VAR_5))
  return;
 if (VAR_10->resp_pending &&
     ((FUNC_1(((u32 *)VAR_9)[0]) == VAR_2) ||
      (FUNC_1(((u32 *)VAR_9)[0]) == VAR_1 &&
       FUNC_0(((u32 *)VAR_9)[0]) == VAR_0) ||
      (FUNC_1(((u32 *)VAR_9)[0]) == VAR_3 &&
       FUNC_0(((u32 *)VAR_9)[0]) == VAR_6 &&
       FUNC_2(((u32 *)VAR_9)[0]) == VAR_7))) {

  if (FUNC_8(&VAR_11->status,
        VAR_4)) {
   VAR_10->sync_msg.msg = ((u32 *)VAR_9)[0];
   VAR_10->sync_msg.param1 = ((u32 *)VAR_9)[1];
   VAR_10->sync_msg.param2 = ((u32 *)VAR_9)[2];


   FUNC_3(&VAR_10->rd_complete);

   return;
  }
 }
 FUNC_4(&VAR_10->async_msg_fifo, &VAR_12,
       sizeof(struct slimpro_resp_msg), &VAR_10->kfifo_lock);

 FUNC_5(&VAR_10->workq);
}
