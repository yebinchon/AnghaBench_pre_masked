
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oclass; } ;
struct nvkm_oclass {int object; int token; int route; int handle; TYPE_1__ base; int engine; int client; } ;
struct nvkm_object_func {int dummy; } ;
struct nvkm_object {int engine; int node; int tree; int head; int object; int token; int route; int handle; int oclass; int client; struct nvkm_object_func const* func; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(const struct nvkm_object_func *VAR_0,
   const struct nvkm_oclass *VAR_1, struct nvkm_object *VAR_2)
{
 VAR_2->func = VAR_0;
 VAR_2->client = VAR_1->client;
 VAR_2->engine = FUNC_4(VAR_1->engine);
 VAR_2->oclass = VAR_1->base.oclass;
 VAR_2->handle = VAR_1->handle;
 VAR_2->route = VAR_1->route;
 VAR_2->token = VAR_1->token;
 VAR_2->object = VAR_1->object;
 FUNC_0(&VAR_2->head);
 FUNC_0(&VAR_2->tree);
 FUNC_2(&VAR_2->node);
 FUNC_3(FUNC_1(VAR_2->engine));
}
