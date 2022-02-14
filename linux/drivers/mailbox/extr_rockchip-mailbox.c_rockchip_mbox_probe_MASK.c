
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct rockchip_mbox_data {int num_chans; } ;
struct TYPE_13__ {int num_chans; int txdone_irq; int * ops; TYPE_2__* dev; void* chans; } ;
struct rockchip_mbox {size_t buf_size; TYPE_4__ mbox; TYPE_1__* chans; int pclk; int mbox_base; } ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_11__ {int idx; int irq; int * msg; struct rockchip_mbox* mb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 void* FUNC_7 (TYPE_2__*,int,int,int ) ;
 struct rockchip_mbox* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,int ,struct rockchip_mbox*) ;
 struct of_device_id* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct platform_device*,int) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct rockchip_mbox*) ;
 scalar_t__ FUNC_15 (struct resource*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct rockchip_mbox *VAR_10;
 const struct of_device_id *VAR_11;
 const struct rockchip_mbox_data *VAR_12;
 struct resource *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (!VAR_9->dev.of_node)
  return -VAR_0;

 VAR_11 = FUNC_11(VAR_8, VAR_9->dev.of_node);
 VAR_12 = (const struct rockchip_mbox_data *)VAR_11->data;

 VAR_10 = FUNC_8(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->chans = FUNC_7(&VAR_9->dev, VAR_12->num_chans,
     sizeof(*VAR_10->chans), VAR_2);
 if (!VAR_10->chans)
  return -VAR_1;

 VAR_10->mbox.chans = FUNC_7(&VAR_9->dev, VAR_12->num_chans,
          sizeof(*VAR_10->mbox.chans), VAR_2);
 if (!VAR_10->mbox.chans)
  return -VAR_1;

 FUNC_14(VAR_9, VAR_10);

 VAR_10->mbox.dev = &VAR_9->dev;
 VAR_10->mbox.num_chans = VAR_12->num_chans;
 VAR_10->mbox.ops = &VAR_5;
 VAR_10->mbox.txdone_irq = 1;

 VAR_13 = FUNC_13(VAR_9, VAR_3, 0);
 if (!VAR_13)
  return -VAR_0;

 VAR_10->mbox_base = FUNC_6(&VAR_9->dev, VAR_13);
 if (FUNC_0(VAR_10->mbox_base))
  return FUNC_1(VAR_10->mbox_base);


 VAR_10->buf_size = (size_t)FUNC_15(VAR_13) / (VAR_12->num_chans * 2);

 VAR_10->pclk = FUNC_5(&VAR_9->dev, "pclk_mailbox");
 if (FUNC_0(VAR_10->pclk)) {
  VAR_14 = FUNC_1(VAR_10->pclk);
  FUNC_3(&VAR_9->dev, "failed to get pclk_mailbox clock: %d\n",
   VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_10->pclk);
 if (VAR_14) {
  FUNC_3(&VAR_9->dev, "failed to enable pclk: %d\n", VAR_14);
  return VAR_14;
 }

 for (VAR_16 = 0; VAR_16 < VAR_10->mbox.num_chans; VAR_16++) {
  VAR_15 = FUNC_12(VAR_9, VAR_16);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_14 = FUNC_10(&VAR_9->dev, VAR_15,
      VAR_6,
      VAR_7, VAR_4,
      FUNC_4(&VAR_9->dev), VAR_10);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_10->chans[VAR_16].idx = VAR_16;
  VAR_10->chans[VAR_16].irq = VAR_15;
  VAR_10->chans[VAR_16].mb = VAR_10;
  VAR_10->chans[VAR_16].msg = ((void*)0);
 }

 VAR_14 = FUNC_9(&VAR_9->dev, &VAR_10->mbox);
 if (VAR_14 < 0)
  FUNC_3(&VAR_9->dev, "Failed to register mailbox: %d\n", VAR_14);

 return VAR_14;
}
