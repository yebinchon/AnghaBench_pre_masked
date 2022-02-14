
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_abi16_ntfy {int head; int node; int object; } ;
struct nouveau_abi16_chan {int heap; } ;


 int FUNC_0 (struct nouveau_abi16_ntfy*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_abi16_chan *VAR_0,
   struct nouveau_abi16_ntfy *VAR_1)
{
 FUNC_2(&VAR_1->object);
 FUNC_3(&VAR_0->heap, &VAR_1->node);
 FUNC_1(&VAR_1->head);
 FUNC_0(VAR_1);
}
