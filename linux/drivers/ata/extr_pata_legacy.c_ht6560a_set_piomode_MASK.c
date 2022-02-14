
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_timing {int recover; int active; } ;
struct TYPE_2__ {int status_addr; int device_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;
struct ata_device {int pio_mode; } ;


 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 u8 VAR_2, VAR_3;
 struct ata_timing VAR_4;


 FUNC_0(VAR_1, VAR_1->pio_mode, &VAR_4, 20000, 1000);

 VAR_2 = FUNC_1(VAR_4.active, 2, 15);
 VAR_3 = FUNC_1(VAR_4.recover, 4, 15);

 FUNC_2(0x3E6);
 FUNC_2(0x3E6);
 FUNC_2(0x3E6);
 FUNC_2(0x3E6);

 FUNC_4(VAR_3 << 4 | VAR_2, VAR_0->ioaddr.device_addr);
 FUNC_3(VAR_0->ioaddr.status_addr);
}
