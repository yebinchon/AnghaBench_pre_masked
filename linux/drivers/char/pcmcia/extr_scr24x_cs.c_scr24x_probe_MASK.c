
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ops; int owner; } ;
struct scr24x_dev {scalar_t__ devno; TYPE_2__ c_dev; int regs; int * dev; int refcnt; int lock; } ;
struct pcmcia_device {int config_flags; int dev; TYPE_1__** resource; struct scr24x_dev* priv; } ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int *,int ,int *,char*,scalar_t__) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct scr24x_dev*) ;
 int FUNC_10 (int *) ;
 struct scr24x_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct pcmcia_device*) ;
 int FUNC_14 (struct pcmcia_device*) ;
 int FUNC_15 (struct pcmcia_device*,int ,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_17(struct pcmcia_device *VAR_14)
{
 struct scr24x_dev *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_4;

 VAR_15->devno = FUNC_8(VAR_13, VAR_7);
 if (VAR_15->devno >= VAR_7) {
  VAR_16 = -VAR_2;
  goto err;
 }

 FUNC_12(&VAR_15->lock);
 FUNC_10(&VAR_15->refcnt);

 VAR_14->priv = VAR_15;
 VAR_14->config_flags |= VAR_1 | VAR_0;

 VAR_16 = FUNC_15(VAR_14, VAR_10, ((void*)0));
 if (VAR_16 < 0)
  goto err;

 VAR_15->dev = &VAR_14->dev;
 VAR_15->regs = FUNC_7(&VAR_14->dev,
    VAR_14->resource[VAR_6]->start,
    FUNC_16(VAR_14->resource[VAR_6]));
 if (!VAR_15->regs) {
  VAR_16 = -VAR_3;
  goto err;
 }

 FUNC_3(&VAR_15->c_dev, &VAR_12);
 VAR_15->c_dev.owner = VAR_8;
 VAR_15->c_dev.ops = &VAR_12;
 VAR_16 = FUNC_2(&VAR_15->c_dev, FUNC_1(FUNC_0(VAR_11), VAR_15->devno), 1);
 if (VAR_16 < 0)
  goto err;

 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16 < 0) {
  FUNC_13(VAR_14);
  goto err;
 }

 FUNC_6(VAR_9, ((void*)0), FUNC_1(FUNC_0(VAR_11), VAR_15->devno),
        ((void*)0), "scr24x%d", VAR_15->devno);

 FUNC_5(&VAR_14->dev, "SCR24x Chip Card Interface\n");
 return 0;

err:
 if (VAR_15->devno < VAR_7)
  FUNC_4(VAR_15->devno, VAR_13);
 FUNC_9 (VAR_15);
 return VAR_16;
}
