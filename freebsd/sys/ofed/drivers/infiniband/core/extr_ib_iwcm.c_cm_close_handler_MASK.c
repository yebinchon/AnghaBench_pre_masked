
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* cm_handler ) (TYPE_3__*,struct iw_cm_event*) ;TYPE_2__* device; } ;
struct iwcm_id_private {int state; int lock; TYPE_3__ id; int * qp; } ;
struct iw_cm_event {int dummy; } ;
struct TYPE_5__ {TYPE_1__* iwcm; } ;
struct TYPE_4__ {int (* rem_ref ) (int *) ;} ;


 int FUNC_0 () ;



 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,struct iw_cm_event*) ;

__attribute__((used)) static int FUNC_5(struct iwcm_id_private *VAR_1,
      struct iw_cm_event *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;
 FUNC_1(&VAR_1->lock, VAR_3);

 if (VAR_1->qp) {
  VAR_1->id.device->iwcm->rem_ref(VAR_1->qp);
  VAR_1->qp = ((void*)0);
 }
 switch (VAR_1->state) {
 case 128:
 case 130:
  VAR_1->state = VAR_0;
  FUNC_2(&VAR_1->lock, VAR_3);
  VAR_4 = VAR_1->id.cm_handler(&VAR_1->id, VAR_2);
  FUNC_1(&VAR_1->lock, VAR_3);
  break;
 case 129:
  break;
 default:
  FUNC_0();
 }
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_4;
}
