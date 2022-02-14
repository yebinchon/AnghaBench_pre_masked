
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_hwmon_dev {int kfifo_lock; int async_msg_fifo; int resp_pending; int hwmon_dev; } ;
struct slimpro_resp_msg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct xgene_hwmon_dev *VAR_1, void *VAR_2)
{
 if (FUNC_0(VAR_1->hwmon_dev) && !VAR_1->resp_pending) {

  FUNC_1(&VAR_1->async_msg_fifo, VAR_2,
        sizeof(struct slimpro_resp_msg),
        &VAR_1->kfifo_lock);
  return -VAR_0;
 }

 return 0;
}
