
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_dma_chan {TYPE_1__* cd; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_2__ {scalar_t__ single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct pl08x_dma_chan *VAR_4,
 enum dma_slave_buswidth VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 == ~0)
  return ~0;

 VAR_9 |= VAR_7 << VAR_3;
 VAR_9 |= VAR_7 << VAR_1;






 if (VAR_4->cd->single)
  VAR_6 = 1;

 VAR_8 = FUNC_0(VAR_6);
 VAR_9 |= VAR_8 << VAR_2;
 VAR_9 |= VAR_8 << VAR_0;

 return FUNC_1(VAR_9);
}
