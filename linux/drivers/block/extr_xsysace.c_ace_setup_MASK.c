
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u16 ;
struct ace_device {int id; scalar_t__ bus_width; int media_change; scalar_t__ physaddr; int dev; int baseaddr; int tag_set; TYPE_2__* queue; TYPE_1__* gd; scalar_t__ irq; int * reg_ops; int stall_timer; int fsm_tasklet; int rq_list; int id_completion; int lock; } ;
struct TYPE_12__ {struct ace_device* queuedata; } ;
struct TYPE_11__ {int first_minor; TYPE_2__* queue; int disk_name; struct ace_device* private_data; int events; int * fops; int major; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ace_device*,int ) ;
 int FUNC_4 (struct ace_device*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct ace_device*,int ,int) ;
 int FUNC_6 (struct ace_device*,int ,int) ;
 int FUNC_7 (struct ace_device*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_20 ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int *,int *,int,int ) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*,unsigned long long,...) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (scalar_t__,int ,int ,char*,struct ace_device*) ;
 int FUNC_24 (int ,int,char*,char) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,unsigned long) ;
 int FUNC_27 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_28(struct ace_device *VAR_21)
{
 u16 VAR_22;
 u16 VAR_23;
 int VAR_24;

 FUNC_16(VAR_21->dev, "ace_setup(ace=0x%p)\n", VAR_21);
 FUNC_16(VAR_21->dev, "physaddr=0x%llx irq=%i\n",
  (unsigned long long)VAR_21->physaddr, VAR_21->irq);

 FUNC_25(&VAR_21->lock);
 FUNC_19(&VAR_21->id_completion);
 FUNC_0(&VAR_21->rq_list);




 VAR_21->baseaddr = FUNC_20(VAR_21->physaddr, 0x80);
 if (!VAR_21->baseaddr)
  goto err_ioremap;




 FUNC_26(&VAR_21->fsm_tasklet, VAR_13, (unsigned long)VAR_21);
 FUNC_27(&VAR_21->stall_timer, VAR_20, 0);




 VAR_21->queue = FUNC_13(&VAR_21->tag_set, &VAR_16, 2,
      VAR_9);
 if (FUNC_1(VAR_21->queue)) {
  VAR_24 = FUNC_2(VAR_21->queue);
  VAR_21->queue = ((void*)0);
  goto err_blk_initq;
 }
 VAR_21->queue->queuedata = VAR_21;

 FUNC_15(VAR_21->queue, 512);
 FUNC_14(VAR_21->queue, VAR_8);




 VAR_21->gd = FUNC_10(VAR_6);
 if (!VAR_21->gd)
  goto err_alloc_disk;

 VAR_21->gd->major = VAR_15;
 VAR_21->gd->first_minor = VAR_21->id * VAR_6;
 VAR_21->gd->fops = &VAR_12;
 VAR_21->gd->events = VAR_10;
 VAR_21->gd->queue = VAR_21->queue;
 VAR_21->gd->private_data = VAR_21;
 FUNC_24(VAR_21->gd->disk_name, 32, "xs%c", VAR_21->id + 'a');


 if (VAR_21->bus_width == VAR_1) {

  FUNC_7(VAR_21, VAR_0, 0x0101);


  if (FUNC_4(VAR_21, VAR_0) == 0x0001)
   VAR_21->reg_ops = &VAR_19;
  else
   VAR_21->reg_ops = &VAR_18;
 } else {
  FUNC_6(VAR_21, VAR_0, 0x00);
  VAR_21->reg_ops = &VAR_17;
 }


 VAR_22 = FUNC_3(VAR_21, VAR_7);
 if ((VAR_22 == 0) || (VAR_22 == 0xFFFF))
  goto err_read;


 FUNC_5(VAR_21, VAR_2, VAR_5 |
  VAR_3 | VAR_4);


 if (VAR_21->irq) {
  VAR_24 = FUNC_23(VAR_21->irq, VAR_14, 0, "systemace", VAR_21);
  if (VAR_24) {

   FUNC_17(VAR_21->dev, "request_irq failed\n");
   VAR_21->irq = 0;
  }
 }


 VAR_23 = FUNC_3(VAR_21, VAR_2);
 VAR_23 |= VAR_3 | VAR_4;
 FUNC_5(VAR_21, VAR_2, VAR_23);


 FUNC_18(VAR_21->dev, "Xilinx SystemACE revision %i.%i.%i\n",
   (VAR_22 >> 12) & 0xf, (VAR_22 >> 8) & 0x0f, VAR_22 & 0xff);
 FUNC_16(VAR_21->dev, "physaddr 0x%llx, mapped to 0x%p, irq=%i\n",
  (unsigned long long) VAR_21->physaddr, VAR_21->baseaddr, VAR_21->irq);

 VAR_21->media_change = 1;
 FUNC_8(VAR_21->gd);


 FUNC_9(VAR_21->gd);

 return 0;

err_read:

 VAR_21->gd->queue = ((void*)0);
 FUNC_22(VAR_21->gd);
err_alloc_disk:
 FUNC_11(VAR_21->queue);
 FUNC_12(&VAR_21->tag_set);
err_blk_initq:
 FUNC_21(VAR_21->baseaddr);
err_ioremap:
 FUNC_18(VAR_21->dev, "xsysace: error initializing device at 0x%llx\n",
   (unsigned long long) VAR_21->physaddr);
 return -VAR_11;
}
