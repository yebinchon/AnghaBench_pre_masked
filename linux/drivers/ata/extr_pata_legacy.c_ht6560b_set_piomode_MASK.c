
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_timing {int recover; int active; } ;
struct TYPE_2__ {int status_addr; int device_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;
struct ata_device {scalar_t__ class; int pio_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 u8 VAR_3, VAR_4;
 struct ata_timing VAR_5;


 FUNC_0(VAR_2, VAR_2->pio_mode, &VAR_5, 20000, 1000);

 VAR_3 = FUNC_1(VAR_5.active, 2, 15);
 VAR_4 = FUNC_1(VAR_5.recover, 2, 16) & 0x0F;

 FUNC_2(0x3E6);
 FUNC_2(0x3E6);
 FUNC_2(0x3E6);
 FUNC_2(0x3E6);

 FUNC_4(VAR_4 << 4 | VAR_3, VAR_1->ioaddr.device_addr);

 if (VAR_2->class != VAR_0) {
  u8 VAR_6 = FUNC_2(0x3E6);
  if (VAR_6 & 0x24) {
   VAR_6 &= ~0x24;
   FUNC_5(VAR_6, 0x3E6);
  }
 }
 FUNC_3(VAR_1->ioaddr.status_addr);
}
