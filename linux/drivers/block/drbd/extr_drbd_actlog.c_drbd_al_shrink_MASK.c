
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lc_element {scalar_t__ lc_number; } ;
struct drbd_device {int al_wait; TYPE_1__* act_log; } ;
struct TYPE_2__ {int nr_elements; int flags; } ;


 int FUNC_0 (struct drbd_device*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drbd_device*,struct lc_element*) ;
 struct lc_element* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drbd_device *VAR_2)
{
 struct lc_element *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2, FUNC_3(VAR_1, &VAR_2->act_log->flags));

 for (VAR_4 = 0; VAR_4 < VAR_2->act_log->nr_elements; VAR_4++) {
  VAR_3 = FUNC_2(VAR_2->act_log, VAR_4);
  if (VAR_3->lc_number == VAR_0)
   continue;
  FUNC_4(VAR_2->al_wait, FUNC_1(VAR_2, VAR_3));
 }

 FUNC_5(&VAR_2->al_wait);
}
