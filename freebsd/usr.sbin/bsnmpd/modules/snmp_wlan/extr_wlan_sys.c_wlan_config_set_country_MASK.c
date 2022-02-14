
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct wlan_iface {int nchannels; char* country_code; int reg_domain; int state; int wname; int chanlist; } ;
struct TYPE_5__ {char* isocc; char location; int regdomain; } ;
struct TYPE_4__ {int ic_nchans; TYPE_3__* ic_chans; } ;
struct ieee80211_regdomain_req {TYPE_2__ rd; TYPE_1__ chaninfo; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_6__ {int ic_maxregpower; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_regdomain_req*) ;
 struct ieee80211_regdomain_req* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct ieee80211_regdomain_req*,int ,size_t) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct wlan_iface*,int) ;
 scalar_t__ FUNC_7 (struct wlan_iface*) ;
 scalar_t__ FUNC_8 (int ,int ,int*,struct ieee80211_regdomain_req*,size_t*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct wlan_iface *VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9;
 uint32_t VAR_10;
 size_t VAR_11 = 0;
 struct ieee80211_regdomain_req *VAR_12;

 if (FUNC_7(VAR_5) < 0)
  return (-1);

 if (VAR_5->nchannels == 0) {
  FUNC_5(VAR_2, "iface %s - set regdomain failed", VAR_5->wname);
  return (-1);
 }

 if (FUNC_8(VAR_5->wname, VAR_1, &VAR_9, 0,
     &VAR_11, 0) < 0)
  return (-1);

 VAR_12 = FUNC_2(FUNC_0(VAR_5->nchannels));
 if (VAR_12 == ((void*)0))
  return (-1);
 FUNC_4(VAR_12, 0, FUNC_0(VAR_5->nchannels));
 VAR_11 = FUNC_0(VAR_5->nchannels);


 VAR_12->rd.regdomain = FUNC_10(VAR_7);
 VAR_12->rd.isocc[0] = VAR_6[0];
 VAR_12->rd.isocc[1] = VAR_6[1];
 VAR_12->rd.location = VAR_6[2];


 VAR_12->chaninfo.ic_nchans = VAR_5->nchannels;
 FUNC_3(VAR_12->chaninfo.ic_chans, VAR_5->chanlist,
     VAR_5->nchannels * sizeof(struct ieee80211_channel));
 for (VAR_10 = 0; VAR_10 < VAR_5->nchannels; VAR_10++)
  VAR_12->chaninfo.ic_chans[VAR_10].ic_maxregpower = VAR_9;

 VAR_5->state = VAR_3;
 if (FUNC_6(VAR_5, 1) < 0 ||
     FUNC_8(VAR_5->wname, VAR_0, &VAR_8, VAR_12,
     &VAR_11, 1) < 0) {
  FUNC_1(VAR_12);
  return (-1);
 }

 VAR_5->state = VAR_4;
 (void)FUNC_6(VAR_5, 1);
 VAR_5->reg_domain = FUNC_9(VAR_12->rd.regdomain);
 VAR_5->country_code[0] = VAR_12->rd.isocc[0];
 VAR_5->country_code[1] = VAR_12->rd.isocc[1];
 VAR_5->country_code[2] = VAR_12->rd.location;
 FUNC_1(VAR_12);

 return (0);
}
