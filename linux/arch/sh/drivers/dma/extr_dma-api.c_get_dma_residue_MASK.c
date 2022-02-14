
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {int dummy; } ;
struct TYPE_2__ {int (* get_residue ) (struct dma_channel*) ;} ;


 struct dma_channel* FUNC_0 (unsigned int) ;
 struct dma_info* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dma_channel*) ;

int FUNC_3(unsigned int VAR_0)
{
 struct dma_info *VAR_1 = FUNC_1(VAR_0);
 struct dma_channel *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->ops->get_residue)
  return VAR_1->ops->get_residue(VAR_2);

 return 0;
}
