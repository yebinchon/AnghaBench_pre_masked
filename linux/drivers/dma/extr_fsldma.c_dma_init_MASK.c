
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int feature; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fsldma_chan*,int) ;

__attribute__((used)) static void FUNC_1(struct fsldma_chan *VAR_6)
{

 FUNC_0(VAR_6, 0);

 switch (VAR_6->feature & VAR_0) {
 case 128:





  FUNC_0(VAR_6, VAR_1 | VAR_2
   | VAR_3);
  break;
 case 129:




  FUNC_0(VAR_6, VAR_4 | VAR_5);
  break;
 }
}
