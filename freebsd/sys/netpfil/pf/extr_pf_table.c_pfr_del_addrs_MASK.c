
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {int pfrke_mark; scalar_t__ pfrke_not; } ;
struct pfr_addr {scalar_t__ pfra_not; int pfra_fback; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pfr_kentryworkq*) ;
 int FUNC_3 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 struct pfr_kentry* FUNC_4 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_5 (struct pfr_table*) ;
 int FUNC_6 (struct pfr_ktable*) ;
 int FUNC_7 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 int FUNC_8 (struct pfr_addr*,int) ;
 scalar_t__ FUNC_9 (struct pfr_addr*) ;
 scalar_t__ FUNC_10 (struct pfr_table*,int ,int) ;
 int VAR_12 ;
 int FUNC_11 (int) ;

int
FUNC_12(struct pfr_table *VAR_13, struct pfr_addr *VAR_14, int VAR_15,
    int *VAR_16, int VAR_17)
{
 struct pfr_ktable *VAR_18;
 struct pfr_kentryworkq VAR_19;
 struct pfr_kentry *VAR_20;
 struct pfr_addr *VAR_21;
 int VAR_22, VAR_23, VAR_24 = 0, VAR_25 = 1;

 FUNC_1();

 FUNC_0(VAR_17, VAR_7 | VAR_8);
 if (FUNC_10(VAR_13, 0, VAR_17 & VAR_9))
  return (VAR_0);
 VAR_18 = FUNC_5(VAR_13);
 if (VAR_18 == ((void*)0) || !(VAR_18->pfrkt_flags & VAR_10))
  return (VAR_2);
 if (VAR_18->pfrkt_flags & VAR_11)
  return (VAR_1);
 for (VAR_22 = VAR_18->pfrkt_cnt; VAR_22 > 0; VAR_22 >>= 1)
  VAR_25++;
 if (VAR_15 > VAR_18->pfrkt_cnt/VAR_25) {

  FUNC_6(VAR_18);
 } else {

  for (VAR_22 = 0, VAR_21 = VAR_14; VAR_22 < VAR_15; VAR_22++, VAR_21++) {
   if (FUNC_9(VAR_21))
    return (VAR_0);
   VAR_20 = FUNC_4(VAR_18, VAR_21, 1);
   if (VAR_20 != ((void*)0))
    VAR_20->pfrke_mark = 0;
  }
 }
 FUNC_2(&VAR_19);
 for (VAR_22 = 0, VAR_21 = VAR_14; VAR_22 < VAR_15; VAR_22++, VAR_21++) {
  if (FUNC_9(VAR_21))
   FUNC_11(VAR_0);
  VAR_20 = FUNC_4(VAR_18, VAR_21, 1);
  if (VAR_17 & VAR_8) {
   if (VAR_20 == ((void*)0))
    VAR_21->pfra_fback = VAR_6;
   else if (VAR_20->pfrke_not != VAR_21->pfra_not)
    VAR_21->pfra_fback = VAR_3;
   else if (VAR_20->pfrke_mark)
    VAR_21->pfra_fback = VAR_5;
   else
    VAR_21->pfra_fback = VAR_4;
  }
  if (VAR_20 != ((void*)0) && VAR_20->pfrke_not == VAR_21->pfra_not &&
      !VAR_20->pfrke_mark) {
   VAR_20->pfrke_mark = 1;
   FUNC_3(&VAR_19, VAR_20, VAR_12);
   VAR_24++;
  }
 }
 if (!(VAR_17 & VAR_7))
  FUNC_7(VAR_18, &VAR_19);
 if (VAR_16 != ((void*)0))
  *VAR_16 = VAR_24;
 return (0);
_bad:
 if (VAR_17 & VAR_8)
  FUNC_8(VAR_14, VAR_15);
 return (VAR_23);
}
