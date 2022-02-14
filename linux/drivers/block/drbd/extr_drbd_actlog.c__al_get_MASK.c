
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lc_element {int dummy; } ;
struct drbd_device {int al_lock; int act_log; int al_wait; } ;
struct bm_extent {int flags; } ;


 int VAR_0 ;
 struct bm_extent* FUNC_0 (struct drbd_device*,unsigned int) ;
 struct lc_element* FUNC_1 (int ,unsigned int) ;
 struct lc_element* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct lc_element *FUNC_7(struct drbd_device *VAR_1, unsigned int VAR_2, bool VAR_3)
{
 struct lc_element *VAR_4;
 struct bm_extent *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_1->al_lock);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5) {
  VAR_6 = !FUNC_5(VAR_0, &VAR_5->flags);
  FUNC_4(&VAR_1->al_lock);
  if (VAR_6)
   FUNC_6(&VAR_1->al_wait);
  return ((void*)0);
 }
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_1->act_log, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_1->act_log, VAR_2);
 FUNC_4(&VAR_1->al_lock);
 return VAR_4;
}
