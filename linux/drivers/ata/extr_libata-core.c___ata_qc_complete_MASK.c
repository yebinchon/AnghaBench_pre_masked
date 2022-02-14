
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct ata_queued_cmd {int flags; int hw_tag; unsigned long long tag; int (* complete_fn ) (struct ata_queued_cmd*) ;TYPE_2__ tf; TYPE_1__* dev; struct ata_port* ap; } ;
struct ata_port {unsigned long long qc_active; struct ata_link* excl_link; int nr_active_links; } ;
struct ata_link {int sactive; int active_tag; } ;
struct TYPE_3__ {struct ata_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct ata_queued_cmd *VAR_4)
{
 struct ata_port *VAR_5;
 struct ata_link *VAR_6;

 FUNC_0(VAR_4 == ((void*)0));
 FUNC_0(!(VAR_4->flags & VAR_0));
 VAR_5 = VAR_4->ap;
 VAR_6 = VAR_4->dev->link;

 if (FUNC_3(VAR_4->flags & VAR_2))
  FUNC_2(VAR_4);


 if (FUNC_1(VAR_4->tf.protocol)) {
  VAR_6->sactive &= ~(1 << VAR_4->hw_tag);
  if (!VAR_6->sactive)
   VAR_5->nr_active_links--;
 } else {
  VAR_6->active_tag = VAR_3;
  VAR_5->nr_active_links--;
 }


 if (FUNC_5(VAR_4->flags & VAR_1 &&
       VAR_5->excl_link == VAR_6))
  VAR_5->excl_link = ((void*)0);





 VAR_4->flags &= ~VAR_0;
 VAR_5->qc_active &= ~(1ULL << VAR_4->tag);


 VAR_4->complete_fn(VAR_4);
}
