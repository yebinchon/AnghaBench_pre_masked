
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct st_fdma_desc {int n_nodes; TYPE_2__* node; TYPE_1__* fchan; } ;
struct TYPE_4__ {int pdesc; int desc; } ;
struct TYPE_3__ {int node_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct st_fdma_desc*) ;
 struct st_fdma_desc* FUNC_2 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct st_fdma_desc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->n_nodes; VAR_2++)
  FUNC_0(VAR_1->fchan->node_pool, VAR_1->node[VAR_2].desc,
         VAR_1->node[VAR_2].pdesc);
 FUNC_1(VAR_1);
}
