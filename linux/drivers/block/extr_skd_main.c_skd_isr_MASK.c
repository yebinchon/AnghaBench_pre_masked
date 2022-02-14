
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skd_device {scalar_t__ state; int lock; int start_queue; int completion_worker; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct skd_device*,int ) ;
 int FUNC_1 (struct skd_device*,int,int ) ;
 int FUNC_2 (int *,char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_11 ;
 int FUNC_5 (struct skd_device*,int ,int*) ;
 int FUNC_6 (struct skd_device*) ;
 int FUNC_7 (struct skd_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_11(int VAR_12, void *VAR_13)
{
 struct skd_device *VAR_14 = VAR_13;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;

 FUNC_8(&VAR_14->lock);

 for (;; ) {
  VAR_15 = FUNC_0(VAR_14, VAR_1);

  VAR_16 = VAR_0;
  VAR_16 &= VAR_15;

  FUNC_2(&VAR_14->pdev->dev, "intstat=0x%x ack=0x%x\n", VAR_15,
   VAR_16);





  if (VAR_16 == 0) {



   if (VAR_17 == 0)
    if (FUNC_3 (VAR_14->state
     == VAR_9))
     VAR_18 = 1;
   break;
  }

  VAR_17 = VAR_5;

  FUNC_1(VAR_14, VAR_16, VAR_1);

  if (FUNC_3((VAR_14->state != VAR_8) &&
      (VAR_14->state != VAR_10))) {
   if (VAR_15 & VAR_2) {




    if (VAR_18 == 0)
     VAR_18 =
      FUNC_5(VAR_14,
      VAR_11, &VAR_19);
   }

   if (VAR_15 & VAR_3) {
    FUNC_6(VAR_14);
    if (VAR_14->state == VAR_7 ||
        VAR_14->state ==
        VAR_6) {
     FUNC_9(&VAR_14->lock);
     return VAR_17;
    }
   }

   if (VAR_15 & VAR_4)
    FUNC_7(VAR_14);
  }
 }

 if (FUNC_10(VAR_19))
  FUNC_4(&VAR_14->start_queue);

 if (VAR_18)
  FUNC_4(&VAR_14->completion_worker);
 else if (!VAR_19)
  FUNC_4(&VAR_14->start_queue);

 FUNC_9(&VAR_14->lock);

 return VAR_17;
}
