
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wlan_iface {scalar_t__ nchannels; scalar_t__ chanlist; scalar_t__ desired_channel; int wname; } ;
struct ieee80211_channel {int dummy; } ;
typedef int chan ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_channel*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct wlan_iface*) ;
 scalar_t__ FUNC_2 (int ,int ,int*,struct ieee80211_channel*,size_t*,int) ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0;
 size_t VAR_4 = sizeof(struct ieee80211_channel);
 struct ieee80211_channel VAR_5;

 if (FUNC_1(VAR_1) < 0)
  return (-1);

 if (VAR_2 > VAR_1->nchannels)
  return (-1);

 FUNC_0(&VAR_5, VAR_1->chanlist + VAR_2 - 1, sizeof(VAR_5));
 if (FUNC_2(VAR_1->wname, VAR_0, &VAR_3, &VAR_5,
     &VAR_4, 1) < 0)
  return (-1);

 VAR_1->desired_channel = VAR_2;

 return (0);
}
