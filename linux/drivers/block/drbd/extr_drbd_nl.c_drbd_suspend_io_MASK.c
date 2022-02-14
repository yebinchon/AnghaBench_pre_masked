
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int ap_bio_cnt; int misc_wait; int suspend_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct drbd_device *VAR_0)
{
 FUNC_0(&VAR_0->suspend_cnt);
 if (FUNC_2(VAR_0))
  return;
 FUNC_3(VAR_0->misc_wait, !FUNC_1(&VAR_0->ap_bio_cnt));
}
