
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int shareable_bits; scalar_t__ min_cbm_bits; int cbm_len; } ;
struct rdt_resource {int name; TYPE_2__ cache; } ;
struct rdt_domain {int have_new_ctrl; int new_ctrl; int* ctrl_val; int id; TYPE_1__* plr; } ;
typedef enum rdtgrp_mode { ____Placeholder_rdtgrp_mode } rdtgrp_mode ;
struct TYPE_3__ {int cbm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long*,int ) ;
 int FUNC_2 (int,struct rdt_resource*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rdt_resource*,struct rdt_domain*,struct rdt_resource**,struct rdt_domain**) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rdt_domain *VAR_3, struct rdt_resource *VAR_4,
     u32 VAR_5)
{
 struct rdt_resource *VAR_6 = ((void*)0);
 struct rdt_domain *VAR_7 = ((void*)0);
 u32 VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10;
 enum rdtgrp_mode VAR_11;
 u32 VAR_12, *VAR_13;
 int VAR_14;

 FUNC_5(VAR_4, VAR_3, &VAR_6, &VAR_7);
 VAR_3->have_new_ctrl = 0;
 VAR_3->new_ctrl = VAR_4->cache.shareable_bits;
 VAR_8 = VAR_4->cache.shareable_bits;
 VAR_13 = VAR_3->ctrl_val;
 for (VAR_14 = 0; VAR_14 < FUNC_4(); VAR_14++, VAR_13++) {
  if (FUNC_3(VAR_14) && VAR_14 != VAR_5) {
   VAR_11 = FUNC_7(VAR_14);
   if (VAR_11 == VAR_1)





    continue;





   if (VAR_7)
    VAR_12 = VAR_7->ctrl_val[VAR_14];
   else
    VAR_12 = 0;
   VAR_8 |= *VAR_13 | VAR_12;
   if (VAR_11 == VAR_2)
    VAR_3->new_ctrl |= *VAR_13 | VAR_12;
  }
 }
 if (VAR_3->plr && VAR_3->plr->cbm > 0)
  VAR_8 |= VAR_3->plr->cbm;
 VAR_9 = VAR_8 ^ (FUNC_0(VAR_4->cache.cbm_len) - 1);
 VAR_9 &= FUNC_0(VAR_4->cache.cbm_len) - 1;
 VAR_3->new_ctrl |= VAR_9;




 VAR_3->new_ctrl = FUNC_2(VAR_3->new_ctrl, VAR_4);




 VAR_10 = VAR_3->new_ctrl;
 if (FUNC_1(&VAR_10, VAR_4->cache.cbm_len) < VAR_4->cache.min_cbm_bits) {
  FUNC_6("No space on %s:%d\n", VAR_4->name, VAR_3->id);
  return -VAR_0;
 }
 VAR_3->have_new_ctrl = 1;

 return 0;
}
