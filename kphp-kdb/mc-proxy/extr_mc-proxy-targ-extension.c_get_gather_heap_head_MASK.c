
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* cur; int last; } ;


 TYPE_1__** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int *FUNC_1 (void) {
 if (VAR_3 >= 4) {
  FUNC_0 (VAR_2, "get_gather_heap_head: GH->last = %d, top_int = %d\n", VAR_0[1]->last, VAR_0[1]->cur ? *VAR_0[1]->cur : -1 );
 }
  return VAR_1 ? VAR_0[1]->cur : 0;
}
