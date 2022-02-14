
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct request_queue* request_queue; int host; } ;
struct request_queue {scalar_t__ dma_drain_size; int * dma_drain_buffer; } ;
struct ata_port {int lock; TYPE_1__* ops; } ;
struct ata_device {int flags; int * sdev; } ;
struct TYPE_2__ {int error_handler; } ;


 int VAR_0 ;
 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device*) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_port* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

void FUNC_6(struct scsi_device *VAR_1)
{
 struct ata_port *VAR_2 = FUNC_2(VAR_1->host);
 struct request_queue *VAR_3 = VAR_1->request_queue;
 unsigned long VAR_4;
 struct ata_device *VAR_5;

 if (!VAR_2->ops->error_handler)
  return;

 FUNC_4(VAR_2->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_2, VAR_1);
 if (VAR_5 && VAR_5->sdev) {

  VAR_5->sdev = ((void*)0);
  VAR_5->flags |= VAR_0;
  FUNC_1(VAR_2);
 }
 FUNC_5(VAR_2->lock, VAR_4);

 FUNC_3(VAR_3->dma_drain_buffer);
 VAR_3->dma_drain_buffer = ((void*)0);
 VAR_3->dma_drain_size = 0;
}
