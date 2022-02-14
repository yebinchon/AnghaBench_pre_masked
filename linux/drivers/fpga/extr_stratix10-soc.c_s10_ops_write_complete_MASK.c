
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct s10_priv {int chan; int status; int status_return_completion; TYPE_1__ client; } ;
struct fpga_manager {struct s10_priv* priv; } ;
struct fpga_image_info {int config_complete_timeout_us; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct s10_priv*,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct fpga_manager *VAR_5,
      struct fpga_image_info *VAR_6)
{
 struct s10_priv *VAR_7 = VAR_5->priv;
 struct device *VAR_8 = VAR_7->client.dev;
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_6->config_complete_timeout_us);

 do {
  FUNC_1(&VAR_7->status_return_completion);

  VAR_10 = FUNC_2(VAR_7, VAR_0, ((void*)0), 0);
  if (VAR_10 < 0)
   break;

  VAR_10 = FUNC_6(
   &VAR_7->status_return_completion, VAR_9);
  if (!VAR_10) {
   FUNC_0(VAR_8,
    "timeout waiting for RECONFIG_COMPLETED\n");
   VAR_10 = -VAR_2;
   break;
  }
  if (VAR_10 < 0) {
   FUNC_0(VAR_8,
    "error (%d) waiting for RECONFIG_COMPLETED\n",
    VAR_10);
   break;
  }

  VAR_9 = VAR_10;
  VAR_10 = 0;

  if (FUNC_4(VAR_3,
           &VAR_7->status))
   break;

  if (FUNC_4(VAR_4,
           &VAR_7->status)) {
   FUNC_0(VAR_8, "ERROR - giving up - SVC_STATUS_RECONFIG_ERROR\n");
   VAR_10 = -VAR_1;
   break;
  }
 } while (1);

 FUNC_3(VAR_7->chan);

 return VAR_10;
}
