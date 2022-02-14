
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {int flags; } ;
struct TYPE_4__ {int active_tag; } ;
struct ata_port {TYPE_1__* ops; TYPE_2__ link; int lock; } ;
typedef int * ata_reset_fn_t ;
struct TYPE_3__ {int postreset; int prereset; int (* sff_drain_fifo ) (struct ata_queued_cmd*) ;int * hardreset; int * softreset; } ;


 int VAR_0 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_port*,int ,int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct ata_queued_cmd*) ;

void FUNC_6(struct ata_port *VAR_3)
{
 ata_reset_fn_t VAR_4 = VAR_3->ops->softreset;
 ata_reset_fn_t VAR_5 = VAR_3->ops->hardreset;
 struct ata_queued_cmd *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_3->link.active_tag);
 if (VAR_6 && !(VAR_6->flags & VAR_0))
  VAR_6 = ((void*)0);

 FUNC_3(VAR_3->lock, VAR_7);
 if (VAR_3->ops->sff_drain_fifo)
  VAR_3->ops->sff_drain_fifo(VAR_6);

 FUNC_4(VAR_3->lock, VAR_7);


 if ((VAR_5 == VAR_2 ||
      VAR_5 == VAR_1) && !FUNC_2(&VAR_3->link))
  VAR_5 = ((void*)0);

 FUNC_1(VAR_3, VAR_3->ops->prereset, VAR_4, VAR_5,
    VAR_3->ops->postreset);
}
