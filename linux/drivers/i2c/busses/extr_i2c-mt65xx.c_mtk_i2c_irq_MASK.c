
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mtk_i2c {int irq_stat; int ignore_restart_irq; int msg_complete; scalar_t__ auto_restart; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtk_i2c*,int ) ;
 int FUNC_2 (struct mtk_i2c*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct mtk_i2c *VAR_10 = VAR_9;
 u16 VAR_11 = 0;
 u16 VAR_12;

 if (VAR_10->auto_restart)
  VAR_11 = VAR_2;

 VAR_12 = FUNC_1(VAR_10, VAR_6);
 FUNC_2(VAR_10, VAR_12, VAR_6);






 VAR_10->irq_stat |= VAR_12;

 if (VAR_10->ignore_restart_irq && (VAR_10->irq_stat & VAR_11)) {
  VAR_10->ignore_restart_irq = 0;
  VAR_10->irq_stat = 0;
  FUNC_2(VAR_10, VAR_0 | VAR_1 |
        VAR_4, VAR_7);
 } else {
  if (VAR_10->irq_stat & (VAR_3 | VAR_11))
   FUNC_0(&VAR_10->msg_complete);
 }

 return VAR_5;
}
