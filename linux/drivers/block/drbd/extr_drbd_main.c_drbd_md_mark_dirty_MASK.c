
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int md_sync_timer; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct drbd_device *VAR_3)
{
 if (!FUNC_1(VAR_1, &VAR_3->flags))
  FUNC_0(&VAR_3->md_sync_timer, VAR_2 + 5*VAR_0);
}
