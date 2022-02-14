
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {scalar_t__ proto; scalar_t__ state; scalar_t__ open_mode; } ;
struct datalink {TYPE_1__* parent; } ;
struct TYPE_2__ {int object; int (* LayerFinish ) (int ,struct fsm*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct datalink*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*) ;
 int FUNC_3 (int ,struct fsm*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct fsm *VAR_5)
{

  struct datalink *VAR_6 = (struct datalink *)VAR_4;

  if (VAR_5->proto == VAR_2) {
    FUNC_1(VAR_5);
    (*VAR_6->parent->LayerFinish)(VAR_6->parent->object, VAR_5);
    FUNC_0(VAR_6, VAR_0);
  } else if (VAR_5->state == VAR_3 && VAR_5->open_mode == VAR_1)
    FUNC_2(VAR_5);
}
