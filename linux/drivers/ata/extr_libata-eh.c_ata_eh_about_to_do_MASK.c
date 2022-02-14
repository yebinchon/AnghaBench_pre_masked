
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int lock; int pflags; struct ata_link* slave_link; } ;
struct TYPE_2__ {int flags; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_eh_info {int dummy; } ;
struct ata_link {struct ata_eh_context eh_context; struct ata_eh_info eh_info; struct ata_port* ap; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_link*,struct ata_device*,struct ata_eh_info*,unsigned int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct ata_link *VAR_2, struct ata_device *VAR_3,
   unsigned int VAR_4)
{
 struct ata_port *VAR_5 = VAR_2->ap;
 struct ata_eh_info *VAR_6 = &VAR_2->eh_info;
 struct ata_eh_context *VAR_7 = &VAR_2->eh_context;
 unsigned long VAR_8;

 FUNC_1(VAR_5->lock, VAR_8);

 FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4);




 if (!(VAR_7->i.flags & VAR_0) && VAR_2 != VAR_5->slave_link)
  VAR_5->pflags |= VAR_1;

 FUNC_2(VAR_5->lock, VAR_8);
}
