
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int high_part; int low_part; } ;
struct TYPE_7__ {int low_part; int high_part; } ;
struct TYPE_6__ {int low_part; int high_part; } ;
struct TYPE_5__ {int low_part; int high_part; } ;
struct vm_context0_param {TYPE_4__ fault_default; TYPE_3__ pte_end; TYPE_2__ pte_start; TYPE_1__ pte_base; } ;
struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int VAR_10 ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_3(struct hubp *VAR_21,
  const struct vm_context0_param *VAR_22)
{
 struct dcn10_hubp *VAR_23 = FUNC_2(VAR_21);

 FUNC_0(VAR_1, 0,
   VAR_12, VAR_22->pte_base.high_part);
 FUNC_0(VAR_0, 0,
   VAR_11, VAR_22->pte_base.low_part);


 FUNC_0(VAR_5, 0,
   VAR_16, VAR_22->pte_start.high_part);
 FUNC_0(VAR_4, 0,
   VAR_15, VAR_22->pte_start.low_part);


 FUNC_0(VAR_3, 0,
   VAR_14, VAR_22->pte_end.high_part);
 FUNC_0(VAR_2, 0,
   VAR_13, VAR_22->pte_end.low_part);


 FUNC_1(VAR_7, 0,
   VAR_18, VAR_22->fault_default.high_part,
   VAR_19, VAR_20);
 FUNC_0(VAR_6, 0,
   VAR_17, VAR_22->fault_default.low_part);


 FUNC_1(VAR_8, 0,
   VAR_9, 1,
   VAR_10, 3);
}
