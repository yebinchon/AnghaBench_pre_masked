
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int flags; int ap_bio_cnt; int suspend_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (struct drbd_device*) ;
 scalar_t__ FUNC_3 (struct drbd_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_5(struct drbd_device *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1))
  return 0;
 if (FUNC_0(&VAR_1->suspend_cnt))
  return 0;






 if (!FUNC_2(VAR_1))
  return 0;



 if (FUNC_0(&VAR_1->ap_bio_cnt) > VAR_2)
  return 0;
 if (FUNC_4(VAR_0, &VAR_1->flags))
  return 0;
 return 1;
}
