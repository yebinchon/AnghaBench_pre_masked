
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vifi_t ;
typedef int u_long ;
struct sockaddr_in {int sin_len; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct mfc {scalar_t__* mfc_ttls; struct bw_meter* mfc_bw_meter; int mfc_parent; int mfc_pkt_cnt; int mfc_mcastgrp; int mfc_origin; } ;
struct bw_meter {struct bw_meter* bm_mfc_next; } ;
typedef int sin ;
typedef int bw_meter ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct bw_meter*,int*) ;
 int FUNC_4 (struct sockaddr*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(struct mfc *VAR_2, int VAR_3, int *VAR_4)
{
 struct sockaddr_in VAR_5;
 struct sockaddr *VAR_6 = (struct sockaddr *)&VAR_5;
 struct bw_meter VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10;
 vifi_t VAR_11;

 VAR_9 = 0;
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sin_len = sizeof(VAR_5);
 VAR_5.sin_family = VAR_0;

 if (! *VAR_4) {
  FUNC_9("multicast-forwarding-entry");
  FUNC_7("\n{T:IPv4 Multicast Forwarding Table}\n"
      " {T:Origin}          {T:Group}            "
      " {T:Packets In-Vif}  {T:Out-Vifs:Ttls}\n");
  *VAR_4 = 1;
 }

 FUNC_1(&VAR_5.sin_addr, &VAR_2->mfc_origin, sizeof(VAR_5.sin_addr));
 FUNC_7(" {:origin-address/%-15.15s}", FUNC_4(VAR_6, VAR_1));
 FUNC_1(&VAR_5.sin_addr, &VAR_2->mfc_mcastgrp, sizeof(VAR_5.sin_addr));
 FUNC_7(" {:group-address/%-15.15s}",
     FUNC_4(VAR_6, VAR_1));
 FUNC_7(" {:sent-packets/%9lu}", VAR_2->mfc_pkt_cnt);
 FUNC_7("  {:parent/%3d}   ", VAR_2->mfc_parent);
 FUNC_9("vif-ttl");
 for (VAR_11 = 0; VAR_11 <= VAR_3; VAR_11++) {
  if (VAR_2->mfc_ttls[VAR_11] > 0) {
   FUNC_8("vif-ttl");
   FUNC_7(" {k:vif/%u}:{:ttl/%u}", VAR_11,
       VAR_2->mfc_ttls[VAR_11]);
   FUNC_5("vif-ttl");
  }
 }
 FUNC_6("vif-ttl");
 FUNC_7("\n");





 VAR_8 = VAR_2->mfc_bw_meter;
 while (VAR_8 != ((void*)0)) {
  VAR_10 = FUNC_0((u_long)VAR_8, (char *)&VAR_7,
      sizeof(VAR_7));
  if (VAR_10)
   break;
  FUNC_3(&VAR_7, &VAR_9);
  VAR_8 = VAR_7.bm_mfc_next;
 }
 if (VAR_4)
  FUNC_6("bandwidth-meter");
}
