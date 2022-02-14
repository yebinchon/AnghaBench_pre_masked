
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_hash_dev {int flags; int dev; int done_task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct img_hash_dev*,int ) ;
 int FUNC_3 (struct img_hash_dev*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 struct img_hash_dev *VAR_13 = VAR_12;
 u32 VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_1);
 FUNC_3(VAR_13, VAR_0, VAR_14);

 if (VAR_14 & VAR_3) {
  FUNC_0(VAR_13->dev, "IRQ CR_INT_NEW_RESULTS_SET\n");
  if (VAR_6 & VAR_13->flags) {
   VAR_13->flags |= VAR_9;
   if (!(VAR_7 & VAR_13->flags))
    VAR_13->flags |= VAR_8;
   FUNC_4(&VAR_13->done_task);
  } else {
   FUNC_1(VAR_13->dev,
     "HASH interrupt when no active requests.\n");
  }
 } else if (VAR_14 & VAR_4) {
  FUNC_1(VAR_13->dev,
    "IRQ triggered before the hash had completed\n");
 } else if (VAR_14 & VAR_5) {
  FUNC_1(VAR_13->dev,
    "Attempt to read from an empty result queue\n");
 } else if (VAR_14 & VAR_2) {
  FUNC_1(VAR_13->dev,
    "Data written before the hardware was configured\n");
 }
 return VAR_10;
}
