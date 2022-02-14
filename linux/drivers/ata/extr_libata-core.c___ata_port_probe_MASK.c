
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_eh_info {int flags; int action; int probe_mask; } ;
struct TYPE_2__ {struct ata_eh_info eh_info; } ;
struct ata_port {int lock; int pflags; TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct ata_port *VAR_6)
{
 struct ata_eh_info *VAR_7 = &VAR_6->link.eh_info;
 unsigned long VAR_8;


 FUNC_1(VAR_6->lock, VAR_8);

 VAR_7->probe_mask |= VAR_0;
 VAR_7->action |= VAR_3;
 VAR_7->flags |= VAR_1 | VAR_2;

 VAR_6->pflags &= ~VAR_4;
 VAR_6->pflags |= VAR_5;
 FUNC_0(VAR_6);

 FUNC_2(VAR_6->lock, VAR_8);
}
