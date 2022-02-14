
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct caam_jrentry_info {int desc_size; int desc_addr_dma; void* cbkarg; void* callbk; int * desc_addr_virt; } ;
struct caam_drv_private_jr {int head; int inplock; TYPE_1__* rregs; scalar_t__ inpring_avail; int inpring; struct caam_jrentry_info* entinfo; int tail; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int inpring_avail; int inpring_jobadd; } ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 struct caam_drv_private_jr* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;

int FUNC_15(struct device *VAR_5, u32 *VAR_6,
      void (*VAR_7)(struct device *VAR_8, u32 *VAR_9,
    u32 VAR_10, void *VAR_11),
      void *VAR_12)
{
 struct caam_drv_private_jr *VAR_13 = FUNC_5(VAR_5);
 struct caam_jrentry_info *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 dma_addr_t VAR_18;

 VAR_17 = (FUNC_2(*VAR_6) & VAR_3) * sizeof(u32);
 VAR_18 = FUNC_6(VAR_5, VAR_6, VAR_17, VAR_0);
 if (FUNC_7(VAR_5, VAR_18)) {
  FUNC_4(VAR_5, "caam_jr_enqueue(): can't map jobdesc\n");
  return -VAR_2;
 }

 FUNC_12(&VAR_13->inplock);

 VAR_15 = VAR_13->head;
 VAR_16 = FUNC_1(VAR_13->tail);

 if (!VAR_13->inpring_avail ||
     FUNC_0(VAR_15, VAR_16, VAR_4) <= 0) {
  FUNC_13(&VAR_13->inplock);
  FUNC_8(VAR_5, VAR_18, VAR_17, VAR_0);
  return -VAR_1;
 }

 VAR_14 = &VAR_13->entinfo[VAR_15];
 VAR_14->desc_addr_virt = VAR_6;
 VAR_14->desc_size = VAR_17;
 VAR_14->callbk = (void *)VAR_7;
 VAR_14->cbkarg = VAR_12;
 VAR_14->desc_addr_dma = VAR_18;

 FUNC_9(VAR_13->inpring, VAR_15, FUNC_3(VAR_18));






 FUNC_11();

 VAR_13->head = (VAR_15 + 1) & (VAR_4 - 1);
 FUNC_14(&VAR_13->rregs->inpring_jobadd, 1);

 VAR_13->inpring_avail--;
 if (!VAR_13->inpring_avail)
  VAR_13->inpring_avail = FUNC_10(&VAR_13->rregs->inpring_avail);

 FUNC_13(&VAR_13->inplock);

 return 0;
}
