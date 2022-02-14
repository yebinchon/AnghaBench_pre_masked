
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct legacy_data {int* clock; scalar_t__ type; int timing; scalar_t__ fast; } ;
struct ata_timing {int recover; int active; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {size_t devno; scalar_t__ class; int pio_mode; } ;
struct TYPE_2__ {struct legacy_data* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 struct ata_timing VAR_5;
 struct legacy_data *VAR_6 = VAR_3->host->private_data;
 int VAR_7, VAR_8;
 u8 VAR_9;


 FUNC_0(VAR_4, VAR_4->pio_mode, &VAR_5, 30303, 1000);

 if (VAR_6->fast) {
  VAR_7 = 8 - FUNC_1(VAR_5.active, 1, 8);
  VAR_8 = 18 - FUNC_1(VAR_5.recover, 3, 18);
 } else {
  VAR_7 = 9 - FUNC_1(VAR_5.active, 2, 9);
  VAR_8 = 15 - FUNC_1(VAR_5.recover, 0, 15);
 }
 VAR_9 = (VAR_8 << 4) | VAR_7 | 0x08;
 VAR_6->clock[VAR_4->devno] = VAR_9;

 if (VAR_6->type == VAR_2)
  FUNC_2(VAR_9, VAR_6->timing + 2 * VAR_4->devno);
 else
  FUNC_2(VAR_9, VAR_6->timing + 2 * VAR_3->port_no);


 if (VAR_6->type != VAR_1 && VAR_4->class != VAR_0)
  FUNC_2(0x5F, (VAR_6->timing & 0xFFF0) + 3);
}
