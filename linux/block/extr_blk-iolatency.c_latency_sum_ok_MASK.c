
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ mean; } ;
struct TYPE_3__ {scalar_t__ missed; int total; } ;
struct latency_stat {TYPE_2__ rqs; TYPE_1__ ps; } ;
struct iolatency_grp {scalar_t__ min_lat_nsec; scalar_t__ ssd; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long long) ;

__attribute__((used)) static inline bool FUNC_2(struct iolatency_grp *VAR_0,
      struct latency_stat *VAR_1)
{
 if (VAR_0->ssd) {
  u64 VAR_2 = FUNC_0(VAR_1->ps.total, 10);
  VAR_2 = FUNC_1(VAR_2, 1ULL);
  return VAR_1->ps.missed < VAR_2;
 }
 return VAR_1->rqs.mean <= VAR_0->min_lat_nsec;
}
