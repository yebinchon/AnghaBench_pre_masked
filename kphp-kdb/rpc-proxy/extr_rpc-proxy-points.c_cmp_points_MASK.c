
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ x; TYPE_3__* B; } ;
typedef TYPE_2__ rpc_point_t ;
struct TYPE_11__ {TYPE_1__* methods; } ;
struct TYPE_9__ {int (* get_port ) (TYPE_3__*) ;int (* get_host ) (TYPE_3__*) ;} ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5 (rpc_point_t *VAR_0, rpc_point_t *VAR_1) {
  unsigned VAR_2 = FUNC_0 (VAR_0->B->methods->get_host (VAR_0->B));
  unsigned VAR_3 = FUNC_0 (VAR_1->B->methods->get_host (VAR_1->B));
  int VAR_4 = VAR_0->B->methods->get_port (VAR_0->B);
  int VAR_5 = VAR_1->B->methods->get_port (VAR_1->B);
  if (VAR_0->x < VAR_1->x) {
    return -1;
  } else if (VAR_0->x > VAR_1->x) {
    return 1;
  } else if (VAR_2 < VAR_3) {
    return -1;
  } else if (VAR_2 > VAR_3) {
    return 1;
  } else {
    return VAR_4 - VAR_5;
  }
}
