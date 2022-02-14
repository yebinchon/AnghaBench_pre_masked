
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {TYPE_1__* mbox; scalar_t__ con_priv; } ;
struct cmdq_thread {int task_busy_list; scalar_t__ base; scalar_t__ atomic_exec; scalar_t__ priority; } ;
struct cmdq_task {int list_entry; scalar_t__ pa_base; struct cmdq_pkt* pkt; struct cmdq_thread* thread; struct cmdq* cmdq; } ;
struct cmdq_pkt {scalar_t__ cmd_buf_size; scalar_t__ pa_base; } ;
struct cmdq {int suspended; int clock; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cmdq_task*) ;
 int FUNC_4 (struct cmdq_task*) ;
 int FUNC_5 (struct cmdq_thread*) ;
 scalar_t__ FUNC_6 (struct cmdq*,struct cmdq_thread*) ;
 int FUNC_7 (struct cmdq_thread*) ;
 scalar_t__ FUNC_8 (struct cmdq*,struct cmdq_thread*) ;
 int FUNC_9 (struct cmdq_thread*,unsigned long) ;
 struct cmdq* FUNC_10 (int ) ;
 struct cmdq_task* FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 unsigned long FUNC_14 (scalar_t__) ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct mbox_chan *VAR_10, void *VAR_11)
{
 struct cmdq_pkt *VAR_12 = (struct cmdq_pkt *)VAR_11;
 struct cmdq_thread *VAR_13 = (struct cmdq_thread *)VAR_10->con_priv;
 struct cmdq *VAR_14 = FUNC_10(VAR_10->mbox->dev);
 struct cmdq_task *VAR_15;
 unsigned long VAR_16, VAR_17;


 FUNC_1(VAR_14->suspended);

 VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_9);
 if (!VAR_15)
  return -VAR_8;

 VAR_15->cmdq = VAR_14;
 FUNC_0(&VAR_15->list_entry);
 VAR_15->pa_base = VAR_12->pa_base;
 VAR_15->thread = VAR_13;
 VAR_15->pkt = VAR_12;

 if (FUNC_12(&VAR_13->task_busy_list)) {
  FUNC_1(FUNC_2(VAR_14->clock) < 0);
  FUNC_1(FUNC_6(VAR_14, VAR_13) < 0);

  FUNC_16(VAR_15->pa_base, VAR_13->base + VAR_1);
  FUNC_16(VAR_15->pa_base + VAR_12->cmd_buf_size,
         VAR_13->base + VAR_4);
  FUNC_16(VAR_13->priority, VAR_13->base + VAR_7);
  FUNC_16(VAR_5, VAR_13->base + VAR_6);
  FUNC_16(VAR_2, VAR_13->base + VAR_3);
 } else {
  FUNC_1(FUNC_8(VAR_14, VAR_13) < 0);
  VAR_16 = FUNC_14(VAR_13->base + VAR_1);
  VAR_17 = FUNC_14(VAR_13->base + VAR_4);





  if (VAR_13->atomic_exec) {

   if (!FUNC_5(VAR_13)) {
    FUNC_7(VAR_13);
    FUNC_9(VAR_13, VAR_17);
    FUNC_1(FUNC_8(VAR_14, VAR_13) < 0);

    FUNC_16(VAR_15->pa_base,
           VAR_13->base + VAR_1);
   } else {
    FUNC_3(VAR_15);
    FUNC_4(VAR_15);
    FUNC_15();
   }
  } else {

   if (VAR_16 == VAR_17 - VAR_0 ||
       VAR_16 == VAR_17) {

    FUNC_16(VAR_15->pa_base,
           VAR_13->base + VAR_1);
   } else {
    FUNC_3(VAR_15);
    FUNC_15();
   }
  }
  FUNC_16(VAR_15->pa_base + VAR_12->cmd_buf_size,
         VAR_13->base + VAR_4);
  FUNC_7(VAR_13);
 }
 FUNC_13(&VAR_15->list_entry, &VAR_13->task_busy_list);

 return 0;
}
