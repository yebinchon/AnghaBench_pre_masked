
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_fdma_desc {int n_nodes; TYPE_1__* node; struct st_fdma_chan* fchan; } ;
struct st_fdma_chan {int node_pool; } ;
struct TYPE_2__ {int pdesc; int desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct st_fdma_desc*) ;
 struct st_fdma_desc* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct st_fdma_desc*,int ,int) ;

__attribute__((used)) static struct st_fdma_desc *FUNC_5(struct st_fdma_chan *VAR_2,
            int VAR_3)
{
 struct st_fdma_desc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(FUNC_4(VAR_4, VAR_1, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->fchan = VAR_2;
 VAR_4->n_nodes = VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->node[VAR_5].desc = FUNC_0(VAR_2->node_pool,
    VAR_0, &VAR_4->node[VAR_5].pdesc);
  if (!VAR_4->node[VAR_5].desc)
   goto err;
 }
 return VAR_4;

err:
 while (--VAR_5 >= 0)
  FUNC_1(VAR_2->node_pool, VAR_4->node[VAR_5].desc,
         VAR_4->node[VAR_5].pdesc);
 FUNC_2(VAR_4);
 return ((void*)0);
}
