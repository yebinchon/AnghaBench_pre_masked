
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {long pfrkt_tzero; int pfrkt_nomatch; int pfrkt_match; int ** pfrkt_bytes; int ** pfrkt_packets; } ;
struct pfr_kentryworkq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pfr_kentryworkq*,long,int ) ;
 int FUNC_2 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct pfr_ktable *VAR_2, long VAR_3, int VAR_4)
{
 struct pfr_kentryworkq VAR_5;
 int VAR_6, VAR_7;

 if (VAR_4) {
  FUNC_2(VAR_2, &VAR_5, ((void*)0), 0);
  FUNC_1(&VAR_5, VAR_3, 0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 ++) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++) {
   FUNC_0(VAR_2->pfrkt_packets[VAR_6][VAR_7]);
   FUNC_0(VAR_2->pfrkt_bytes[VAR_6][VAR_7]);
  }
 }
 FUNC_0(VAR_2->pfrkt_match);
 FUNC_0(VAR_2->pfrkt_nomatch);
 VAR_2->pfrkt_tzero = VAR_3;
}
