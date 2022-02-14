
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {unsigned long sar; unsigned long dar; size_t count; unsigned int mode; } ;
struct TYPE_2__ {int (* xfer ) (struct dma_channel*) ;} ;


 struct dma_channel* FUNC_0 (unsigned int) ;
 struct dma_info* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dma_channel*) ;

int FUNC_3(unsigned int VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, size_t VAR_3, unsigned int VAR_4)
{
 struct dma_info *VAR_5 = FUNC_1(VAR_0);
 struct dma_channel *VAR_6 = FUNC_0(VAR_0);

 VAR_6->sar = VAR_1;
 VAR_6->dar = VAR_2;
 VAR_6->count = VAR_3;
 VAR_6->mode = VAR_4;

 return VAR_5->ops->xfer(VAR_6);
}
