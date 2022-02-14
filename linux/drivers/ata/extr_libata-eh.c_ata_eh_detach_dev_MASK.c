
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int lock; int pflags; } ;
struct ata_eh_context {int saved_ncq_enabled; scalar_t__* saved_xfer_mode; int i; } ;
struct ata_link {struct ata_eh_context eh_context; int eh_info; struct ata_port* ap; } ;
struct ata_device {size_t devno; int flags; struct ata_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_link*,struct ata_device*,int *,int ) ;
 scalar_t__ FUNC_2 (struct ata_device*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct ata_device *VAR_4)
{
 struct ata_link *VAR_5 = VAR_4->link;
 struct ata_port *VAR_6 = VAR_5->ap;
 struct ata_eh_context *VAR_7 = &VAR_5->eh_context;
 unsigned long VAR_8;

 FUNC_0(VAR_4);

 FUNC_3(VAR_6->lock, VAR_8);

 VAR_4->flags &= ~VAR_0;

 if (FUNC_2(VAR_4)) {
  VAR_4->flags |= VAR_1;
  VAR_6->pflags |= VAR_3;
 }


 FUNC_1(VAR_5, VAR_4, &VAR_5->eh_info, VAR_2);
 FUNC_1(VAR_5, VAR_4, &VAR_5->eh_context.i, VAR_2);
 VAR_7->saved_xfer_mode[VAR_4->devno] = 0;
 VAR_7->saved_ncq_enabled &= ~(1 << VAR_4->devno);

 FUNC_4(VAR_6->lock, VAR_8);
}
