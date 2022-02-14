
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ thr_uid; } ;
typedef TYPE_1__ prof_thr_node_t ;



__attribute__((used)) static bool
FUNC_0(const void *VAR_0, const void *VAR_1) {
 const prof_thr_node_t *VAR_2 = (prof_thr_node_t *)VAR_0;
 const prof_thr_node_t *VAR_3 = (prof_thr_node_t *)VAR_1;
 return VAR_2->thr_uid == VAR_3->thr_uid;
}
