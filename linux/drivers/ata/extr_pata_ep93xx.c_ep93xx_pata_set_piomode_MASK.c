
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_timing {int dummy; } ;
struct ep93xx_pata_data {int ide_base; int iordy; struct ata_timing t; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {scalar_t__ pio_mode; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*,scalar_t__,struct ata_timing*,unsigned long,int ) ;
 int FUNC_3 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_3,
        struct ata_device *VAR_4)
{
 struct ep93xx_pata_data *VAR_5 = VAR_3->host->private_data;
 struct ata_device *VAR_6 = FUNC_0(VAR_4);







 unsigned long VAR_7 = 1000000 / (200 / 5);

 FUNC_2(VAR_4, VAR_4->pio_mode, &VAR_5->t, VAR_7, 0);
 if (VAR_6 && VAR_6->pio_mode) {
  struct ata_timing VAR_8;
  FUNC_2(VAR_6, VAR_6->pio_mode, &VAR_8, VAR_7, 0);
  FUNC_3(&VAR_8, &VAR_5->t, &VAR_5->t,
   VAR_1 | VAR_0);
 }
 VAR_5->iordy = FUNC_1(VAR_4);

 FUNC_4(VAR_5->ide_base,
          VAR_4->pio_mode - VAR_2);
}
