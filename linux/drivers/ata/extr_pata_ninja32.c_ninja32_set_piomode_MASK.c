
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {struct ata_device* private_data; TYPE_1__ ioaddr; } ;
struct ata_device {size_t pio_mode; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 static u16 VAR_3[5] = {
  0xd6, 0x85, 0x44, 0x33, 0x13
 };
 FUNC_0(VAR_3[VAR_2->pio_mode - VAR_0],
   VAR_1->ioaddr.bmdma_addr + 0x1f);
 VAR_1->private_data = VAR_2;
}
