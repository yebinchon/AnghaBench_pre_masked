
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* to_node_id; int total; int * per_node; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3)
{
 if (VAR_1->to_node_id[VAR_2] == VAR_0) {
  VAR_1->per_node[VAR_3]++;
  VAR_1->to_node_id[VAR_2] = VAR_3;
  VAR_1->total++;
 } else {
  FUNC_0(VAR_1->to_node_id[VAR_2] != VAR_3);
 }
}
