
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct legacy_data {int timing; } ;
struct ata_timing {int setup; int recover; int active; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ class; int pio_mode; } ;
struct TYPE_2__ {struct legacy_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct ata_timing VAR_3;
 struct legacy_data *VAR_4 = VAR_1->host->private_data;
 int VAR_5, VAR_6;
 u8 VAR_7;
 int VAR_8 = 0x88 + (VAR_1->port_no * 4) + (VAR_2->devno * 2);

 VAR_7 = FUNC_3(VAR_4->timing, 0x81);


 if (VAR_7 & 0x40)
  FUNC_1(VAR_2, VAR_2->pio_mode, &VAR_3, 20000, 1000);
 else
  FUNC_1(VAR_2, VAR_2->pio_mode, &VAR_3, 30303, 1000);

 VAR_5 = (FUNC_2(VAR_3.active, 3, 17) - 1) & 0x0F;
 VAR_6 = (FUNC_2(VAR_3.recover, 1, 15) + 1) & 0x0F;
 VAR_8 = (VAR_5 << 4) | VAR_6;
 FUNC_4(VAR_4->timing, VAR_8, VAR_7);



 VAR_7 = 0x35;
 if (VAR_2->class != VAR_0)
  VAR_7 |= 0x08;
 if (!FUNC_0(VAR_2))
  VAR_7 |= 0x02;
 VAR_7 |= (FUNC_2(VAR_3.setup, 0, 3) << 6);
 FUNC_4(VAR_4->timing, VAR_8 + 1, VAR_7);
}
