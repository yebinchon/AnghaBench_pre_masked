
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_queued_cmd {TYPE_2__* dev; } ;
struct TYPE_6__ {int data_addr; } ;
struct ata_port {TYPE_3__ ioaddr; } ;
struct TYPE_5__ {TYPE_1__* link; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,unsigned int) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_1,
    unsigned char *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct ata_port *VAR_5 = VAR_1->dev->link->ap;

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_5->ioaddr.data_addr, VAR_2, VAR_3);
 else
  FUNC_1(VAR_5->ioaddr.data_addr, VAR_2, VAR_3);

 return VAR_3;
}
