
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int total; int missed; } ;
struct latency_stat {int rqs; TYPE_1__ ps; } ;
struct iolatency_grp {int min_lat_nsec; scalar_t__ ssd; int stats; } ;


 int FUNC_0 (int *,int ) ;
 struct latency_stat* FUNC_1 (int ) ;
 int FUNC_2 (struct latency_stat*) ;

__attribute__((used)) static inline void FUNC_3(struct iolatency_grp *VAR_0,
         u64 VAR_1)
{
 struct latency_stat *VAR_2 = FUNC_1(VAR_0->stats);
 if (VAR_0->ssd) {
  if (VAR_1 >= VAR_0->min_lat_nsec)
   VAR_2->ps.missed++;
  VAR_2->ps.total++;
 } else
  FUNC_0(&VAR_2->rqs, VAR_1);
 FUNC_2(VAR_2);
}
