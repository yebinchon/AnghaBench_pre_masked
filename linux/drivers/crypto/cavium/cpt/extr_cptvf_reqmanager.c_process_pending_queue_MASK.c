
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char compcode; } ;
union cpt_res_s {TYPE_1__ s; } ;
struct pending_queue {size_t front; int lock; int pending_count; struct pending_entry* head; } ;
struct pending_qinfo {struct pending_queue* queue; } ;
struct pending_entry {int busy; int callback_arg; int (* callback ) (unsigned char,int ) ;int * post_arg; int * completion_addr; } ;
struct pci_dev {int dev; } ;
struct cpt_vf {struct pci_dev* pdev; } ;
struct cpt_info_buffer {unsigned char* alternate_caddr; scalar_t__ extra_time; int cptvf; scalar_t__ time_in; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,struct cpt_info_buffer*) ;
 int FUNC_3 (struct cpt_vf*,struct cpt_info_buffer*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct pending_qinfo*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned char,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline void FUNC_10(struct cpt_vf *VAR_7,
      struct pending_qinfo *VAR_8,
      int VAR_9)
{
 struct pci_dev *VAR_10 = VAR_7->pdev;
 struct pending_queue *VAR_11 = &VAR_8->queue[VAR_9];
 struct pending_entry *VAR_12 = ((void*)0);
 struct cpt_info_buffer *VAR_13 = ((void*)0);
 union cpt_res_s *VAR_14 = ((void*)0);
 unsigned char VAR_15;

 while (1) {
  FUNC_5(&VAR_11->lock);
  VAR_12 = &VAR_11->head[VAR_11->front];
  if (FUNC_9(!VAR_12->busy)) {
   FUNC_6(&VAR_11->lock);
   break;
  }

  VAR_13 = (struct cpt_info_buffer *)VAR_12->post_arg;
  if (FUNC_9(!VAR_13)) {
   FUNC_1(&VAR_10->dev, "Pending Entry post arg NULL\n");
   FUNC_4(VAR_8, VAR_9);
   FUNC_6(&VAR_11->lock);
   continue;
  }

  VAR_14 = (union cpt_res_s *)VAR_12->completion_addr;
  VAR_15 = VAR_14->s.compcode;
  if ((VAR_14->s.compcode == VAR_2) ||
      (VAR_14->s.compcode == VAR_3)) {
   FUNC_1(&VAR_10->dev, "Request failed with %s\n",
    (VAR_14->s.compcode == VAR_2) ?
    "DMA Fault" : "Software error");
   VAR_12->completion_addr = ((void*)0);
   VAR_12->busy = 0;
   FUNC_0((&VAR_11->pending_count));
   VAR_12->post_arg = ((void*)0);
   FUNC_4(VAR_8, VAR_9);
   FUNC_3(VAR_7, VAR_13);
   FUNC_6(&VAR_11->lock);
   break;
  } else if (VAR_14->s.compcode == VAR_0) {

   if (FUNC_8(VAR_6,
       (VAR_13->time_in +
       (VAR_1 * VAR_4)))) {
    FUNC_1(&VAR_10->dev, "Request timed out");
    VAR_12->completion_addr = ((void*)0);
    VAR_12->busy = 0;
    FUNC_0((&VAR_11->pending_count));
    VAR_12->post_arg = ((void*)0);
    FUNC_4(VAR_8, VAR_9);
    FUNC_3(VAR_7, VAR_13);
    FUNC_6(&VAR_11->lock);
    break;
   } else if ((*VAR_13->alternate_caddr ==
    (~VAR_0)) &&
    (VAR_13->extra_time < VAR_5)) {
    VAR_13->time_in = VAR_6;
    VAR_13->extra_time++;
    FUNC_6(&VAR_11->lock);
    break;
   }
  }

  VAR_12->completion_addr = ((void*)0);
  VAR_12->busy = 0;
  VAR_12->post_arg = ((void*)0);
  FUNC_0((&VAR_11->pending_count));
  FUNC_4(VAR_8, VAR_9);
  FUNC_6(&VAR_11->lock);

  FUNC_2(VAR_13->cptvf, VAR_13);




  VAR_12->callback(VAR_15, VAR_12->callback_arg);
 }
}
