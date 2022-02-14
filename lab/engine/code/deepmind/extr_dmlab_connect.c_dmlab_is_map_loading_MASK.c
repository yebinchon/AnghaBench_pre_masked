
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* context; } ;
struct TYPE_4__ {int is_map_loading; } ;
typedef TYPE_1__ GameContext ;
typedef TYPE_2__ DeepmindContext ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void* VAR_0) {
  DeepmindContext* VAR_1 = FUNC_0();
  GameContext* VAR_2 = VAR_1->context;
  return VAR_2->is_map_loading;
}
