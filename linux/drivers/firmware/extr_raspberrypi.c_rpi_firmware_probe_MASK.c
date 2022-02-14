
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_block; int rx_callback; struct device* dev; } ;
struct rpi_firmware {int c; int chan; TYPE_1__ cl; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct rpi_firmware* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct platform_device*,struct rpi_firmware*) ;
 int VAR_3 ;
 int FUNC_7 (struct rpi_firmware*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct rpi_firmware*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct rpi_firmware *VAR_6;

 VAR_6 = FUNC_3(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->cl.dev = VAR_5;
 VAR_6->cl.rx_callback = VAR_3;
 VAR_6->cl.tx_block = 1;

 VAR_6->chan = FUNC_5(&VAR_6->cl, 0);
 if (FUNC_0(VAR_6->chan)) {
  int VAR_7 = FUNC_1(VAR_6->chan);
  if (VAR_7 != -VAR_1)
   FUNC_2(VAR_5, "Failed to get mbox channel: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_4(&VAR_6->c);

 FUNC_6(VAR_4, VAR_6);

 FUNC_7(VAR_6);
 FUNC_9(VAR_5, VAR_6);
 FUNC_8(VAR_5);

 return 0;
}
