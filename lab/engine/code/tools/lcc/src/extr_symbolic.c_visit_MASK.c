
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inst; TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_1__ x; struct TYPE_6__** kids; } ;
typedef TYPE_2__* Node ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int FUNC_0(Node VAR_1, int VAR_2) {
 if (VAR_1 && VAR_1->x.inst == 0) {
  VAR_1->x.inst = ++VAR_2;
  VAR_2 = FUNC_0(VAR_1->kids[0], VAR_2);
  VAR_2 = FUNC_0(VAR_1->kids[1], VAR_2);
  *VAR_0 = VAR_1;
  VAR_0 = &VAR_1->x.next;
 }
 return VAR_2;
}
