
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdma_engine {scalar_t__ regs; } ;
struct sdma_channel {int channel; struct sdma_engine* sdma; } ;


 int FUNC_0 (int,unsigned long*) ;
 scalar_t__ FUNC_1 (struct sdma_engine*,unsigned int) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sdma_channel *VAR_0, unsigned int VAR_1)
{
 struct sdma_engine *VAR_2 = VAR_0->sdma;
 int VAR_3 = VAR_0->channel;
 u32 VAR_4 = FUNC_1(VAR_2, VAR_1);
 unsigned long VAR_5;

 VAR_5 = FUNC_2(VAR_2->regs + VAR_4);
 FUNC_0(VAR_3, &VAR_5);
 FUNC_3(VAR_5, VAR_2->regs + VAR_4);
}
