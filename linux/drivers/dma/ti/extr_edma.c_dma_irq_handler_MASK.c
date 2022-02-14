
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edma_cc {int id; int * slave_chans; int dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct edma_cc*,int ,int) ;
 int FUNC_5 (struct edma_cc*,int ,int) ;
 int FUNC_6 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct edma_cc *VAR_8 = VAR_7;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_9 = VAR_8->id;
 if (VAR_9 < 0)
  return VAR_1;

 FUNC_2(VAR_8->dev, "dma_irq_handler\n");

 VAR_11 = FUNC_4(VAR_8, VAR_5, 0);
 if (!VAR_11) {
  VAR_11 = FUNC_4(VAR_8, VAR_5, 1);
  if (!VAR_11)
   return VAR_1;
  VAR_10 = FUNC_4(VAR_8, VAR_3, 1);
  VAR_12 = 1;
 } else {
  VAR_10 = FUNC_4(VAR_8, VAR_3, 0);
  VAR_12 = 0;
 }

 do {
  u32 VAR_13;
  u32 VAR_14;

  VAR_13 = FUNC_1(VAR_11);
  VAR_11 &= ~(FUNC_0(VAR_13));

  if (VAR_10 & FUNC_0(VAR_13)) {
   VAR_14 = (VAR_12 << 5) | VAR_13;

   FUNC_6(VAR_8, VAR_2, VAR_12, FUNC_0(VAR_13));
   FUNC_3(&VAR_8->slave_chans[VAR_14]);
  }
 } while (VAR_11);

 FUNC_5(VAR_8, VAR_4, 1);
 return VAR_0;
}
