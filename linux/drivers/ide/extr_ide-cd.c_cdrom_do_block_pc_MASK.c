
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {unsigned int dma_pad_mask; } ;
struct request {scalar_t__ bio; int rq_flags; int cmd_type; int * cmd; } ;
struct TYPE_3__ {int dma; int dev_flags; struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 unsigned int FUNC_5 (struct request_queue*) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_4, struct request *VAR_5)
{

 FUNC_3(VAR_0, "rq->cmd[0]: 0x%x, rq->cmd_type: 0x%x",
      VAR_5->cmd[0], VAR_5->cmd_type);

 if (FUNC_2(VAR_5))
  VAR_5->rq_flags |= VAR_3;
 else
  VAR_5->rq_flags &= ~VAR_2;

 VAR_4->dma = 0;


 if (VAR_5->bio) {
  struct request_queue *VAR_6 = VAR_4->queue;
  char *VAR_7 = FUNC_0(VAR_5->bio);
  unsigned int VAR_8;

  VAR_4->dma = !!(VAR_4->dev_flags & VAR_1);







  VAR_8 = FUNC_5(VAR_6) | VAR_6->dma_pad_mask;
  if ((unsigned long)VAR_7 & VAR_8
      || FUNC_1(VAR_5) & VAR_6->dma_pad_mask
      || FUNC_4(VAR_7))
   VAR_4->dma = 0;
 }
}
