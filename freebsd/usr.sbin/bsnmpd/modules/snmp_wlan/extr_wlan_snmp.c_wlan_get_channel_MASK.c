
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint ;
struct wlan_iface {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct asn_oid {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct asn_oid const*,int ,char*,int *) ;
 struct ieee80211_channel* FUNC_1 (struct wlan_iface*,int ) ;
 struct wlan_iface* FUNC_2 (char*) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_3(const struct asn_oid *VAR_1, uint VAR_2, struct wlan_iface **VAR_3)
{
 uint32_t VAR_4;
 char VAR_5[VAR_0];

 if (FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_4) < 0)
  return (((void*)0));

 if ((*VAR_3 = FUNC_2(VAR_5)) == ((void*)0))
  return (((void*)0));

 return (FUNC_1(*VAR_3, VAR_4));
}
