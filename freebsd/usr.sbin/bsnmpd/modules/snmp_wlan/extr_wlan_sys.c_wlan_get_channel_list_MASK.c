
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct wlan_iface {size_t nchannels; struct ieee80211_channel* chanlist; int wname; } ;
struct ieee80211req_chanlist {size_t ic_nchans; int ic_channels; struct ieee80211_channel* ic_chans; } ;
struct ieee80211req_chaninfo {size_t ic_nchans; int ic_channels; struct ieee80211_channel* ic_chans; } ;
struct ieee80211_channel {int ic_ieee; } ;
typedef int active ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211req_chanlist*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (struct ieee80211_channel*,struct ieee80211_channel const*,int) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel*,size_t) ;
 scalar_t__ FUNC_5 (int ,int ,int*,struct ieee80211req_chanlist*,size_t*,int ) ;

int
FUNC_6(struct wlan_iface *VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5, VAR_6;
 size_t VAR_7;
 struct ieee80211req_chaninfo *VAR_8;
 struct ieee80211req_chanlist VAR_9;
 const struct ieee80211_channel *VAR_10;

 VAR_7 = sizeof(struct ieee80211req_chaninfo) +
     sizeof(struct ieee80211_channel) * VAR_2;
 VAR_8 = (struct ieee80211req_chaninfo *)FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0))
  return (-1);

 if (FUNC_5(VAR_3->wname, VAR_0, &VAR_4, VAR_8,
     &VAR_7, 0) < 0)
  return (-1);

 VAR_7 = sizeof(VAR_9);
 if (FUNC_5(VAR_3->wname, VAR_1, &VAR_4, &VAR_9,
     &VAR_7, 0) < 0)
  goto error;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_8->ic_nchans; VAR_5++) {
  VAR_10 = &VAR_8->ic_chans[VAR_5];
  if (!FUNC_1(VAR_9.ic_channels, VAR_10->ic_ieee))
    continue;
  VAR_6++;
 }
 VAR_3->chanlist = (struct ieee80211_channel *)FUNC_4(VAR_3->chanlist,
     VAR_6 * sizeof(*VAR_10));
 if (VAR_3->chanlist == ((void*)0))
  goto error;
 VAR_3->nchannels = VAR_6;
 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_8->ic_nchans; VAR_5++) {
  VAR_10 = &VAR_8->ic_chans[VAR_5];
  if (!FUNC_1(VAR_9.ic_channels, VAR_10->ic_ieee))
    continue;
  FUNC_3(VAR_3->chanlist + VAR_6, VAR_10, sizeof (*VAR_10));
  VAR_6++;
 }

 FUNC_0(VAR_8);
 return (0);
error:
 VAR_3->nchannels = 0;
 FUNC_0(VAR_8);
 return (-1);
}
