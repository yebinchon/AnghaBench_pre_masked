
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_fdma_chan {TYPE_1__* fdev; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 struct st_fdma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static inline struct st_fdma_chan *FUNC_3(struct dma_chan *VAR_0,
  size_t VAR_1, enum dma_transfer_direction VAR_2)
{
 struct st_fdma_chan *VAR_3;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_0);

 if (!FUNC_1(VAR_2)) {
  FUNC_0(VAR_3->fdev->dev, "bad direction?\n");
  return ((void*)0);
 }

 return VAR_3;
}
