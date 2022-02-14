
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ftide010 {scalar_t__ base; int dev; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t pio_mode; } ;
struct TYPE_2__ {struct ftide010* private_data; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_4, struct ata_device *VAR_5)
{
 struct ftide010 *VAR_6 = VAR_4->host->private_data;
 u8 VAR_7 = VAR_5->pio_mode - VAR_1;

 FUNC_0(VAR_6->dev, "set PIO mode %02x, index %d\n",
  VAR_5->pio_mode, VAR_7);
 FUNC_1(VAR_2[VAR_7] << 4 | VAR_3[VAR_7],
        VAR_6->base + VAR_0);
}
