
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct caam_drv_private_jr {int inpring_avail; int irqtask; int irq; int ridx; TYPE_1__* rregs; int inplock; scalar_t__ tail; scalar_t__ head; scalar_t__ out_ring_read_index; TYPE_2__* entinfo; void* outring; void* inpring; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int desc_addr_dma; } ;
struct TYPE_3__ {int rconfig_lo; int outring_size; int inpring_size; int outring_base; int inpring_base; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 struct caam_drv_private_jr* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 TYPE_2__* FUNC_5 (struct device*,int,int,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ,int ,struct device*) ;
 void* FUNC_7 (struct device*,int,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_13)
{
 struct caam_drv_private_jr *VAR_14;
 dma_addr_t VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = FUNC_3(VAR_13);

 VAR_18 = FUNC_0(VAR_13);
 if (VAR_18)
  return VAR_18;

 VAR_14->inpring = FUNC_7(VAR_13, VAR_9 *
        VAR_3, &VAR_15,
        VAR_1);
 if (!VAR_14->inpring)
  return -VAR_0;

 VAR_14->outring = FUNC_7(VAR_13, VAR_10 *
        VAR_3, &VAR_16,
        VAR_1);
 if (!VAR_14->outring)
  return -VAR_0;

 VAR_14->entinfo = FUNC_5(VAR_13, VAR_3, sizeof(*VAR_14->entinfo),
        VAR_1);
 if (!VAR_14->entinfo)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
  VAR_14->entinfo[VAR_17].desc_addr_dma = !0;


 VAR_14->out_ring_read_index = 0;
 VAR_14->head = 0;
 VAR_14->tail = 0;

 FUNC_12(&VAR_14->rregs->inpring_base, VAR_15);
 FUNC_12(&VAR_14->rregs->outring_base, VAR_16);
 FUNC_11(&VAR_14->rregs->inpring_size, VAR_3);
 FUNC_11(&VAR_14->rregs->outring_size, VAR_3);

 VAR_14->inpring_avail = VAR_3;

 FUNC_8(&VAR_14->inplock);


 FUNC_1(&VAR_14->rregs->rconfig_lo, 0, VAR_4 |
        (VAR_5 << VAR_7) |
        (VAR_6 << VAR_8));

 FUNC_9(&VAR_14->irqtask, VAR_11, (unsigned long)VAR_13);


 VAR_18 = FUNC_6(VAR_13, VAR_14->irq, VAR_12, VAR_2,
     FUNC_4(VAR_13), VAR_13);
 if (VAR_18) {
  FUNC_2(VAR_13, "can't connect JobR %d interrupt (%d)\n",
   VAR_14->ridx, VAR_14->irq);
  FUNC_10(&VAR_14->irqtask);
 }

 return VAR_18;
}
