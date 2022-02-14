
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {scalar_t__ pfrke_not; } ;
struct pfr_addr {scalar_t__ pfra_not; void* pfra_fback; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pfr_kentryworkq*) ;
 int FUNC_3 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 struct pfr_kentry* FUNC_5 (struct pfr_addr*) ;
 struct pfr_ktable* FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct pfr_kentryworkq*) ;
 int FUNC_8 (struct pfr_kentry*) ;
 int FUNC_9 (struct pfr_ktable*,int ) ;
 int FUNC_10 (struct pfr_ktable*,struct pfr_kentryworkq*,long) ;
 struct pfr_kentry* FUNC_11 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_12 (struct pfr_table*) ;
 int FUNC_13 (struct pfr_addr*,int) ;
 scalar_t__ FUNC_14 (struct pfr_ktable*,struct pfr_kentry*) ;
 scalar_t__ FUNC_15 (struct pfr_addr*) ;
 scalar_t__ FUNC_16 (struct pfr_table*,int ,int) ;
 int VAR_14 ;
 int FUNC_17 (int) ;
 long VAR_15 ;

int
FUNC_18(struct pfr_table *VAR_16, struct pfr_addr *VAR_17, int VAR_18,
    int *VAR_19, int VAR_20)
{
 struct pfr_ktable *VAR_21, *VAR_22;
 struct pfr_kentryworkq VAR_23;
 struct pfr_kentry *VAR_24, *VAR_25;
 struct pfr_addr *VAR_26;
 int VAR_27, VAR_28, VAR_29 = 0;
 long VAR_30 = VAR_15;

 FUNC_1();

 FUNC_0(VAR_20, VAR_8 | VAR_9);
 if (FUNC_16(VAR_16, 0, VAR_20 & VAR_10))
  return (VAR_0);
 VAR_21 = FUNC_12(VAR_16);
 if (VAR_21 == ((void*)0) || !(VAR_21->pfrkt_flags & VAR_11))
  return (VAR_3);
 if (VAR_21->pfrkt_flags & VAR_12)
  return (VAR_2);
 VAR_22 = FUNC_6(&VAR_13, 0, 0);
 if (VAR_22 == ((void*)0))
  return (VAR_1);
 FUNC_2(&VAR_23);
 for (VAR_27 = 0, VAR_26 = VAR_17; VAR_27 < VAR_18; VAR_27++, VAR_26++) {
  if (FUNC_15(VAR_26))
   FUNC_17(VAR_0);
  VAR_24 = FUNC_11(VAR_21, VAR_26, 1);
  VAR_25 = FUNC_11(VAR_22, VAR_26, 1);
  if (VAR_20 & VAR_9) {
   if (VAR_25 != ((void*)0))
    VAR_26->pfra_fback = VAR_6;
   else if (VAR_24 == ((void*)0))
    VAR_26->pfra_fback = VAR_4;
   else if (VAR_24->pfrke_not != VAR_26->pfra_not)
    VAR_26->pfra_fback = VAR_5;
   else
    VAR_26->pfra_fback = VAR_7;
  }
  if (VAR_24 == ((void*)0) && VAR_25 == ((void*)0)) {
   VAR_24 = FUNC_5(VAR_26);
   if (VAR_24 == ((void*)0))
    FUNC_17(VAR_1);
   if (FUNC_14(VAR_22, VAR_24)) {
    FUNC_8(VAR_24);
    VAR_26->pfra_fback = VAR_7;
   } else {
    FUNC_3(&VAR_23, VAR_24, VAR_14);
    VAR_29++;
   }
  }
 }
 FUNC_4(VAR_22, &VAR_23);
 if (!(VAR_20 & VAR_8))
  FUNC_10(VAR_21, &VAR_23, VAR_30);
 else
  FUNC_7(&VAR_23);
 if (VAR_19 != ((void*)0))
  *VAR_19 = VAR_29;
 FUNC_9(VAR_22, 0);
 return (0);
_bad:
 FUNC_4(VAR_22, &VAR_23);
 FUNC_7(&VAR_23);
 if (VAR_20 & VAR_9)
  FUNC_13(VAR_17, VAR_18);
 FUNC_9(VAR_22, 0);
 return (VAR_28);
}
