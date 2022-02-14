
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct task_struct {int dummy; } ;
struct dma_pool {int dummy; } ;
struct device {int dummy; } ;
struct ccp_device {size_t cmd_q_count; size_t max_q_count; char* name; struct ccp_cmd_queue* cmd_q; int sp; scalar_t__ io_regs; int irq_tasklet; scalar_t__ use_tasklet; struct device* dev; } ;
struct ccp_cmd_queue {unsigned int id; int qcontrol; int lsb; struct dma_pool* dma_pool; struct task_struct* kthread; void* sb_ctx; void* sb_key; scalar_t__ reg_control; int qdma_tail; scalar_t__ reg_head_lo; scalar_t__ reg_tail_lo; int qbase_dma; scalar_t__ reg_interrupt_status; scalar_t__ reg_status; scalar_t__ reg_int_status; int int_queue; scalar_t__ reg_dma_write_status; scalar_t__ reg_dma_read_status; scalar_t__ reg_dma_status; scalar_t__ reg_int_enable; scalar_t__ qidx; int qbase; int qsize; int q_mutex; struct ccp_device* ccp; } ;
typedef int dma_pool_name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_3 (int ) ;
 int VAR_27 ;
 int FUNC_4 (struct ccp_device*) ;
 int FUNC_5 (struct ccp_device*) ;
 int FUNC_6 (struct ccp_device*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_7 (struct ccp_device*) ;
 int FUNC_8 (struct ccp_device*) ;
 int VAR_30 ;
 int FUNC_9 (struct ccp_device*) ;
 int FUNC_10 (struct ccp_cmd_queue*,int) ;
 void* FUNC_11 (struct ccp_cmd_queue*,int) ;
 int FUNC_12 (struct ccp_device*) ;
 int FUNC_13 (struct ccp_device*) ;
 int FUNC_14 (struct device*,char*,...) ;
 int FUNC_15 (struct device*,char*,...) ;
 int FUNC_16 (struct device*,char*) ;
 struct dma_pool* FUNC_17 (char*,struct device*,int ,int ,int ) ;
 int FUNC_18 (struct dma_pool*) ;
 int FUNC_19 (struct device*,int ,int *,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 void* FUNC_22 (scalar_t__) ;
 int FUNC_23 (int,scalar_t__) ;
 struct task_struct* FUNC_24 (int ,struct ccp_cmd_queue*,char*,char*,unsigned int) ;
 int FUNC_25 (struct task_struct*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,int,char*,char*,unsigned int) ;
 int FUNC_29 (int ,struct ccp_device*) ;
 int FUNC_30 (int ,int ,char*,struct ccp_device*) ;
 int FUNC_31 (int *,int ,unsigned long) ;
 int FUNC_32 (struct task_struct*) ;

__attribute__((used)) static int FUNC_33(struct ccp_device *VAR_31)
{
 struct device *VAR_32 = VAR_31->dev;
 struct ccp_cmd_queue *VAR_33;
 struct dma_pool *VAR_34;
 char VAR_35[VAR_22];
 unsigned int VAR_36, VAR_37;
 u64 VAR_38;
 u32 VAR_39, VAR_40;
 int VAR_41;


 VAR_36 = FUNC_22(VAR_31->io_regs + VAR_26);
 for (VAR_37 = 0; (VAR_37 < VAR_23) && (VAR_31->cmd_q_count < VAR_31->max_q_count); VAR_37++) {
  if (!(VAR_36 & (1 << VAR_37)))
   continue;


  FUNC_28(VAR_35, sizeof(VAR_35), "%s_q%d",
    VAR_31->name, VAR_37);
  VAR_34 = FUNC_17(VAR_35, VAR_32,
        VAR_1,
        VAR_0, 0);
  if (!VAR_34) {
   FUNC_15(VAR_32, "unable to allocate dma pool\n");
   VAR_41 = -VAR_16;
   goto e_pool;
  }

  VAR_33 = &VAR_31->cmd_q[VAR_31->cmd_q_count];
  VAR_31->cmd_q_count++;

  VAR_33->ccp = VAR_31;
  VAR_33->id = VAR_37;
  VAR_33->dma_pool = VAR_34;
  FUNC_27(&VAR_33->q_mutex);


  FUNC_0(VAR_14 > 128);
  VAR_33->qsize = FUNC_3(VAR_25);
  VAR_33->qbase = FUNC_19(VAR_32, VAR_33->qsize,
         &VAR_33->qbase_dma,
         VAR_17);
  if (!VAR_33->qbase) {
   FUNC_15(VAR_32, "unable to allocate command queue\n");
   VAR_41 = -VAR_16;
   goto e_pool;
  }

  VAR_33->qidx = 0;



  VAR_33->reg_control = VAR_31->io_regs +
         VAR_12 * (VAR_37 + 1);
  VAR_33->reg_tail_lo = VAR_33->reg_control + VAR_13;
  VAR_33->reg_head_lo = VAR_33->reg_control + VAR_5;
  VAR_33->reg_int_enable = VAR_33->reg_control +
     VAR_7;
  VAR_33->reg_interrupt_status = VAR_33->reg_control +
           VAR_6;
  VAR_33->reg_status = VAR_33->reg_control + VAR_11;
  VAR_33->reg_int_status = VAR_33->reg_control +
     VAR_8;
  VAR_33->reg_dma_status = VAR_33->reg_control +
     VAR_3;
  VAR_33->reg_dma_read_status = VAR_33->reg_control +
          VAR_2;
  VAR_33->reg_dma_write_status = VAR_33->reg_control +
           VAR_4;

  FUNC_21(&VAR_33->int_queue);

  FUNC_14(VAR_32, "queue #%u available\n", VAR_37);
 }

 if (VAR_31->cmd_q_count == 0) {
  FUNC_16(VAR_32, "no command queues available\n");
  VAR_41 = -VAR_15;
  goto e_pool;
 }


 FUNC_5(VAR_31);
 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++) {
  VAR_33 = &VAR_31->cmd_q[VAR_37];

  VAR_33->qcontrol = 0;
  FUNC_23(VAR_33->qcontrol, VAR_33->reg_control);

  FUNC_22(VAR_33->reg_int_status);
  FUNC_22(VAR_33->reg_status);


  FUNC_23(VAR_27, VAR_33->reg_interrupt_status);
 }

 FUNC_14(VAR_32, "Requesting an IRQ...\n");

 VAR_41 = FUNC_30(VAR_31->sp, VAR_29, VAR_31->name, VAR_31);
 if (VAR_41) {
  FUNC_15(VAR_32, "unable to allocate an IRQ\n");
  goto e_pool;
 }

 if (VAR_31->use_tasklet)
  FUNC_31(&VAR_31->irq_tasklet, VAR_28,
        (unsigned long)VAR_31);

 FUNC_14(VAR_32, "Loading LSB map...\n");

 VAR_39 = FUNC_22(VAR_31->io_regs + VAR_19);
 VAR_40 = FUNC_22(VAR_31->io_regs + VAR_18);
 FUNC_23(VAR_39, VAR_31->io_regs + VAR_21);
 FUNC_23(VAR_40, VAR_31->io_regs + VAR_20);
 VAR_38 = ((u64)VAR_40<<30) | (u64)VAR_39;

 FUNC_14(VAR_32, "Configuring virtual queues...\n");

 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++) {
  u32 VAR_42;
  u32 VAR_43;

  VAR_33 = &VAR_31->cmd_q[VAR_37];

  VAR_33->qcontrol &= ~(VAR_10 << VAR_9);
  VAR_33->qcontrol |= VAR_24 << VAR_9;

  VAR_33->qdma_tail = VAR_33->qbase_dma;
  VAR_42 = FUNC_26(VAR_33->qdma_tail);
  FUNC_23((u32)VAR_42, VAR_33->reg_tail_lo);
  FUNC_23((u32)VAR_42, VAR_33->reg_head_lo);

  VAR_43 = FUNC_20(VAR_33->qdma_tail);
  VAR_33->qcontrol |= (VAR_43 << 16);
  FUNC_23(VAR_33->qcontrol, VAR_33->reg_control);


  FUNC_10(VAR_33, VAR_38);
  VAR_33->lsb = -1;
 }

 FUNC_14(VAR_32, "Assigning LSBs...\n");
 VAR_41 = FUNC_8(VAR_31);
 if (VAR_41) {
  FUNC_15(VAR_32, "Unable to assign LSBs (%d)\n", VAR_41);
  goto e_irq;
 }


 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++) {
  VAR_31->cmd_q[VAR_37].sb_key = FUNC_11(&VAR_31->cmd_q[VAR_37], 2);
  VAR_31->cmd_q[VAR_37].sb_ctx = FUNC_11(&VAR_31->cmd_q[VAR_37], 2);
 }

 FUNC_14(VAR_32, "Starting threads...\n");

 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++) {
  struct task_struct *VAR_44;

  VAR_33 = &VAR_31->cmd_q[VAR_37];

  VAR_44 = FUNC_24(VAR_30, VAR_33,
      "%s-q%u", VAR_31->name, VAR_33->id);
  if (FUNC_1(VAR_44)) {
   FUNC_15(VAR_32, "error creating queue thread (%ld)\n",
    FUNC_2(VAR_44));
   VAR_41 = FUNC_2(VAR_44);
   goto e_kthread;
  }

  VAR_33->kthread = VAR_44;
  FUNC_32(VAR_44);
 }

 FUNC_14(VAR_32, "Enabling interrupts...\n");
 FUNC_6(VAR_31);

 FUNC_14(VAR_32, "Registering device...\n");

 FUNC_7(VAR_31);

 VAR_41 = FUNC_12(VAR_31);
 if (VAR_41)
  goto e_kthread;


 VAR_41 = FUNC_9(VAR_31);
 if (VAR_41)
  goto e_hwrng;






 return 0;

e_hwrng:
 FUNC_13(VAR_31);

e_kthread:
 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++)
  if (VAR_31->cmd_q[VAR_37].kthread)
   FUNC_25(VAR_31->cmd_q[VAR_37].kthread);

e_irq:
 FUNC_29(VAR_31->sp, VAR_31);

e_pool:
 for (VAR_37 = 0; VAR_37 < VAR_31->cmd_q_count; VAR_37++)
  FUNC_18(VAR_31->cmd_q[VAR_37].dma_pool);

 return VAR_41;
}
