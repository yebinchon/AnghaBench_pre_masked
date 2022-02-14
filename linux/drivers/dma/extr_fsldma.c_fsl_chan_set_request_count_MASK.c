
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsldma_chan {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fsldma_chan*) ;
 int FUNC_3 (struct fsldma_chan*,int) ;

__attribute__((used)) static void FUNC_4(struct fsldma_chan *VAR_1, int VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2 > 1024);

 VAR_3 = FUNC_2(VAR_1);
 VAR_3 &= ~VAR_0;
 VAR_3 |= (FUNC_1(VAR_2) << 24) & VAR_0;

 FUNC_3(VAR_1, VAR_3);
}
