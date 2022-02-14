
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {scalar_t__ regs; } ;
struct sdma_channel {int channel; struct sdma_engine* sdma; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sdma_channel *VAR_4,
  unsigned int VAR_5)
{
 struct sdma_engine *VAR_6 = VAR_4->sdma;
 int VAR_7 = VAR_4->channel;

 if (VAR_5 < VAR_2
     || VAR_5 > VAR_1) {
  return -VAR_0;
 }

 FUNC_0(VAR_5, VAR_6->regs + VAR_3 + 4 * VAR_7);

 return 0;
}
