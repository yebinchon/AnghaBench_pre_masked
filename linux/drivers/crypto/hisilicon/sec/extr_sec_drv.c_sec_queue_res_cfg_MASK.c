
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_queue_ring_db {int paddr; void* vaddr; } ;
struct sec_queue_ring_cq {int paddr; void* vaddr; } ;
struct sec_queue_ring_cmd {int paddr; void* vaddr; int callback; int lock; int used; } ;
struct sec_queue {int queue_id; struct sec_queue_ring_cmd ring_cmd; struct sec_queue_ring_cq ring_cq; struct sec_queue_ring_db ring_db; int task_irq; TYPE_1__* dev_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct device*,int ,void*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_6 ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct sec_queue *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev_info->dev;
 struct sec_queue_ring_cmd *VAR_9 = &VAR_7->ring_cmd;
 struct sec_queue_ring_cq *VAR_10 = &VAR_7->ring_cq;
 struct sec_queue_ring_db *VAR_11 = &VAR_7->ring_db;
 int VAR_12;

 VAR_9->vaddr = FUNC_1(VAR_8, VAR_3,
          &VAR_9->paddr, VAR_2);
 if (!VAR_9->vaddr)
  return -VAR_1;

 FUNC_0(&VAR_9->used, 0);
 FUNC_3(&VAR_9->lock);
 VAR_9->callback = VAR_6;

 VAR_10->vaddr = FUNC_1(VAR_8, VAR_4,
         &VAR_10->paddr, VAR_2);
 if (!VAR_10->vaddr) {
  VAR_12 = -VAR_1;
  goto err_free_ring_cmd;
 }

 VAR_11->vaddr = FUNC_1(VAR_8, VAR_5,
         &VAR_11->paddr, VAR_2);
 if (!VAR_11->vaddr) {
  VAR_12 = -VAR_1;
  goto err_free_ring_cq;
 }
 VAR_7->task_irq = FUNC_4(FUNC_5(VAR_8),
        VAR_7->queue_id * 2 + 1);
 if (VAR_7->task_irq <= 0) {
  VAR_12 = -VAR_0;
  goto err_free_ring_db;
 }

 return 0;

err_free_ring_db:
 FUNC_2(VAR_8, VAR_5, VAR_7->ring_db.vaddr,
     VAR_7->ring_db.paddr);
err_free_ring_cq:
 FUNC_2(VAR_8, VAR_4, VAR_7->ring_cq.vaddr,
     VAR_7->ring_cq.paddr);
err_free_ring_cmd:
 FUNC_2(VAR_8, VAR_3, VAR_7->ring_cmd.vaddr,
     VAR_7->ring_cmd.paddr);

 return VAR_12;
}
