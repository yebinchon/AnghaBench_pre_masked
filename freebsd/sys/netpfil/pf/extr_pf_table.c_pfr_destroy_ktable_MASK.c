
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_ktable {int pfrkt_nomatch; int pfrkt_match; int ** pfrkt_bytes; int ** pfrkt_packets; TYPE_1__* pfrkt_rs; struct pfr_ktable* pfrkt_shadow; int * pfrkt_ip6; int * pfrkt_ip4; } ;
struct pfr_kentryworkq {int dummy; } ;
struct TYPE_2__ {int tables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pfr_ktable*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 int FUNC_4 (struct pfr_kentryworkq*) ;
 int FUNC_5 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;
 int FUNC_6 (void**) ;

__attribute__((used)) static void
FUNC_7(struct pfr_ktable *VAR_3, int VAR_4)
{
 struct pfr_kentryworkq VAR_5;
 int VAR_6, VAR_7;

 if (VAR_4) {
  FUNC_5(VAR_3, &VAR_5, ((void*)0), 0);
  FUNC_3(VAR_3, &VAR_5);
  FUNC_4(&VAR_5);
 }
 if (VAR_3->pfrkt_ip4 != ((void*)0))
  FUNC_6((void **)&VAR_3->pfrkt_ip4);
 if (VAR_3->pfrkt_ip6 != ((void*)0))
  FUNC_6((void **)&VAR_3->pfrkt_ip6);
 if (VAR_3->pfrkt_shadow != ((void*)0))
  FUNC_7(VAR_3->pfrkt_shadow, VAR_4);
 if (VAR_3->pfrkt_rs != ((void*)0)) {
  VAR_3->pfrkt_rs->tables--;
  FUNC_2(VAR_3->pfrkt_rs);
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 ++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 ++) {
   FUNC_0(VAR_3->pfrkt_packets[VAR_6][VAR_7]);
   FUNC_0(VAR_3->pfrkt_bytes[VAR_6][VAR_7]);
  }
 }
 FUNC_0(VAR_3->pfrkt_match);
 FUNC_0(VAR_3->pfrkt_nomatch);

 FUNC_1(VAR_3, VAR_0);
}
