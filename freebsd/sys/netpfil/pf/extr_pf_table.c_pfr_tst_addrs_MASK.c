
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentry {scalar_t__ pfrke_not; } ;
struct pfr_addr {int pfra_fback; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct pfr_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (struct pfr_addr*,struct pfr_kentry*) ;
 struct pfr_kentry* FUNC_4 (struct pfr_ktable*,struct pfr_addr*,int ) ;
 struct pfr_ktable* FUNC_5 (struct pfr_table*) ;
 scalar_t__ FUNC_6 (struct pfr_addr*) ;
 scalar_t__ FUNC_7 (struct pfr_table*,int ,int ) ;

int
FUNC_8(struct pfr_table *VAR_7, struct pfr_addr *VAR_8, int VAR_9,
 int *VAR_10, int VAR_11)
{
 struct pfr_ktable *VAR_12;
 struct pfr_kentry *VAR_13;
 struct pfr_addr *VAR_14;
 int VAR_15, VAR_16 = 0;

 FUNC_2();

 FUNC_0(VAR_11, VAR_5);
 if (FUNC_7(VAR_7, 0, 0))
  return (VAR_0);
 VAR_12 = FUNC_5(VAR_7);
 if (VAR_12 == ((void*)0) || !(VAR_12->pfrkt_flags & VAR_6))
  return (VAR_1);

 for (VAR_15 = 0, VAR_14 = VAR_8; VAR_15 < VAR_9; VAR_15++, VAR_14++) {
  if (FUNC_6(VAR_14))
   return (VAR_0);
  if (FUNC_1(VAR_14))
   return (VAR_0);
  VAR_13 = FUNC_4(VAR_12, VAR_14, 0);
  if (VAR_11 & VAR_5)
   FUNC_3(VAR_14, VAR_13);
  VAR_14->pfra_fback = (VAR_13 == ((void*)0)) ? VAR_3 :
      (VAR_13->pfrke_not ? VAR_4 : VAR_2);
  if (VAR_13 != ((void*)0) && !VAR_13->pfrke_not)
   VAR_16++;
 }
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_16;
 return (0);
}
