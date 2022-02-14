
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cm_handler ) (TYPE_1__*,struct iw_cm_event*) ;} ;
struct iwcm_id_private {scalar_t__ state; int connect_wait; TYPE_1__ id; int lock; int flags; } ;
struct iw_cm_event {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,struct iw_cm_event*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iwcm_id_private *VAR_3,
          struct iw_cm_event *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_3->lock, VAR_5);






 FUNC_1(VAR_0, &VAR_3->flags);
 FUNC_0(VAR_3->state != VAR_1);
 VAR_3->state = VAR_2;
 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_6 = VAR_3->id.cm_handler(&VAR_3->id, VAR_4);
 FUNC_5(&VAR_3->connect_wait);

 return VAR_6;
}
