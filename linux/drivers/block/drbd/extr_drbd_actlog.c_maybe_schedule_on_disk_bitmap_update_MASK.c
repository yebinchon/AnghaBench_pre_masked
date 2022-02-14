
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conn; } ;
struct drbd_device {int flags; TYPE_1__ state; } ;
struct drbd_connection {int agreed_pro_version; } ;
struct TYPE_4__ {struct drbd_connection* connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_device*,int ) ;
 TYPE_2__* FUNC_1 (struct drbd_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct drbd_device *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  struct drbd_connection *VAR_4 = FUNC_1(VAR_2)->connection;
  if (VAR_4->agreed_pro_version <= 95 ||
      FUNC_2(VAR_2->state.conn))
   FUNC_4(VAR_0, &VAR_2->flags);






 } else if (!FUNC_3(VAR_2))
  return;

 FUNC_0(VAR_2, VAR_1);
}
