
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int heap_node; int loop; } ;
typedef TYPE_1__ uv_timer_t ;
struct heap_node {int dummy; } ;


 int FUNC_0 (int ,struct heap_node*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(uv_timer_t* VAR_1) {
  if (!FUNC_3(VAR_1))
    return 0;

  FUNC_0(FUNC_1(VAR_1->loop),
              (struct heap_node*) &VAR_1->heap_node,
              VAR_0);
  FUNC_2(VAR_1);

  return 0;
}
