
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bmdma_addr; } ;
struct TYPE_3__ {struct ata_device* device; } ;
struct ata_port {TYPE_2__ ioaddr; struct ata_device* private_data; TYPE_1__ link; } ;
struct ata_device {int dummy; } ;


 int FUNC_0 (struct ata_port*,unsigned int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct ata_port*,struct ata_device*) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0, unsigned int VAR_1)
{
 struct ata_device *VAR_2 = &VAR_0->link.device[VAR_1];
 if (VAR_0->private_data != VAR_2) {
  FUNC_1(0xd6, VAR_0->ioaddr.bmdma_addr + 0x1f);
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_2);
 }
}
