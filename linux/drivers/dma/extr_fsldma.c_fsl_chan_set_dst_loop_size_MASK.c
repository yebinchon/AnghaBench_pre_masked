
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fsldma_chan*) ;
 int FUNC_2 (struct fsldma_chan*,int) ;

__attribute__((used)) static void FUNC_3(struct fsldma_chan *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 0:
  VAR_4 &= ~VAR_0;
  break;
 case 1:
 case 2:
 case 4:
 case 8:
  VAR_4 &= ~VAR_1;
  VAR_4 |= VAR_0 | (FUNC_0(VAR_3) << 16);
  break;
 }

 FUNC_2(VAR_2, VAR_4);
}
