
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syncache_head {scalar_t__ sch_nextc; int sch_timer; } ;
struct syncache {size_t sc_rxmits; scalar_t__ sc_rxttime; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int ,void*) ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct syncache *VAR_6, struct syncache_head *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_6->sc_rxmits == 0)
  VAR_9 = VAR_3;
 else
  FUNC_0(VAR_9,
      VAR_3 * VAR_2[VAR_6->sc_rxmits],
      VAR_4, VAR_0);
 VAR_6->sc_rxttime = VAR_5 + VAR_9;
 VAR_6->sc_rxmits++;
 if (FUNC_1(VAR_6->sc_rxttime, VAR_7->sch_nextc)) {
  VAR_7->sch_nextc = VAR_6->sc_rxttime;
  if (VAR_8)
   FUNC_2(&VAR_7->sch_timer, VAR_7->sch_nextc - VAR_5,
       VAR_1, (void *)VAR_7);
 }
}
