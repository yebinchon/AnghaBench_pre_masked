
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_chan {int feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsldma_chan*,char*) ;
 scalar_t__ FUNC_1 (struct fsldma_chan*) ;
 int FUNC_2 (struct fsldma_chan*) ;
 int FUNC_3 (struct fsldma_chan*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct fsldma_chan *VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 VAR_6 = FUNC_2(VAR_5);






 if ((VAR_5->feature & VAR_1) == VAR_0) {
  VAR_6 |= VAR_2;
  FUNC_3(VAR_5, VAR_6);

  VAR_6 &= ~VAR_2;
 }


 VAR_6 &= ~(VAR_3 | VAR_4);
 FUNC_3(VAR_5, VAR_6);


 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  if (FUNC_1(VAR_5))
   return;

  FUNC_4(10);
 }

 if (!FUNC_1(VAR_5))
  FUNC_0(VAR_5, "DMA halt timeout!\n");
}
