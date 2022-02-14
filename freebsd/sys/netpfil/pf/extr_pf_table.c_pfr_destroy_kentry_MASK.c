
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_kentry {int pfrke_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,struct pfr_kentry*) ;

__attribute__((used)) static void
FUNC_2(struct pfr_kentry *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++)
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++)
   FUNC_0(&VAR_3->pfrke_counters,
       VAR_4, VAR_5);

 FUNC_1(VAR_2, VAR_3);
}
