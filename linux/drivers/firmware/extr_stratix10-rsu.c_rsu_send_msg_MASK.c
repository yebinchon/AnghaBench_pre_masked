
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stratix10_svc_client_msg {int command; unsigned long* arg; } ;
struct TYPE_2__ {int dev; int receive_cb; } ;
struct stratix10_rsu_priv {int lock; int chan; TYPE_1__ client; int completion; } ;
typedef int rsu_callback ;
typedef enum stratix10_svc_command_code { ____Placeholder_stratix10_svc_command_code } stratix10_svc_command_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct stratix10_svc_client_msg*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct stratix10_rsu_priv *VAR_2,
   enum stratix10_svc_command_code VAR_3,
   unsigned long VAR_4,
   rsu_callback VAR_5)
{
 struct stratix10_svc_client_msg VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2->lock);
 FUNC_3(&VAR_2->completion);
 VAR_2->client.receive_cb = VAR_5;

 VAR_6.command = VAR_3;
 if (VAR_4)
  VAR_6.arg[0] = VAR_4;

 VAR_7 = FUNC_5(VAR_2->chan, &VAR_6);
 if (VAR_7 < 0)
  goto status_done;

 VAR_7 = FUNC_6(&VAR_2->completion,
       VAR_1);
 if (!VAR_7) {
  FUNC_0(VAR_2->client.dev,
   "timeout waiting for SMC call\n");
  VAR_7 = -VAR_0;
  goto status_done;
 } else if (VAR_7 < 0) {
  FUNC_0(VAR_2->client.dev,
   "error %d waiting for SMC call\n", VAR_7);
  goto status_done;
 } else {
  VAR_7 = 0;
 }

status_done:
 FUNC_4(VAR_2->chan);
 FUNC_2(&VAR_2->lock);
 return VAR_7;
}
