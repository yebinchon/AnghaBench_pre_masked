
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int word; } ;
typedef TYPE_1__ query_node_t ;
typedef int hash_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static query_node_t *FUNC_1 (hash_t VAR_1) {
  query_node_t *VAR_2 = FUNC_0 (VAR_0);
  if (!VAR_2) {
    return 0;
  }
  VAR_2->word = VAR_1;
  return VAR_2;
}
