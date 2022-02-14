
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_interval {int sector; int size; } ;
struct drbd_device {int local_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int FUNC_1 (struct drbd_device*,unsigned int,int) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(struct drbd_device *VAR_1, struct drbd_interval *VAR_2)
{


 unsigned VAR_3 = VAR_2->sector >> (VAR_0-9);
 unsigned VAR_4 = VAR_2->size == 0 ? VAR_3 : (VAR_2->sector + (VAR_2->size >> 9) - 1) >> (VAR_0-9);

 FUNC_0(VAR_1, VAR_3 <= VAR_4);
 FUNC_0(VAR_1, FUNC_2(&VAR_1->local_cnt) > 0);


 if (VAR_3 != VAR_4)
  return 0;

 return FUNC_1(VAR_1, VAR_3, 1);
}
