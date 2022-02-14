
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct wlan_iface {size_t nchannels; size_t desired_channel; TYPE_1__* chanlist; int wname; } ;
struct ieee80211_channel {scalar_t__ ic_ieee; scalar_t__ ic_flags; } ;
typedef int chan ;
struct TYPE_2__ {scalar_t__ ic_ieee; scalar_t__ ic_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_channel*,int ,int) ;
 scalar_t__ FUNC_1 (struct wlan_iface*) ;
 scalar_t__ FUNC_2 (int ,int ,int*,struct ieee80211_channel*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_1)
{
 uint32_t VAR_2 = 0;
 int VAR_3 = 0;
 size_t VAR_4 = sizeof(struct ieee80211_channel);
 struct ieee80211_channel VAR_5;

 if (FUNC_1(VAR_1) < 0)
  return (-1);

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_2(VAR_1->wname, VAR_0, &VAR_3, &VAR_5,
     &VAR_4, 0) < 0)
  return (-1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nchannels; VAR_2++)
  if (VAR_5.ic_ieee == VAR_1->chanlist[VAR_2].ic_ieee &&
      VAR_5.ic_flags == VAR_1->chanlist[VAR_2].ic_flags) {
   VAR_1->desired_channel = VAR_2 + 1;
   break;
  }

 return (0);
}
