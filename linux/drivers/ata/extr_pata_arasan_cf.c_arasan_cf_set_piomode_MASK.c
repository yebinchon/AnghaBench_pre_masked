
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct arasan_cf_dev {TYPE_2__* host; scalar_t__ vbase; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {struct arasan_cf_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct arasan_cf_dev*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_11, struct ata_device *VAR_12)
{
 struct arasan_cf_dev *VAR_13 = VAR_11->host->private_data;
 u8 VAR_14 = VAR_12->pio_mode - VAR_10;
 unsigned long VAR_15;
 u32 VAR_16;


 if (VAR_14 > 6) {
  FUNC_1(VAR_11->dev, "Unknown PIO mode\n");
  return;
 }

 FUNC_3(&VAR_13->host->lock, VAR_15);
 VAR_16 = FUNC_2(VAR_13->vbase + VAR_3) &
  ~(VAR_8 | VAR_2 | VAR_1);
 FUNC_5(VAR_16, VAR_13->vbase + VAR_3);
 VAR_16 = FUNC_2(VAR_13->vbase + VAR_5) & ~VAR_6;
 VAR_16 |= VAR_14 << VAR_7;
 FUNC_5(VAR_16, VAR_13->vbase + VAR_5);

 FUNC_0(VAR_13, VAR_0 | VAR_9, 0);
 FUNC_0(VAR_13, VAR_4, 1);
 FUNC_4(&VAR_13->host->lock, VAR_15);
}
