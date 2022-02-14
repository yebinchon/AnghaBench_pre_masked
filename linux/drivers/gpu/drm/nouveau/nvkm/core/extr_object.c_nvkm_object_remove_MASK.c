
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {TYPE_1__* client; int node; } ;
struct TYPE_2__ {int objroot; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct nvkm_object *VAR_0)
{
 if (!FUNC_0(&VAR_0->node))
  FUNC_1(&VAR_0->node, &VAR_0->client->objroot);
}
