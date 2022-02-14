
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {scalar_t__ proto; } ;
struct datalink {TYPE_1__* parent; } ;
struct TYPE_2__ {int object; int (* LayerStart ) (int ,struct fsm*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct fsm*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct fsm *VAR_2)
{

  struct datalink *VAR_3 = (struct datalink *)VAR_1;

  if (VAR_2->proto == VAR_0)
    (*VAR_3->parent->LayerStart)(VAR_3->parent->object, VAR_2);
}
