
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int irq_wait_queue; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtk_dsi*,int) ;
 int FUNC_1 (struct mtk_dsi*,scalar_t__,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct mtk_dsi *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = VAR_5 | VAR_0 | VAR_7;

 VAR_11 = FUNC_2(VAR_10->regs + VAR_2) & VAR_13;

 if (VAR_11) {
  do {
   FUNC_1(VAR_10, VAR_3, VAR_6, VAR_6);
   VAR_12 = FUNC_2(VAR_10->regs + VAR_2);
  } while (VAR_12 & VAR_1);

  FUNC_1(VAR_10, VAR_2, VAR_11, 0);
  FUNC_0(VAR_10, VAR_11);
  FUNC_3(&VAR_10->irq_wait_queue);
 }

 return VAR_4;
}
