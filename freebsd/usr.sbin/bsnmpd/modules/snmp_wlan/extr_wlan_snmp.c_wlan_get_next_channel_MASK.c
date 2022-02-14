
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint ;
struct wlan_iface {scalar_t__ status; scalar_t__ nchannels; struct ieee80211_channel* chanlist; } ;
struct ieee80211_channel {int dummy; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct asn_oid const*,scalar_t__,char*,scalar_t__*) ;
 struct wlan_iface* FUNC_1 (char*) ;
 struct wlan_iface* FUNC_2 () ;
 struct wlan_iface* FUNC_3 (struct wlan_iface*) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_4(const struct asn_oid *VAR_2, uint VAR_3,
    struct wlan_iface **VAR_4)
{
 uint32_t VAR_5;
 char VAR_6[VAR_0];

 if (VAR_2->len - VAR_3 == 0) {
  for (*VAR_4 = FUNC_2(); *VAR_4 != ((void*)0);
      *VAR_4 = FUNC_3(*VAR_4)) {
   if ((*VAR_4)->status != VAR_1)
    continue;
   if ((*VAR_4)->nchannels != 0 && (*VAR_4)->chanlist != ((void*)0))
    return ((*VAR_4)->chanlist);
  }
  return (((void*)0));
 }

 if (FUNC_0(VAR_2, VAR_3, VAR_6, &VAR_5) < 0)
  return (((void*)0));

 if ((*VAR_4 = FUNC_1(VAR_6)) == ((void*)0))
  return (((void*)0));

 if (VAR_5 < (*VAR_4)->nchannels)
  return ((*VAR_4)->chanlist + VAR_5);

 while ((*VAR_4 = FUNC_3(*VAR_4)) != ((void*)0))
  if ((*VAR_4)->status == VAR_1)
   if ((*VAR_4)->nchannels != 0 && (*VAR_4)->chanlist != ((void*)0))
    return ((*VAR_4)->chanlist);

 return (((void*)0));
}
