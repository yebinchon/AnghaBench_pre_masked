
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cyapa {TYPE_1__* ops; scalar_t__ operational; int suspend_power_mode; int suspend_sleep_time; int state_sync_lock; int gen; int state; } ;
struct TYPE_8__ {int (* initialize ) (struct cyapa*) ;} ;
struct TYPE_7__ {int (* initialize ) (struct cyapa*) ;} ;
struct TYPE_6__ {int (* initialize ) (struct cyapa*) ;} ;
struct TYPE_5__ {int (* set_power_mode ) (struct cyapa*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cyapa*) ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cyapa*) ;
 int FUNC_4 (struct cyapa*) ;
 int FUNC_5 (struct cyapa*) ;
 int FUNC_6 (struct cyapa*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cyapa *VAR_8)
{
 int VAR_9 = 0;

 VAR_8->state = VAR_2;
 VAR_8->gen = VAR_0;
 FUNC_2(&VAR_8->state_sync_lock);





 VAR_8->suspend_power_mode = VAR_4;
 VAR_8->suspend_sleep_time =
  FUNC_1(VAR_8->suspend_power_mode);


 VAR_9 = VAR_5.initialize(VAR_8);
 if (!VAR_9)
  VAR_9 = VAR_6.initialize(VAR_8);
 if (!VAR_9)
  VAR_9 = VAR_7.initialize(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_8->operational)
  VAR_8->ops->set_power_mode(VAR_8,
    VAR_3, 0, VAR_1);

 return 0;
}
