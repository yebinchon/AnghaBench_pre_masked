
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint ;
struct TYPE_2__ {struct ieee80211_roamparam* params; } ;
struct wlan_iface {scalar_t__ status; TYPE_1__ roamparams; } ;
struct ieee80211_roamparam {int dummy; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wlan_iface* FUNC_0 (char*) ;
 struct wlan_iface* FUNC_1 () ;
 struct wlan_iface* FUNC_2 (struct wlan_iface*) ;
 scalar_t__ FUNC_3 (struct asn_oid const*,scalar_t__,char*,int*) ;

__attribute__((used)) static struct ieee80211_roamparam *
FUNC_4(const struct asn_oid *VAR_3, uint VAR_4,
    struct wlan_iface **VAR_5, uint32_t *VAR_6)
{
 char VAR_7[VAR_1];

 if (VAR_3->len - VAR_4 == 0) {
  for (*VAR_5 = FUNC_1(); *VAR_5 != ((void*)0);
      *VAR_5 = FUNC_2(*VAR_5)) {
   if ((*VAR_5)->status != VAR_2)
    continue;
   *VAR_6 = 1;
   return ((*VAR_5)->roamparams.params);
  }
  return (((void*)0));
 }

 if (FUNC_3(VAR_3, VAR_4, VAR_7, VAR_6) < 0)
  return (((void*)0));

 if (*VAR_6 == 0 || (*VAR_5 = FUNC_0(VAR_7)) == ((void*)0))
  return (((void*)0));

 if (++(*VAR_6) <= VAR_0)
  return ((*VAR_5)->roamparams.params + *VAR_6 - 1);

 *VAR_6 = 1;
 while ((*VAR_5 = FUNC_2(*VAR_5)) != ((void*)0))
  if ((*VAR_5)->status == VAR_2)
   return ((*VAR_5)->roamparams.params);

 return (((void*)0));
}
