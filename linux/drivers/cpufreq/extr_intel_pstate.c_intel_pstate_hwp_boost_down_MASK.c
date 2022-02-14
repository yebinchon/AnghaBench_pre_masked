
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time; } ;
struct cpudata {TYPE_1__ sample; scalar_t__ last_update; scalar_t__ hwp_boost_min; int hwp_req_cached; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct cpudata *VAR_2)
{
 if (VAR_2->hwp_boost_min) {
  bool VAR_3;


  VAR_3 = FUNC_0(VAR_2->sample.time, VAR_2->last_update +
           VAR_1);
  if (VAR_3) {
   FUNC_1(VAR_0, VAR_2->hwp_req_cached);
   VAR_2->hwp_boost_min = 0;
  }
 }
 VAR_2->last_update = VAR_2->sample.time;
}
