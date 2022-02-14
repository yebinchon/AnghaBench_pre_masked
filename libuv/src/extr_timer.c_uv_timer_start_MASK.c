
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int heap_node; TYPE_7__* loop; scalar_t__ start_id; scalar_t__ repeat; scalar_t__ timeout; int * timer_cb; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int * uv_timer_cb ;
typedef scalar_t__ uint64_t ;
struct heap_node {int dummy; } ;
struct TYPE_9__ {scalar_t__ time; int timer_counter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct heap_node*,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(uv_timer_t* VAR_2,
                   uv_timer_cb VAR_3,
                   uint64_t VAR_4,
                   uint64_t VAR_5) {
  uint64_t VAR_6;

  if (FUNC_4(VAR_2) || VAR_3 == ((void*)0))
    return VAR_0;

  if (FUNC_3(VAR_2))
    FUNC_5(VAR_2);

  VAR_6 = VAR_2->loop->time + VAR_4;
  if (VAR_6 < VAR_4)
    VAR_6 = (uint64_t) -1;

  VAR_2->timer_cb = VAR_3;
  VAR_2->timeout = VAR_6;
  VAR_2->repeat = VAR_5;

  VAR_2->start_id = VAR_2->loop->timer_counter++;

  FUNC_0(FUNC_1(VAR_2->loop),
              (struct heap_node*) &VAR_2->heap_node,
              VAR_1);
  FUNC_2(VAR_2);

  return 0;
}
