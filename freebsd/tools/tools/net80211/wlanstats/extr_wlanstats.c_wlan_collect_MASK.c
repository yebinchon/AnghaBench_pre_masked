
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int i_len; int ifr_name; void* ifr_data; int i_name; void* i_data; int i_type; } ;
struct TYPE_6__ {int macaddr; } ;
struct TYPE_7__ {TYPE_1__ is_u; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct wlanstatfoo_p {TYPE_5__ ifr; int s; scalar_t__ mac; TYPE_5__ ireq; TYPE_3__ u_info; } ;
struct TYPE_9__ {int macaddr; } ;
struct ieee80211req_sta_stats {TYPE_4__ is_u; } ;
struct ieee80211_stats {int dummy; } ;
struct ether_addr {int dummy; } ;
typedef void* caddr_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct ether_addr const*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_5__*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct wlanstatfoo_p *VAR_4,
 struct ieee80211_stats *VAR_5, struct ieee80211req_sta_stats *VAR_6)
{

 FUNC_0(VAR_4->u_info.info.is_u.macaddr, VAR_4->mac);
 VAR_4->ireq.i_type = VAR_0;
 VAR_4->ireq.i_data = (caddr_t) &VAR_4->u_info;
 VAR_4->ireq.i_len = sizeof(VAR_4->u_info);
 if (FUNC_3(VAR_4->s, VAR_2, &VAR_4->ireq) < 0) {
  FUNC_4("%s:%s (IEEE80211_IOC_STA_INFO)", VAR_4->ireq.i_name,
      FUNC_2((const struct ether_addr*) VAR_4->mac));
 }

 FUNC_0(VAR_6->is_u.macaddr, VAR_4->mac);
 VAR_4->ireq.i_type = VAR_1;
 VAR_4->ireq.i_data = (caddr_t) VAR_6;
 VAR_4->ireq.i_len = sizeof(*VAR_6);
 if (FUNC_3(VAR_4->s, VAR_2, &VAR_4->ireq) < 0)
  FUNC_4("%s:%s (IEEE80211_IOC_STA_STATS)", VAR_4->ireq.i_name,
      FUNC_2((const struct ether_addr*) VAR_4->mac));

 VAR_4->ifr.ifr_data = (caddr_t) VAR_5;
 if (FUNC_3(VAR_4->s, VAR_3, &VAR_4->ifr) < 0)
  FUNC_1(1, "%s (SIOCG80211STATS)", VAR_4->ifr.ifr_name);
}
