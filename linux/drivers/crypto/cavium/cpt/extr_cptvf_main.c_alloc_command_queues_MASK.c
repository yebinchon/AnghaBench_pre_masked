
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct pci_dev {int dev; } ;
struct cpt_vf {int qsize; int nr_queues; struct pci_dev* pdev; } ;
struct command_queue {scalar_t__ nchunks; int lock; struct command_chunk* qhead; int chead; } ;
struct command_qinfo {size_t cmd_size; size_t qchunksize; struct command_queue* queue; } ;
struct command_chunk {size_t size; scalar_t__ dma_addr; int * head; int nextchunk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,size_t,scalar_t__*,int ) ;
 int FUNC_3 (struct cpt_vf*,struct command_qinfo*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct command_chunk*) ;
 struct command_chunk* FUNC_7 (int,int ) ;
 int FUNC_8 (size_t,size_t) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct cpt_vf *VAR_3,
    struct command_qinfo *VAR_4, size_t VAR_5,
    u32 VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 struct command_queue *VAR_9 = ((void*)0);
 struct pci_dev *VAR_10 = VAR_3->pdev;


 VAR_4->cmd_size = VAR_5;

 VAR_3->qsize = FUNC_8(VAR_6, VAR_4->qchunksize) *
   VAR_0 + 1;

 VAR_8 = VAR_6 * VAR_4->cmd_size;


 for (VAR_7 = 0; VAR_7 < VAR_3->nr_queues; VAR_7++) {
  size_t VAR_11 = 0;
  size_t VAR_12 = VAR_8;
  struct command_chunk *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
  u32 VAR_16 = VAR_4->qchunksize * VAR_4->cmd_size;

  VAR_9 = &VAR_4->queue[VAR_7];
  FUNC_0(&VAR_4->queue[VAR_7].chead);
  do {
   VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_2);
   if (!VAR_13)
    goto cmd_qfail;

   VAR_11 = (VAR_12 > VAR_16) ? VAR_16 :
     VAR_12;
   VAR_13->head = (u8 *)FUNC_2(&VAR_10->dev,
             VAR_11 + VAR_0,
             &VAR_13->dma_addr,
             VAR_2);
   if (!VAR_13->head) {
    FUNC_1(&VAR_10->dev, "Command Q (%d) chunk (%d) allocation failed\n",
     VAR_7, VAR_9->nchunks);
    FUNC_6(VAR_13);
    goto cmd_qfail;
   }

   VAR_13->size = VAR_11;
   if (VAR_9->nchunks == 0) {
    FUNC_5(&VAR_13->nextchunk,
            &VAR_4->queue[VAR_7].chead);
    VAR_14 = VAR_13;
   } else {
    FUNC_4(&VAR_13->nextchunk,
       &VAR_15->nextchunk);
   }

   VAR_9->nchunks++;
   VAR_12 -= VAR_11;
   if (VAR_15)
    *((u64 *)(&VAR_15->head[VAR_15->size])) = (u64)VAR_13->dma_addr;

   VAR_15 = VAR_13;
  } while (VAR_12);



  VAR_13 = VAR_14;
  *((u64 *)(&VAR_15->head[VAR_15->size])) = (u64)VAR_13->dma_addr;
  VAR_9->qhead = VAR_13;
  FUNC_9(&VAR_9->lock);
 }
 return 0;

cmd_qfail:
 FUNC_3(VAR_3, VAR_4);
 return -VAR_1;
}
