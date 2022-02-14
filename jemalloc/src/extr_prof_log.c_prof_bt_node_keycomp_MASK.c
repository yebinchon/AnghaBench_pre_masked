
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bt; } ;
typedef TYPE_1__ prof_bt_node_t ;


 int FUNC_0 (void*,void*) ;

__attribute__((used)) static bool
FUNC_1(const void *VAR_0, const void *VAR_1) {
 const prof_bt_node_t *VAR_2 = (prof_bt_node_t *)VAR_0;
 const prof_bt_node_t *VAR_3 = (prof_bt_node_t *)VAR_1;
 return FUNC_0((void *)(&VAR_2->bt),
     (void *)(&VAR_3->bt));
}
