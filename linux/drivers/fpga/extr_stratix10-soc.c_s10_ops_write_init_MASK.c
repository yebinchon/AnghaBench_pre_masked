
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct stratix10_svc_command_config_type {int flags; } ;
struct TYPE_3__ {struct device* dev; } ;
struct s10_priv {int chan; TYPE_2__* svc_bufs; int status; int status_return_completion; TYPE_1__ client; } ;
struct fpga_manager {struct s10_priv* priv; } ;
struct fpga_image_info {int flags; } ;
struct device {int dummy; } ;
typedef int ctype ;
struct TYPE_4__ {char* buf; scalar_t__ lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fpga_manager*) ;
 int FUNC_5 (struct s10_priv*,int ,struct stratix10_svc_command_config_type*,int) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct fpga_manager *VAR_9,
         struct fpga_image_info *VAR_10,
         const char *VAR_11, size_t VAR_12)
{
 struct s10_priv *VAR_13 = VAR_9->priv;
 struct device *VAR_14 = VAR_13->client.dev;
 struct stratix10_svc_command_config_type VAR_15;
 char *VAR_16;
 uint VAR_17;
 int VAR_18;

 VAR_15.flags = 0;
 if (VAR_10->flags & VAR_4) {
  FUNC_1(VAR_14, "Requesting partial reconfiguration.\n");
  VAR_15.flags |= FUNC_0(VAR_1);
 } else {
  FUNC_1(VAR_14, "Requesting full reconfiguration.\n");
 }

 FUNC_3(&VAR_13->status_return_completion);
 VAR_18 = FUNC_5(VAR_13, VAR_0,
          &VAR_15, sizeof(VAR_15));
 if (VAR_18 < 0)
  goto init_done;

 VAR_18 = FUNC_9(
  &VAR_13->status_return_completion, VAR_6);
 if (!VAR_18) {
  FUNC_2(VAR_14, "timeout waiting for RECONFIG_REQUEST\n");
  VAR_18 = -VAR_3;
  goto init_done;
 }
 if (VAR_18 < 0) {
  FUNC_2(VAR_14, "error (%d) waiting for RECONFIG_REQUEST\n", VAR_18);
  goto init_done;
 }

 VAR_18 = 0;
 if (!FUNC_8(VAR_8,
    &VAR_13->status)) {
  VAR_18 = -VAR_3;
  goto init_done;
 }


 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_16 = FUNC_6(VAR_13->chan, VAR_7);
  if (!VAR_16) {
   FUNC_4(VAR_9);
   VAR_18 = -VAR_2;
   goto init_done;
  }

  VAR_13->svc_bufs[VAR_17].buf = VAR_16;
  VAR_13->svc_bufs[VAR_17].lock = 0;
 }

init_done:
 FUNC_7(VAR_13->chan);
 return VAR_18;
}
