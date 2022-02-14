
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bmdma_addr; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__ ioaddr; } ;
struct TYPE_4__ {int (* bmdma_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct ata_port *VAR_1)
{
 if (FUNC_1(!VAR_1->ioaddr.bmdma_addr))
  return 0;

 return VAR_1->ops->bmdma_status(VAR_1) & VAR_0;
}
