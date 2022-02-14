
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int hw_triggered; int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct edma_cc*,int ,int) ;
 int FUNC_5 (struct edma_cc*,int ,int,int) ;
 int FUNC_6 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct edma_chan *VAR_7)
{
 struct edma_cc *VAR_8 = VAR_7->ecc;
 int VAR_9 = FUNC_1(VAR_7->ch_num);
 int VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = FUNC_0(VAR_9);

 if (!VAR_7->hw_triggered) {

  FUNC_3(VAR_8->dev, "ESR%d %08x\n", VAR_10,
   FUNC_4(VAR_8, VAR_5, VAR_10));
  FUNC_5(VAR_8, VAR_5, VAR_10, VAR_11);
 } else {

  FUNC_3(VAR_8->dev, "ER%d %08x\n", VAR_10,
   FUNC_4(VAR_8, VAR_4, VAR_10));

  FUNC_6(VAR_8, VAR_0, VAR_10, VAR_11);
  FUNC_6(VAR_8, VAR_1, VAR_10, VAR_11);

  FUNC_5(VAR_8, VAR_6, VAR_10, VAR_11);
  FUNC_5(VAR_8, VAR_3, VAR_10, VAR_11);
  FUNC_3(VAR_8->dev, "EER%d %08x\n", VAR_10,
   FUNC_4(VAR_8, VAR_2, VAR_10));
 }
}
