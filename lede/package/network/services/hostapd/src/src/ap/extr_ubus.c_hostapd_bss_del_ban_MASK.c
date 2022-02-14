
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubus_banned_client {int avl; } ;
struct TYPE_2__ {int banned; } ;
struct hostapd_data {TYPE_1__ ubus; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ubus_banned_client*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1)
{
 struct ubus_banned_client *VAR_2 = VAR_0;
 struct hostapd_data *VAR_3 = VAR_1;

 FUNC_0(&VAR_3->ubus.banned, &VAR_2->avl);
 FUNC_1(VAR_2);
}
