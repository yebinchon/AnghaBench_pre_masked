
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_nodes; int root; } ;
typedef TYPE_1__ kson_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int *,int*,int ) ;

kson_t *FUNC_3(const char *VAR_0)
{
 kson_t *VAR_1;
 int VAR_2;
 VAR_1 = (kson_t*)FUNC_0(1, sizeof(kson_t));
 VAR_1->root = FUNC_2(VAR_0, &VAR_1->n_nodes, &VAR_2, 0);
 if (VAR_2) {
  FUNC_1(VAR_1);
  return 0;
 }
 return VAR_1;
}
