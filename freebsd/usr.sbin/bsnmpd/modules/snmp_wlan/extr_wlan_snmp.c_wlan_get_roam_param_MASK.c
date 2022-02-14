
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint ;
struct TYPE_2__ {scalar_t__ params; } ;
struct wlan_iface {TYPE_1__ roamparams; } ;
struct ieee80211_roamparam {int dummy; } ;
struct asn_oid {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct wlan_iface* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct asn_oid const*,int ,char*,scalar_t__*) ;

__attribute__((used)) static struct ieee80211_roamparam *
FUNC_2(const struct asn_oid *VAR_2, uint VAR_3, struct wlan_iface **VAR_4)
{
 uint32_t VAR_5;
 char VAR_6[VAR_1];

 if (FUNC_1(VAR_2, VAR_3, VAR_6, &VAR_5) < 0)
  return (((void*)0));

 if ((*VAR_4 = FUNC_0(VAR_6)) == ((void*)0))
  return (((void*)0));

 if (VAR_5 == 0 || VAR_5 > VAR_0)
  return (((void*)0));

 return ((*VAR_4)->roamparams.params + VAR_5 - 1);
}
