
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_chan*) ;
 struct dma_chan* FUNC_1 (struct device*,char const*) ;

struct dma_chan *FUNC_2(struct device *VAR_0,
        const char *VAR_1)
{
 struct dma_chan *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 return VAR_2;
}
