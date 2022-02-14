
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int op; } ;
typedef TYPE_1__ query_node_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static query_node_t *FUNC_1 (int VAR_3) {
  query_node_t *VAR_4 = VAR_1 + VAR_2;
  if (VAR_2 >= VAR_0) {
    return 0;
  }
  VAR_2++;
  FUNC_0 (VAR_4, 0, sizeof (*VAR_4));
  VAR_4->op = VAR_3;
  return VAR_4;
}
