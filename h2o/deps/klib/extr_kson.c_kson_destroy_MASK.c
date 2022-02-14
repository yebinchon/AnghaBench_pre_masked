
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* str; } ;
struct TYPE_6__ {long n_nodes; struct TYPE_6__* root; TYPE_1__ v; struct TYPE_6__* key; } ;
typedef TYPE_2__ kson_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(kson_t *VAR_0)
{
 long VAR_1;
 if (VAR_0 == 0) return;
 for (VAR_1 = 0; VAR_1 < VAR_0->n_nodes; ++VAR_1) {
  FUNC_0(VAR_0->root[VAR_1].key); FUNC_0(VAR_0->root[VAR_1].v.str);
 }
 FUNC_0(VAR_0->root); FUNC_0(VAR_0);
}
