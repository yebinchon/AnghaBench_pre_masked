
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsldma_chan {int desc_pool; } ;
struct TYPE_2__ {int phys; } ;
struct fsl_desc_sw {TYPE_1__ async_tx; int node; } ;


 int FUNC_0 (struct fsldma_chan*,char*,struct fsl_desc_sw*) ;
 int FUNC_1 (int ,struct fsl_desc_sw*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsldma_chan *VAR_0,
  struct fsl_desc_sw *VAR_1)
{
 FUNC_2(&VAR_1->node);
 FUNC_0(VAR_0, "LD %p free\n", VAR_1);
 FUNC_1(VAR_0->desc_pool, VAR_1, VAR_1->async_tx.phys);
}
