
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (struct edma_cc*,int ,int) ;
 int FUNC_6 (struct edma_cc*,int ,int,int) ;
 int FUNC_7 (struct edma_cc*,int ,int) ;
 int FUNC_8 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct edma_chan *VAR_5)
{
 struct edma_cc *VAR_6 = VAR_5->ecc;
 int VAR_7 = FUNC_2(VAR_5->ch_num);
 int VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = FUNC_1(VAR_7);

 FUNC_4(VAR_6->dev, "EMR%d %08x\n", VAR_8,
  FUNC_5(VAR_6, VAR_2, VAR_8));
 FUNC_6(VAR_6, VAR_3, VAR_8, VAR_9);

 FUNC_8(VAR_6, VAR_1, VAR_8, VAR_9);

 FUNC_6(VAR_6, VAR_4, VAR_8, VAR_9);
 FUNC_7(VAR_6, VAR_0, FUNC_0(16) | FUNC_0(1) | FUNC_0(0));
}
