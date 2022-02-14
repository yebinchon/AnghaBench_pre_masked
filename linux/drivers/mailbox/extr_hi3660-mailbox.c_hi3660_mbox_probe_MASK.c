
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mbox_chan {void* con_priv; } ;
struct TYPE_2__ {unsigned long num_chans; int of_xlate; int * ops; struct mbox_chan* chans; struct device* dev; } ;
struct hi3660_mbox {TYPE_1__ controller; struct mbox_chan* chan; struct device* dev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct hi3660_mbox* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct hi3660_mbox*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct hi3660_mbox *VAR_8;
 struct mbox_chan *VAR_9;
 struct resource *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_6, VAR_2, 0);
 VAR_8->base = FUNC_4(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->dev = VAR_7;
 VAR_8->controller.dev = VAR_7;
 VAR_8->controller.chans = VAR_8->chan;
 VAR_8->controller.num_chans = VAR_3;
 VAR_8->controller.ops = &VAR_4;
 VAR_8->controller.of_xlate = VAR_5;


 VAR_9 = VAR_8->chan;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_9[VAR_11].con_priv = (void *)VAR_11;

 VAR_12 = FUNC_6(VAR_7, &VAR_8->controller);
 if (VAR_12) {
  FUNC_2(VAR_7, "Failed to register mailbox %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_8(VAR_6, VAR_8);
 FUNC_3(VAR_7, "Mailbox enabled\n");
 return 0;
}
