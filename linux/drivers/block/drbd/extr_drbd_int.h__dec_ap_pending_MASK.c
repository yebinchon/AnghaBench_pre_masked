
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int misc_wait; int ap_pending_cnt; } ;


 int FUNC_0 (int ,char const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct drbd_device *VAR_1, const char *VAR_2, int VAR_3)
{
 if (FUNC_1(&VAR_1->ap_pending_cnt))
  FUNC_2(&VAR_1->misc_wait);
 FUNC_0(VAR_0, VAR_2, VAR_3);
}
