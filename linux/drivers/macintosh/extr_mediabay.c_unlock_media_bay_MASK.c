
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_bay_info {int lock; scalar_t__ user_lock; } ;
struct macio_dev {int dummy; } ;


 struct media_bay_info* FUNC_0 (struct macio_dev*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct macio_dev *VAR_0)
{
 struct media_bay_info* VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->user_lock) {
  VAR_1->user_lock = 0;
  FUNC_1(&VAR_1->lock);
 }
}
