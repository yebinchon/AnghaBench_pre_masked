
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; } ;
struct ata_host {struct arasan_cf_dev* private_data; } ;
struct arasan_cf_dev {int cf_completion; struct ata_queued_cmd* qc; TYPE_1__* host; scalar_t__ vbase; int dma_status; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct arasan_cf_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct arasan_cf_dev *VAR_16 = ((struct ata_host *)VAR_15)->private_data;
 unsigned long VAR_17;
 u32 VAR_18;

 VAR_18 = FUNC_3(VAR_16->vbase + VAR_5);
 if (!(VAR_18 & VAR_4))
  return VAR_8;

 FUNC_4(&VAR_16->host->lock, VAR_17);
 VAR_18 = FUNC_3(VAR_16->vbase + VAR_9);
 FUNC_6(VAR_18, VAR_16->vbase + VAR_9);
 FUNC_6(VAR_4, VAR_16->vbase + VAR_5);


 VAR_18 &= ~VAR_6;

 if (VAR_18 & VAR_3) {
  FUNC_0(VAR_16, 1);
  FUNC_5(&VAR_16->host->lock, VAR_17);
  return VAR_7;
 }

 if (VAR_18 & VAR_10) {
  VAR_16->dma_status = VAR_0;
  FUNC_6(FUNC_3(VAR_16->vbase + VAR_11) & ~VAR_13,
    VAR_16->vbase + VAR_11);
  FUNC_5(&VAR_16->host->lock, VAR_17);
  FUNC_1(&VAR_16->cf_completion);
  FUNC_2(VAR_16->host->dev, "pio xfer err irq\n");
  return VAR_7;
 }

 FUNC_5(&VAR_16->host->lock, VAR_17);

 if (VAR_18 & VAR_2) {
  FUNC_1(&VAR_16->cf_completion);
  return VAR_7;
 }

 if (VAR_18 & VAR_12) {
  struct ata_queued_cmd *VAR_19 = VAR_16->qc;


  if (VAR_19->tf.flags & VAR_1)
   FUNC_1(&VAR_16->cf_completion);
 }

 return VAR_7;
}
