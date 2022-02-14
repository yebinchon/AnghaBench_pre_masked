
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vap ;
struct ifnet {int iv_debug; struct ifnet* iv_ifp; struct ifnet* iv_ic; int if_xname; } ;
struct ieee80211vap {int iv_debug; struct ieee80211vap* iv_ifp; struct ieee80211vap* iv_ic; int if_xname; } ;
struct ieee80211com {int iv_debug; struct ieee80211com* iv_ifp; struct ieee80211com* iv_ic; int if_xname; } ;
typedef int ifp ;
typedef int ic ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int) ;
 scalar_t__ FUNC_7 (struct ifnet*,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_9(void)
{
 struct ieee80211com VAR_4;
 struct ieee80211vap VAR_5;
 struct ifnet VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 FUNC_0(&VAR_4);


 FUNC_8(VAR_6.if_xname, "test_ccmp", sizeof(VAR_6.if_xname));
 VAR_5.iv_ic = &VAR_4;
 VAR_5.iv_ifp = &VAR_6;
 if (VAR_1)
  VAR_5.iv_debug = VAR_0;
 FUNC_2(&VAR_5);

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_3); VAR_7++)
  if (VAR_2 & (1<<VAR_7)) {
   VAR_9++;
   VAR_8 += FUNC_7(&VAR_5, &VAR_3[VAR_7]);
  }
 FUNC_6("%u of %u 802.11i TKIP test vectors passed\n", VAR_8, VAR_9);

 FUNC_3(&VAR_5);
 FUNC_1(&VAR_4);

 return (VAR_8 == VAR_9 ? 0 : -1);
}
