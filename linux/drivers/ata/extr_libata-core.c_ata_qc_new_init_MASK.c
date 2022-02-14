
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int tag; int hw_tag; struct ata_device* dev; struct ata_port* ap; int * scsicmd; } ;
struct ata_port {int pflags; int flags; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_port*) ;
 scalar_t__ FUNC_3 (int) ;

struct ata_queued_cmd *FUNC_4(struct ata_device *VAR_2, int VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->link->ap;
 struct ata_queued_cmd *VAR_5;


 if (FUNC_3(VAR_4->pflags & VAR_1))
  return ((void*)0);


 if (VAR_4->flags & VAR_0) {
  VAR_3 = FUNC_2(VAR_4);
  if (VAR_3 < 0)
   return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 VAR_5->tag = VAR_5->hw_tag = VAR_3;
 VAR_5->scsicmd = ((void*)0);
 VAR_5->ap = VAR_4;
 VAR_5->dev = VAR_2;

 FUNC_1(VAR_5);

 return VAR_5;
}
