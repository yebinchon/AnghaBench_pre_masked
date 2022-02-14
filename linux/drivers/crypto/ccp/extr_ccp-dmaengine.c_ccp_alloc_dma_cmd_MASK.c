
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_dma_cmd {int dummy; } ;
struct ccp_dma_chan {TYPE_1__* ccp; } ;
struct TYPE_2__ {int dma_cmd_cache; } ;


 int VAR_0 ;
 struct ccp_dma_cmd* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ccp_dma_cmd*,int ,int) ;

__attribute__((used)) static struct ccp_dma_cmd *FUNC_2(struct ccp_dma_chan *VAR_1)
{
 struct ccp_dma_cmd *VAR_2;

 VAR_2 = FUNC_0(VAR_1->ccp->dma_cmd_cache, VAR_0);
 if (VAR_2)
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 return VAR_2;
}
