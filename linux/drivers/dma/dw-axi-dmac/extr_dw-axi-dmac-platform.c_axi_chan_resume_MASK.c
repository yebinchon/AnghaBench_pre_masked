
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axi_dma_chan {int is_paused; int chip; int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct axi_dma_chan *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->chip, VAR_2);
 VAR_4 &= ~(FUNC_0(VAR_3->id) << VAR_0);
 VAR_4 |= (FUNC_0(VAR_3->id) << VAR_1);
 FUNC_2(VAR_3->chip, VAR_2, VAR_4);

 VAR_3->is_paused = 0;
}
