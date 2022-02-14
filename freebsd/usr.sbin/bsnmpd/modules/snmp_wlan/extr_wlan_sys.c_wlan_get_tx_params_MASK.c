
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int txparams; int wname; } ;
struct ieee80211_txparams_req {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int ) ;

int
FUNC_1(struct wlan_iface *VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3;





 VAR_3 = sizeof(struct ieee80211_txparams_req);
 if (FUNC_0(VAR_1->wname, VAR_0, &VAR_2,
     &VAR_1->txparams, &VAR_3, 0) < 0)
  return (-1);

 return (0);
}
