
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned long shareable_bits; int cbm_len; } ;
struct rdt_resource {TYPE_1__ cache; } ;
struct rdt_domain {unsigned long* ctrl_val; } ;
typedef enum rdtgrp_mode { ____Placeholder_rdtgrp_mode } rdtgrp_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long*,unsigned long*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct rdt_resource *VAR_2, struct rdt_domain *VAR_3,
        unsigned long VAR_4, int VAR_5, bool VAR_6)
{
 enum rdtgrp_mode VAR_7;
 unsigned long VAR_8;
 u32 *VAR_9;
 int VAR_10;


 if (!VAR_6) {
  VAR_8 = VAR_2->cache.shareable_bits;
  if (FUNC_0(&VAR_4, &VAR_8, VAR_2->cache.cbm_len))
   return 1;
 }


 VAR_9 = VAR_3->ctrl_val;
 for (VAR_10 = 0; VAR_10 < FUNC_2(); VAR_10++, VAR_9++) {
  VAR_8 = *VAR_9;
  VAR_7 = FUNC_3(VAR_10);
  if (FUNC_1(VAR_10) && VAR_10 != VAR_5 &&
      VAR_7 != VAR_1) {
   if (FUNC_0(&VAR_4, &VAR_8, VAR_2->cache.cbm_len)) {
    if (VAR_6) {
     if (VAR_7 == VAR_0)
      return 1;
     continue;
    }
    return 1;
   }
  }
 }

 return 0;
}
