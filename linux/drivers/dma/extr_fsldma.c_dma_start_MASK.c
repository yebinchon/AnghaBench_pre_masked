
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
 int FUNC_0 (struct fsldma_chan*) ;
 int FUNC_1 (struct fsldma_chan*,int ) ;
 int FUNC_2 (struct fsldma_chan*,int ) ;

__attribute__((used)) static void FUNC_3(struct fsldma_chan *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_5->feature & VAR_0) {
  FUNC_1(VAR_5, 0);
  VAR_6 |= VAR_3;
 } else {
  VAR_6 &= ~VAR_3;
 }

 if (VAR_5->feature & VAR_1) {
  VAR_6 |= VAR_4;
 } else {
  VAR_6 &= ~VAR_4;
  VAR_6 |= VAR_2;
 }

 FUNC_2(VAR_5, VAR_6);
}
