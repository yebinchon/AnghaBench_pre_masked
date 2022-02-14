
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lc_element {unsigned int lc_number; } ;
struct drbd_interval {int sector; int size; } ;
struct drbd_device {int al_wait; int local_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 struct lc_element* FUNC_1 (struct drbd_device*,unsigned int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

bool FUNC_4(struct drbd_device *VAR_1, struct drbd_interval *VAR_2)
{


 unsigned VAR_3 = VAR_2->sector >> (VAR_0-9);
 unsigned VAR_4 = VAR_2->size == 0 ? VAR_3 : (VAR_2->sector + (VAR_2->size >> 9) - 1) >> (VAR_0-9);
 unsigned VAR_5;
 bool VAR_6 = 0;

 FUNC_0(VAR_1, VAR_3 <= VAR_4);
 FUNC_0(VAR_1, FUNC_2(&VAR_1->local_cnt) > 0);

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
  struct lc_element *VAR_7;
  FUNC_3(VAR_1->al_wait,
    (VAR_7 = FUNC_1(VAR_1, VAR_5, 0)) != ((void*)0));
  if (VAR_7->lc_number != VAR_5)
   VAR_6 = 1;
 }
 return VAR_6;
}
