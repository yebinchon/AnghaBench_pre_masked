
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wlan_iface {scalar_t__ nchannels; struct ieee80211_channel* chanlist; } ;
struct ieee80211_channel {int dummy; } ;



__attribute__((used)) static struct ieee80211_channel *
FUNC_0(struct wlan_iface *VAR_0, uint32_t VAR_1)
{
 if (VAR_0->chanlist == ((void*)0) || VAR_1 > VAR_0->nchannels)
  return (((void*)0));

 return (VAR_0->chanlist + VAR_1 - 1);
}
