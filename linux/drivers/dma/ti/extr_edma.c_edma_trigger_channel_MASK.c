
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct edma_cc*,int ,int) ;
 int FUNC_5 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct edma_chan *VAR_1)
{
 struct edma_cc *VAR_2 = VAR_1->ecc;
 int VAR_3 = FUNC_1(VAR_1->ch_num);
 int VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = FUNC_0(VAR_3);

 FUNC_5(VAR_2, VAR_0, VAR_4, VAR_5);

 FUNC_3(VAR_2->dev, "ESR%d %08x\n", VAR_4,
  FUNC_4(VAR_2, VAR_0, VAR_4));
}
