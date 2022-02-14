
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {int dummy; } ;
struct TYPE_2__ {int (* configure ) (struct dma_channel*,unsigned long) ;} ;


 struct dma_channel* FUNC_0 (unsigned int) ;
 struct dma_info* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dma_channel*,unsigned long) ;

void FUNC_3(unsigned int VAR_0, unsigned long VAR_1)
{
 struct dma_info *VAR_2 = FUNC_1(VAR_0);
 struct dma_channel *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2->ops->configure)
  VAR_2->ops->configure(VAR_3, VAR_1);
}
