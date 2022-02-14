
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axi_dma_chan {int id; int chip; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct axi_dma_chan *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->chip, VAR_1);

 return !!(VAR_3 & (FUNC_0(VAR_2->id) << VAR_0));
}
