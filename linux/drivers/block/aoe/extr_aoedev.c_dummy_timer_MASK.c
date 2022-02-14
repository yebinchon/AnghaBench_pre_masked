
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct aoedev {int flags; TYPE_1__ timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct aoedev* FUNC_1 (struct aoedev*,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct timer_list *VAR_4)
{
 struct aoedev *VAR_5;

 VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 if (VAR_5->flags & VAR_0)
  return;
 VAR_5->timer.expires = VAR_2 + VAR_1;
 FUNC_0(&VAR_5->timer);
}
