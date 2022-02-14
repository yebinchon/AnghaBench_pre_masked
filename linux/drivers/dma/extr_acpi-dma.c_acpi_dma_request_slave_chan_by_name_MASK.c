
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct dma_chan* FUNC_0 (int ) ;
 struct dma_chan* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 int FUNC_3 (struct device*,char*,char const*) ;
 int FUNC_4 (char const*,char*) ;

struct dma_chan *FUNC_5(struct device *VAR_1,
  const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, "dma-names", VAR_2);
 if (VAR_3 < 0) {
  if (!FUNC_4(VAR_2, "tx"))
   VAR_3 = 0;
  else if (!FUNC_4(VAR_2, "rx"))
   VAR_3 = 1;
  else
   return FUNC_0(-VAR_0);
 }

 FUNC_2(VAR_1, "Looking for DMA channel \"%s\" at index %d...\n", VAR_2, VAR_3);
 return FUNC_1(VAR_1, VAR_3);
}
