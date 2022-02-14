
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_sc_rpc_msg {int func; } ;
struct imx_sc_ipc {int dev; int lock; int done; scalar_t__ count; void* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct imx_sc_ipc*,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct imx_sc_ipc *VAR_3, void *VAR_4, bool VAR_5)
{
 struct imx_sc_rpc_msg *VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;

 FUNC_5(&VAR_3->lock);
 FUNC_7(&VAR_3->done);

 VAR_3->msg = VAR_4;
 VAR_3->count = 0;
 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_3->dev, "RPC send msg failed: %d\n", VAR_7);
  goto out;
 }

 if (VAR_5) {
  if (!FUNC_8(&VAR_3->done,
       VAR_2)) {
   FUNC_2(VAR_3->dev, "RPC send msg timeout\n");
   FUNC_6(&VAR_3->lock);
   return -VAR_1;
  }


  VAR_6 = VAR_4;
  VAR_7 = VAR_6->func;
 }

out:
 FUNC_6(&VAR_3->lock);

 FUNC_1(VAR_3->dev, "RPC SVC done\n");

 return FUNC_3(VAR_7);
}
