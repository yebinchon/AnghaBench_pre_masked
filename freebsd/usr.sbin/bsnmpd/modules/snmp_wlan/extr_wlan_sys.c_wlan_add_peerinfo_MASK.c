
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_peer {int peer_id; int local_id; int state; int capinfo; int txpower; int rxseqs; int txseqs; int idle; int rssi; int txrate; int fflags; int frequency; int vlan; int associd; } ;
struct ieee80211req_sta_info {int isi_peerid; int isi_localid; int isi_state; int isi_capinfo; int isi_txpower; int * isi_rxseqs; int * isi_txseqs; int isi_inact; int isi_rssi; int isi_txrate; int isi_flags; int isi_freq; int isi_vlan; int isi_associd; int isi_macaddr; } ;


 int FUNC_0 (int ) ;
 struct wlan_peer* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct wlan_peer *
FUNC_4(const struct ieee80211req_sta_info *VAR_0)
{
 struct wlan_peer *VAR_1;

 if ((VAR_1 = FUNC_1(VAR_0->isi_macaddr))== ((void*)0))
  return (((void*)0));

 VAR_1->associd = FUNC_0(VAR_0->isi_associd);
 VAR_1->vlan = VAR_0->isi_vlan;
 VAR_1->frequency = VAR_0->isi_freq;
 VAR_1->fflags = VAR_0->isi_flags;
 VAR_1->txrate = VAR_0->isi_txrate;
 VAR_1->rssi = VAR_0->isi_rssi;
 VAR_1->idle = VAR_0->isi_inact;
 VAR_1->txseqs = VAR_0->isi_txseqs[0];
 VAR_1->rxseqs = VAR_0->isi_rxseqs[0];
 VAR_1->txpower = VAR_0->isi_txpower;
 VAR_1->capinfo = FUNC_2(VAR_0->isi_capinfo);
 VAR_1->state = FUNC_3(VAR_0->isi_state);
 VAR_1->local_id = VAR_0->isi_localid;
 VAR_1->peer_id = VAR_0->isi_peerid;

 return (VAR_1);
}
