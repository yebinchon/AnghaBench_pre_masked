
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ata_port {int dev; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; } ;
struct arasan_cf_dev {TYPE_2__* host; scalar_t__ vbase; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {struct arasan_cf_dev* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct arasan_cf_dev*,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_17, struct ata_device *VAR_18)
{
 struct arasan_cf_dev *VAR_19 = VAR_17->host->private_data;
 u32 VAR_20, VAR_21, VAR_22 = VAR_18->dma_mode;
 unsigned long VAR_23;

 FUNC_3(&VAR_19->host->lock, VAR_23);
 VAR_20 = FUNC_2(VAR_19->vbase + VAR_3) &
  ~(VAR_2 | VAR_8);
 VAR_21 = FUNC_2(VAR_19->vbase + VAR_5);

 if ((VAR_22 >= VAR_15) && (VAR_22 <= VAR_16)) {
  VAR_20 |= VAR_8;
  VAR_21 &= ~VAR_9;
  VAR_21 |= (VAR_22 - VAR_15) << VAR_10;
 } else if ((VAR_22 >= VAR_13) && (VAR_22 <= VAR_14)) {
  VAR_20 |= VAR_2;
  VAR_21 &= ~VAR_6;
  VAR_21 |= (VAR_22 - VAR_13) <<
   VAR_7;
 } else {
  FUNC_1(VAR_17->dev, "Unknown DMA mode\n");
  FUNC_4(&VAR_19->host->lock, VAR_23);
  return;
 }

 FUNC_5(VAR_20, VAR_19->vbase + VAR_3);
 FUNC_5(VAR_21, VAR_19->vbase + VAR_5);
 FUNC_5(VAR_1, VAR_19->vbase + VAR_11);

 FUNC_0(VAR_19, VAR_4, 0);
 FUNC_0(VAR_19, VAR_0 | VAR_12, 1);
 FUNC_4(&VAR_19->host->lock, VAR_23);
}
