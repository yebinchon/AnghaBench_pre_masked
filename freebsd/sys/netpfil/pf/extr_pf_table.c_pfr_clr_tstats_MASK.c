
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktableworkq {int dummy; } ;
struct pfr_ktable {int pfrkt_t; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pfr_ktable* FUNC_1 (int ,int *,struct pfr_ktable*) ;
 int FUNC_2 (struct pfr_ktableworkq*) ;
 int FUNC_3 (struct pfr_ktableworkq*,struct pfr_ktable*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct pfr_table*,int *,int) ;
 int FUNC_5 (struct pfr_ktableworkq*,long,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int VAR_5 ;
 long VAR_6 ;

int
FUNC_7(struct pfr_table *VAR_7, int VAR_8, int *VAR_9, int VAR_10)
{
 struct pfr_ktableworkq VAR_11;
 struct pfr_ktable *VAR_12, VAR_13;
 int VAR_14, VAR_15 = 0;
 long VAR_16 = VAR_6;

 FUNC_0(VAR_10, VAR_2 | VAR_1);
 FUNC_2(&VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  FUNC_4(VAR_7 + VAR_14, &VAR_13.pfrkt_t, sizeof(VAR_13.pfrkt_t));
  if (FUNC_6(&VAR_13.pfrkt_t, 0, 0))
   return (VAR_0);
  VAR_12 = FUNC_1(VAR_4, &VAR_3, &VAR_13);
  if (VAR_12 != ((void*)0)) {
   FUNC_3(&VAR_11, VAR_12, VAR_5);
   VAR_15++;
  }
 }
 if (!(VAR_10 & VAR_2))
  FUNC_5(&VAR_11, VAR_16, VAR_10 & VAR_1);
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_15;
 return (0);
}
