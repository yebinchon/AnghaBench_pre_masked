
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct mirror_set {TYPE_1__ timer; int timer_pending; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mirror_set *VAR_2)
{
 if (FUNC_1(0, &VAR_2->timer_pending))
  return;

 VAR_2->timer.expires = VAR_1 + VAR_0 / 5;
 FUNC_0(&VAR_2->timer);
}
