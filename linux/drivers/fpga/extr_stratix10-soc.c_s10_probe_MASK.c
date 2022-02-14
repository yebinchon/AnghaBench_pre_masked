
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct s10_priv* priv; int receive_cb; struct device* dev; } ;
struct s10_priv {int chan; int status_return_completion; TYPE_1__ client; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct s10_priv* FUNC_3 (struct device*,int,int ) ;
 struct fpga_manager* FUNC_4 (struct device*,char*,int *,struct s10_priv*) ;
 int FUNC_5 (struct fpga_manager*) ;
 int FUNC_6 (struct fpga_manager*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct fpga_manager*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct s10_priv *VAR_7;
 struct fpga_manager *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->client.dev = VAR_6;
 VAR_7->client.receive_cb = VAR_4;
 VAR_7->client.priv = VAR_7;

 VAR_7->chan = FUNC_10(&VAR_7->client,
         VAR_2);
 if (FUNC_0(VAR_7->chan)) {
  FUNC_2(VAR_6, "couldn't get service channel (%s)\n",
   VAR_2);
  return FUNC_1(VAR_7->chan);
 }

 FUNC_7(&VAR_7->status_return_completion);

 VAR_8 = FUNC_4(VAR_6, "Stratix10 SOC FPGA Manager",
         &VAR_3, VAR_7);
 if (!VAR_8) {
  FUNC_2(VAR_6, "unable to create FPGA manager\n");
  VAR_9 = -VAR_0;
  goto probe_err;
 }

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_6, "unable to register FPGA manager\n");
  FUNC_5(VAR_8);
  goto probe_err;
 }

 FUNC_8(VAR_5, VAR_8);
 return VAR_9;

probe_err:
 FUNC_9(VAR_7->chan);
 return VAR_9;
}
