
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct dma_pool {int dummy; } ;
struct device {int dummy; } ;
struct ccp_device {int qim; size_t cmd_q_count; size_t max_q_count; char* name; int sb_count; int axcache; struct ccp_cmd_queue* cmd_q; int sp; int irq_tasklet; scalar_t__ use_tasklet; scalar_t__ io_regs; int sb_start; struct device* dev; } ;
struct ccp_cmd_queue {unsigned int id; int int_ok; int int_err; struct dma_pool* dma_pool; struct task_struct* kthread; scalar_t__ reg_status; scalar_t__ reg_int_status; int int_queue; int free_slots; void* sb_ctx; void* sb_key; struct ccp_device* ccp; } ;
typedef int dma_pool_name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 void* VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct ccp_device*) ;
 int VAR_14 ;
 int FUNC_3 (struct ccp_device*) ;
 int FUNC_4 (struct ccp_device*) ;
 int FUNC_5 (struct ccp_device*) ;
 int FUNC_6 (struct ccp_cmd_queue*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct ccp_device*) ;
 int FUNC_8 (struct ccp_device*) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,...) ;
 int FUNC_11 (struct device*,char*,...) ;
 struct dma_pool* FUNC_12 (char*,struct device*,int ,int ,int ) ;
 int FUNC_13 (struct dma_pool*) ;
 int FUNC_14 (int *) ;
 unsigned int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 struct task_struct* FUNC_17 (int ,struct ccp_cmd_queue*,char*,char*,unsigned int) ;
 int FUNC_18 (struct task_struct*) ;
 int FUNC_19 (char*,int,char*,char*,unsigned int) ;
 int FUNC_20 (int ,struct ccp_device*) ;
 int FUNC_21 (int ,int ,char*,struct ccp_device*) ;
 int FUNC_22 (int *,int ,unsigned long) ;
 int FUNC_23 (struct task_struct*) ;

__attribute__((used)) static int FUNC_24(struct ccp_device *VAR_17)
{
 struct device *VAR_18 = VAR_17->dev;
 struct ccp_cmd_queue *VAR_19;
 struct dma_pool *VAR_20;
 char VAR_21[VAR_11];
 unsigned int VAR_22, VAR_23;
 int VAR_24;


 VAR_17->qim = 0;
 VAR_22 = FUNC_15(VAR_17->io_regs + VAR_13);
 for (VAR_23 = 0; (VAR_23 < VAR_12) && (VAR_17->cmd_q_count < VAR_17->max_q_count); VAR_23++) {
  if (!(VAR_22 & (1 << VAR_23)))
   continue;


  FUNC_19(VAR_21, sizeof(VAR_21), "%s_q%d",
    VAR_17->name, VAR_23);
  VAR_20 = FUNC_12(VAR_21, VAR_18,
        VAR_1,
        VAR_0, 0);
  if (!VAR_20) {
   FUNC_10(VAR_18, "unable to allocate dma pool\n");
   VAR_24 = -VAR_8;
   goto e_pool;
  }

  VAR_19 = &VAR_17->cmd_q[VAR_17->cmd_q_count];
  VAR_17->cmd_q_count++;

  VAR_19->ccp = VAR_17;
  VAR_19->id = VAR_23;
  VAR_19->dma_pool = VAR_20;


  VAR_19->sb_key = VAR_10 + VAR_17->sb_start++;
  VAR_19->sb_ctx = VAR_10 + VAR_17->sb_start++;
  VAR_17->sb_count -= 2;




  VAR_19->reg_status = VAR_17->io_regs + VAR_5 +
        (VAR_6 * VAR_23);
  VAR_19->reg_int_status = VAR_17->io_regs + VAR_4 +
     (VAR_6 * VAR_23);
  VAR_19->int_ok = 1 << (VAR_23 * 2);
  VAR_19->int_err = 1 << ((VAR_23 * 2) + 1);

  VAR_19->free_slots = FUNC_6(VAR_19);

  FUNC_14(&VAR_19->int_queue);


  VAR_17->qim |= VAR_19->int_ok | VAR_19->int_err;







  FUNC_9(VAR_18, "queue #%u available\n", VAR_23);
 }
 if (VAR_17->cmd_q_count == 0) {
  FUNC_11(VAR_18, "no command queues available\n");
  VAR_24 = -VAR_7;
  goto e_pool;
 }
 FUNC_11(VAR_18, "%u command queues available\n", VAR_17->cmd_q_count);


 FUNC_3(VAR_17);
 for (VAR_23 = 0; VAR_23 < VAR_17->cmd_q_count; VAR_23++) {
  VAR_19 = &VAR_17->cmd_q[VAR_23];

  FUNC_15(VAR_19->reg_int_status);
  FUNC_15(VAR_19->reg_status);
 }
 FUNC_16(VAR_17->qim, VAR_17->io_regs + VAR_9);


 VAR_24 = FUNC_21(VAR_17->sp, VAR_16, VAR_17->name, VAR_17);
 if (VAR_24) {
  FUNC_10(VAR_18, "unable to allocate an IRQ\n");
  goto e_pool;
 }


 if (VAR_17->use_tasklet)
  FUNC_22(&VAR_17->irq_tasklet, VAR_15,
        (unsigned long)VAR_17);

 FUNC_9(VAR_18, "Starting threads...\n");

 for (VAR_23 = 0; VAR_23 < VAR_17->cmd_q_count; VAR_23++) {
  struct task_struct *VAR_25;

  VAR_19 = &VAR_17->cmd_q[VAR_23];

  VAR_25 = FUNC_17(VAR_14, VAR_19,
      "%s-q%u", VAR_17->name, VAR_19->id);
  if (FUNC_0(VAR_25)) {
   FUNC_10(VAR_18, "error creating queue thread (%ld)\n",
    FUNC_1(VAR_25));
   VAR_24 = FUNC_1(VAR_25);
   goto e_kthread;
  }

  VAR_19->kthread = VAR_25;
  FUNC_23(VAR_25);
 }

 FUNC_9(VAR_18, "Enabling interrupts...\n");

 FUNC_5(VAR_17);

 FUNC_9(VAR_18, "Registering device...\n");
 FUNC_2(VAR_17);

 VAR_24 = FUNC_7(VAR_17);
 if (VAR_24)
  goto e_kthread;


 VAR_24 = FUNC_4(VAR_17);
 if (VAR_24)
  goto e_hwrng;

 return 0;

e_hwrng:
 FUNC_8(VAR_17);

e_kthread:
 for (VAR_23 = 0; VAR_23 < VAR_17->cmd_q_count; VAR_23++)
  if (VAR_17->cmd_q[VAR_23].kthread)
   FUNC_18(VAR_17->cmd_q[VAR_23].kthread);

 FUNC_20(VAR_17->sp, VAR_17);

e_pool:
 for (VAR_23 = 0; VAR_23 < VAR_17->cmd_q_count; VAR_23++)
  FUNC_13(VAR_17->cmd_q[VAR_23].dma_pool);

 return VAR_24;
}
