
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* param2; void* param1; void* msg; } ;
struct xgene_hwmon_dev {int workq; int kfifo_lock; int async_msg_fifo; int rd_complete; TYPE_1__ sync_msg; scalar_t__ resp_pending; } ;
struct slimpro_resp_msg {int dummy; } ;
struct mbox_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*,int,int *) ;
 int FUNC_5 (int *) ;
 struct xgene_hwmon_dev* FUNC_6 (struct mbox_client*) ;
 scalar_t__ FUNC_7 (struct xgene_hwmon_dev*,void*) ;

__attribute__((used)) static void FUNC_8(struct mbox_client *VAR_6, void *VAR_7)
{
 struct xgene_hwmon_dev *VAR_8 = FUNC_6(VAR_6);







 if (FUNC_7(VAR_8, VAR_7) < 0)
  return;
 if (VAR_8->resp_pending &&
     ((FUNC_1(((u32 *)VAR_7)[0]) == VAR_2) ||
      (FUNC_1(((u32 *)VAR_7)[0]) == VAR_1 &&
       FUNC_0(((u32 *)VAR_7)[0]) == VAR_0) ||
      (FUNC_1(((u32 *)VAR_7)[0]) == VAR_3 &&
       FUNC_0(((u32 *)VAR_7)[0]) == VAR_4 &&
       FUNC_2(((u32 *)VAR_7)[0]) == VAR_5))) {
  VAR_8->sync_msg.msg = ((u32 *)VAR_7)[0];
  VAR_8->sync_msg.param1 = ((u32 *)VAR_7)[1];
  VAR_8->sync_msg.param2 = ((u32 *)VAR_7)[2];


  FUNC_3(&VAR_8->rd_complete);

  return;
 }


 FUNC_4(&VAR_8->async_msg_fifo, VAR_7,
       sizeof(struct slimpro_resp_msg), &VAR_8->kfifo_lock);

 FUNC_5(&VAR_8->workq);
}
