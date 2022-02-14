
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlan_iface {int nchannels; struct ieee80211_channel* chanlist; int htcaps; int cryptocaps; int drivercaps; int wname; } ;
struct TYPE_2__ {int ic_nchans; int ic_chans; } ;
struct ieee80211_devcaps_req {TYPE_1__ dc_chaninfo; int dc_htcaps; int dc_cryptocaps; int dc_drivercaps; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlan_iface*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (struct ieee80211_channel*,int ,size_t) ;
 int FUNC_3 (struct ieee80211_devcaps_req*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int*,struct ieee80211_devcaps_req*,size_t*,int ) ;

int
FUNC_8(struct wlan_iface *VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3;
 struct ieee80211_devcaps_req VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(struct ieee80211_devcaps_req));
 VAR_3 = sizeof(struct ieee80211_devcaps_req);

 if (FUNC_7(VAR_1->wname, VAR_0, &VAR_2, &VAR_4,
     &VAR_3, 0) < 0)
  return (-1);

 VAR_1->drivercaps = FUNC_5(VAR_4.dc_drivercaps);
 VAR_1->cryptocaps = FUNC_4(VAR_4.dc_cryptocaps);
 VAR_1->htcaps = FUNC_6(VAR_4.dc_htcaps);

 FUNC_0(VAR_1);

 VAR_3 = VAR_4.dc_chaninfo.ic_nchans * sizeof(struct ieee80211_channel);
 VAR_1->chanlist = (struct ieee80211_channel *)FUNC_1(VAR_3);
 if (VAR_1->chanlist == ((void*)0))
  return (0);

 FUNC_2(VAR_1->chanlist, VAR_4.dc_chaninfo.ic_chans, VAR_3);
 VAR_1->nchannels = VAR_4.dc_chaninfo.ic_nchans;

 return (0);
}
