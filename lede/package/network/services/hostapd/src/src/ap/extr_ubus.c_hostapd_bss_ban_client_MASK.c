
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int key; } ;
struct ubus_banned_client {TYPE_2__ avl; int addr; } ;
struct TYPE_3__ {int banned; } ;
struct hostapd_data {TYPE_1__ ubus; } ;


 int VAR_0 ;
 struct ubus_banned_client* FUNC_0 (int *,int *,struct ubus_banned_client*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int (*) (struct ubus_banned_client*,struct hostapd_data*),struct ubus_banned_client*,struct hostapd_data*) ;
 int FUNC_3 (int ,int,int (*) (struct ubus_banned_client*,struct hostapd_data*),struct ubus_banned_client*,struct hostapd_data*) ;
 int FUNC_4 (struct ubus_banned_client*,struct hostapd_data*) ;
 int FUNC_5 (int ,int *,int) ;
 struct ubus_banned_client* FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct hostapd_data *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct ubus_banned_client *VAR_4;

 if (VAR_3 < 0)
  VAR_3 = 0;

 VAR_4 = FUNC_0(&VAR_1->ubus.banned, VAR_2, VAR_4, VAR_0);
 if (!VAR_4) {
  if (!VAR_3)
   return;

  VAR_4 = FUNC_6(sizeof(*VAR_4));
  FUNC_5(VAR_4->addr, VAR_2, sizeof(VAR_4->addr));
  VAR_4->avl.key = VAR_4->addr;
  FUNC_1(&VAR_1->ubus.banned, &VAR_4->avl);
 } else {
  FUNC_2(FUNC_4, VAR_4, VAR_1);
  if (!VAR_3) {
   FUNC_4(VAR_4, VAR_1);
   return;
  }
 }

 FUNC_3(0, VAR_3 * 1000, FUNC_4, VAR_4, VAR_1);
}
