
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lc_element {int dummy; } ;
struct drbd_interval {int sector; int size; } ;
struct drbd_device {int al_wait; int al_lock; int act_log; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int FUNC_1 (struct drbd_device*,char*,unsigned int) ;
 struct lc_element* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,struct lc_element*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct drbd_device *VAR_1, struct drbd_interval *VAR_2)
{


 unsigned VAR_3 = VAR_2->sector >> (VAR_0-9);
 unsigned VAR_4 = VAR_2->size == 0 ? VAR_3 : (VAR_2->sector + (VAR_2->size >> 9) - 1) >> (VAR_0-9);
 unsigned VAR_5;
 struct lc_element *VAR_6;
 unsigned long VAR_7;

 FUNC_0(VAR_1, VAR_3 <= VAR_4);
 FUNC_4(&VAR_1->al_lock, VAR_7);

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
  VAR_6 = FUNC_2(VAR_1->act_log, VAR_5);
  if (!VAR_6) {
   FUNC_1(VAR_1, "al_complete_io() called on inactive extent %u\n", VAR_5);
   continue;
  }
  FUNC_3(VAR_1->act_log, VAR_6);
 }
 FUNC_5(&VAR_1->al_lock, VAR_7);
 FUNC_6(&VAR_1->al_wait);
}
