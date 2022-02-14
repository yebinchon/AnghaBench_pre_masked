
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct es2_ap_dev {TYPE_2__* usb_dev; int arpc_lock; } ;
struct arpc {TYPE_1__* resp; int response_received; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct es2_ap_dev*,struct arpc*) ;
 struct arpc* FUNC_1 (void*,size_t,int ) ;
 int FUNC_2 (struct es2_ap_dev*,struct arpc*) ;
 int FUNC_3 (struct arpc*) ;
 int FUNC_4 (struct es2_ap_dev*,struct arpc*,unsigned int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct es2_ap_dev *VAR_3, u8 VAR_4, void *VAR_5,
       size_t VAR_6, int *VAR_7, unsigned int VAR_8)
{
 struct arpc *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_7)
  *VAR_7 = 0;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_4);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(&VAR_3->arpc_lock, VAR_10);
 FUNC_0(VAR_3, VAR_9);
 FUNC_8(&VAR_3->arpc_lock, VAR_10);

 VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_8);
 if (VAR_11)
  goto out_arpc_del;

 VAR_11 = FUNC_9(
      &VAR_9->response_received,
      FUNC_6(VAR_8));
 if (VAR_11 <= 0) {
  if (!VAR_11)
   VAR_11 = -VAR_2;
  goto out_arpc_del;
 }

 if (VAR_9->resp->result) {
  VAR_11 = -VAR_1;
  if (VAR_7)
   *VAR_7 = VAR_9->resp->result;
 } else {
  VAR_11 = 0;
 }

out_arpc_del:
 FUNC_7(&VAR_3->arpc_lock, VAR_10);
 FUNC_2(VAR_3, VAR_9);
 FUNC_8(&VAR_3->arpc_lock, VAR_10);
 FUNC_3(VAR_9);

 if (VAR_11 < 0 && VAR_11 != -VAR_1) {
  FUNC_5(&VAR_3->usb_dev->dev,
   "failed to execute ARPC: %d\n", VAR_11);
 }

 return VAR_11;
}
