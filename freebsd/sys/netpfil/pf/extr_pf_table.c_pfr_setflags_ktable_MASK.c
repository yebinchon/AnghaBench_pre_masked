
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {int pfrkt_flags; struct pfr_ktable* pfrkt_shadow; scalar_t__ pfrkt_cnt; struct pfr_ktable* pfrkt_root; int * pfrkt_refcnt; } ;
struct pfr_kentryworkq {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,struct pfr_ktable*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct pfr_ktable*,int) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*,int *,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct pfr_ktable*,struct pfr_kentryworkq*) ;

__attribute__((used)) static void
FUNC_5(struct pfr_ktable *VAR_11, int VAR_12)
{
 struct pfr_kentryworkq VAR_13;

 FUNC_0();

 if (!(VAR_12 & VAR_5) &&
     !(VAR_12 & VAR_4) &&
     !(VAR_12 & VAR_3))
  VAR_12 &= ~VAR_1;
 if (!(VAR_12 & VAR_1))
  VAR_12 &= ~VAR_7;
 if (!(VAR_12 & VAR_6)) {
  FUNC_1(VAR_10, &VAR_9, VAR_11);
  if (VAR_11->pfrkt_root != ((void*)0))
   if (!--VAR_11->pfrkt_root->pfrkt_refcnt[VAR_0])
    FUNC_5(VAR_11->pfrkt_root,
        VAR_11->pfrkt_root->pfrkt_flags &
     ~VAR_4);
  FUNC_2(VAR_11, 1);
  VAR_8--;
  return;
 }
 if (!(VAR_12 & VAR_1) && VAR_11->pfrkt_cnt) {
  FUNC_3(VAR_11, &VAR_13, ((void*)0), 0);
  FUNC_4(VAR_11, &VAR_13);
 }
 if (!(VAR_12 & VAR_2) && VAR_11->pfrkt_shadow != ((void*)0)) {
  FUNC_2(VAR_11->pfrkt_shadow, 1);
  VAR_11->pfrkt_shadow = ((void*)0);
 }
 VAR_11->pfrkt_flags = VAR_12;
}
