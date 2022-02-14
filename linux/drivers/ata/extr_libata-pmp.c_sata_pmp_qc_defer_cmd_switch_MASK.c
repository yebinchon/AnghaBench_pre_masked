
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int flags; TYPE_1__* dev; } ;
struct ata_port {scalar_t__ nr_active_links; struct ata_link* excl_link; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {struct ata_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

int FUNC_2(struct ata_queued_cmd *VAR_2)
{
 struct ata_link *VAR_3 = VAR_2->dev->link;
 struct ata_port *VAR_4 = VAR_3->ap;

 if (VAR_4->excl_link == ((void*)0) || VAR_4->excl_link == VAR_3) {
  if (VAR_4->nr_active_links == 0 || FUNC_0(VAR_3)) {
   VAR_2->flags |= VAR_1;
   return FUNC_1(VAR_2);
  }

  VAR_4->excl_link = VAR_3;
 }

 return VAR_0;
}
