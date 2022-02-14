
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {int dummy; } ;
struct pfr_addr {int pfra_fback; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pfr_kentryworkq*) ;
 int FUNC_3 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 int FUNC_4 (struct pfr_kentryworkq*,int ,int ) ;
 struct pfr_kentry* FUNC_5 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_6 (struct pfr_table*) ;
 int FUNC_7 (struct pfr_addr*,int) ;
 scalar_t__ FUNC_8 (struct pfr_addr*) ;
 scalar_t__ FUNC_9 (struct pfr_table*,int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (int) ;

int
FUNC_11(struct pfr_table *VAR_8, struct pfr_addr *VAR_9, int VAR_10,
    int *VAR_11, int VAR_12)
{
 struct pfr_ktable *VAR_13;
 struct pfr_kentryworkq VAR_14;
 struct pfr_kentry *VAR_15;
 struct pfr_addr *VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 FUNC_1();

 FUNC_0(VAR_12, VAR_4 | VAR_5);
 if (FUNC_9(VAR_8, 0, 0))
  return (VAR_0);
 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 == ((void*)0) || !(VAR_13->pfrkt_flags & VAR_6))
  return (VAR_1);
 FUNC_2(&VAR_14);
 for (VAR_17 = 0, VAR_16 = VAR_9; VAR_17 < VAR_10; VAR_17++, VAR_16++) {
  if (FUNC_8(VAR_16))
   FUNC_10(VAR_0);
  VAR_15 = FUNC_5(VAR_13, VAR_16, 1);
  if (VAR_12 & VAR_5) {
   VAR_16->pfra_fback = (VAR_15 != ((void*)0)) ?
       VAR_2 : VAR_3;
  }
  if (VAR_15 != ((void*)0)) {
   FUNC_3(&VAR_14, VAR_15, VAR_7);
   VAR_19++;
  }
 }

 if (!(VAR_12 & VAR_4))
  FUNC_4(&VAR_14, 0, 0);
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_19;
 return (0);
_bad:
 if (VAR_12 & VAR_5)
  FUNC_7(VAR_9, VAR_10);
 return (VAR_18);
}
