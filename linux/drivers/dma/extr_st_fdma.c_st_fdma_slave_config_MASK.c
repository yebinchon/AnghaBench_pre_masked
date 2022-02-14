
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_fdma_chan {int scfg; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,struct dma_slave_config*,int) ;
 struct st_fdma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_0,
    struct dma_slave_config *VAR_1)
{
 struct st_fdma_chan *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->scfg, VAR_1, sizeof(VAR_2->scfg));
 return 0;
}
