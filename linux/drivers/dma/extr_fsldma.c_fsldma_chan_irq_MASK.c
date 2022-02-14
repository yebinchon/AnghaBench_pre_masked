
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_chan {int tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fsldma_chan*,char*,...) ;
 int FUNC_1 (struct fsldma_chan*,char*,...) ;
 int FUNC_2 (struct fsldma_chan*) ;
 scalar_t__ FUNC_3 (struct fsldma_chan*) ;
 int FUNC_4 (struct fsldma_chan*) ;
 int FUNC_5 (struct fsldma_chan*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct fsldma_chan *VAR_10 = VAR_9;
 u32 VAR_11;


 VAR_11 = FUNC_4(VAR_10);
 FUNC_5(VAR_10, VAR_11);
 FUNC_0(VAR_10, "irq: stat = 0x%x\n", VAR_11);


 VAR_11 &= ~(VAR_0 | VAR_1);
 if (!VAR_11)
  return VAR_7;

 if (VAR_11 & VAR_5)
  FUNC_1(VAR_10, "Transfer Error!\n");






 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_10, "irq: Programming Error INT\n");
  VAR_11 &= ~VAR_4;
  if (FUNC_3(VAR_10) != 0)
   FUNC_1(VAR_10, "Programming Error!\n");
 }





 if (VAR_11 & VAR_2) {
  FUNC_0(VAR_10, "irq: End-of-Chain link INT\n");
  VAR_11 &= ~VAR_2;
 }






 if (VAR_11 & VAR_3) {
  FUNC_0(VAR_10, "irq: End-of-link INT\n");
  VAR_11 &= ~VAR_3;
 }


 if (!FUNC_2(VAR_10))
  FUNC_1(VAR_10, "irq: controller not idle!\n");


 if (VAR_11)
  FUNC_1(VAR_10, "irq: unhandled sr 0x%08x\n", VAR_11);






 FUNC_6(&VAR_10->tasklet);
 FUNC_0(VAR_10, "irq: Exit\n");
 return VAR_6;
}
