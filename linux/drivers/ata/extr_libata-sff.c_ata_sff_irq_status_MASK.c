
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ altstatus_addr; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__ ioaddr; } ;
struct TYPE_4__ {int (* sff_check_status ) (struct ata_port*) ;scalar_t__ sff_check_altstatus; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static u8 FUNC_2(struct ata_port *VAR_1)
{
 u8 VAR_2;

 if (VAR_1->ops->sff_check_altstatus || VAR_1->ioaddr.altstatus_addr) {
  VAR_2 = FUNC_0(VAR_1);

  if (VAR_2 & VAR_0)
   return VAR_2;
 }

 VAR_2 = VAR_1->ops->sff_check_status(VAR_1);
 return VAR_2;
}
