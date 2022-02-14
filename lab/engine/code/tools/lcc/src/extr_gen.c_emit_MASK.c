
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int emitted; int inst; scalar_t__ equatable; int registered; TYPE_2__* next; } ;
struct TYPE_9__ {TYPE_1__ x; } ;
typedef TYPE_2__* Node ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(Node VAR_0) {
 for (; VAR_0; VAR_0 = VAR_0->x.next) {
  FUNC_0(VAR_0->x.registered);
  if ((VAR_0->x.equatable && FUNC_3(VAR_0)) || FUNC_2(VAR_0))
   ;
  else
   FUNC_1)(VAR_0, VAR_0->x.inst);
  VAR_0->x.emitted = 1;
 }
}
