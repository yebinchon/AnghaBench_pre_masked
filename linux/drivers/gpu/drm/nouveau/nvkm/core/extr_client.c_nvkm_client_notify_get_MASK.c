
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_client {TYPE_1__** notify; } ;
struct TYPE_2__ {int n; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct nvkm_client *VAR_1, int VAR_2)
{
 if (VAR_2 < FUNC_0(VAR_1->notify)) {
  if (VAR_1->notify[VAR_2]) {
   FUNC_1(&VAR_1->notify[VAR_2]->n);
   return 0;
  }
 }
 return -VAR_0;
}
