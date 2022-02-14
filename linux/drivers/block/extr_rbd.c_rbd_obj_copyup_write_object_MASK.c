
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int result; int num_pending; } ;
struct rbd_obj_request {int flags; TYPE_3__ pending; TYPE_2__* img_request; } ;
struct TYPE_5__ {TYPE_1__* snapc; } ;
struct TYPE_4__ {scalar_t__ num_snaps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rbd_obj_request*,scalar_t__) ;
 int FUNC_2 (struct rbd_obj_request*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct rbd_obj_request*) ;

__attribute__((used)) static void FUNC_4(struct rbd_obj_request *VAR_2)
{
 u32 VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(!VAR_2->pending.result && !VAR_2->pending.num_pending);






 if (VAR_2->flags & VAR_1)
  VAR_3 = 0;

 if (VAR_2->img_request->snapc->num_snaps && VAR_3 > 0) {






  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_4) {
   VAR_2->pending.result = VAR_4;
   return;
  }

  VAR_2->pending.num_pending++;
  VAR_3 = VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  VAR_2->pending.result = VAR_4;
  return;
 }

 VAR_2->pending.num_pending++;
}
