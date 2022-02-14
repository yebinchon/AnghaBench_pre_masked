
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int protocol; } ;
struct ata_queued_cmd {TYPE_3__* ap; TYPE_1__ tf; int err_mask; } ;
struct arasan_cf_dev {TYPE_4__* host; int irq; struct ata_queued_cmd* qc; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_6__ {int eh_info; } ;
struct TYPE_7__ {TYPE_2__ link; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(struct arasan_cf_dev *VAR_0)
{
 struct ata_queued_cmd *VAR_1 = VAR_0->qc;
 unsigned long VAR_2;

 VAR_0->qc = ((void*)0);
 FUNC_2(VAR_0->irq, VAR_0->host);

 FUNC_3(&VAR_0->host->lock, VAR_2);
 if (FUNC_5(VAR_1->err_mask) && FUNC_1(VAR_1->tf.protocol))
  FUNC_0(&VAR_1->ap->link.eh_info, "DMA Failed: Timeout");
 FUNC_4(&VAR_0->host->lock, VAR_2);
}
