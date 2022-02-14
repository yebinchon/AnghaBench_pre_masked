
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {int quad_part; scalar_t__ low_part; scalar_t__ high_part; } ;
struct TYPE_8__ {scalar_t__ low_part; scalar_t__ high_part; } ;
struct TYPE_7__ {scalar_t__ low_part; scalar_t__ high_part; } ;
struct TYPE_6__ {scalar_t__ low_part; scalar_t__ high_part; } ;
struct vm_context0_param {TYPE_4__ pte_base; TYPE_3__ fault_default; TYPE_2__ pte_end; TYPE_1__ pte_start; } ;
struct dcn10_hubp {int dummy; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_10__ {int quad_part; } ;
typedef TYPE_5__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_1(struct dcn10_hubp *VAR_18,
  struct vm_context0_param *VAR_19,
  struct dce_hwseq *VAR_20)
{
 PHYSICAL_ADDRESS_LOC VAR_21;
 PHYSICAL_ADDRESS_LOC VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;

 FUNC_0(VAR_0, VAR_8, &VAR_23);
 FUNC_0(VAR_1, VAR_9, &VAR_24);

 FUNC_0(VAR_10,
   VAR_4, &VAR_19->pte_base.high_part);
 FUNC_0(VAR_11,
   VAR_5, &VAR_19->pte_base.low_part);

 FUNC_0(VAR_14,
   VAR_2, &VAR_19->pte_start.high_part);
 FUNC_0(VAR_15,
   VAR_3, &VAR_19->pte_start.low_part);

 FUNC_0(VAR_12,
   VAR_2, &VAR_19->pte_end.high_part);
 FUNC_0(VAR_13,
   VAR_3, &VAR_19->pte_end.low_part);

 FUNC_0(VAR_16,
   VAR_6, &VAR_19->fault_default.high_part);
 FUNC_0(VAR_17,
   VAR_7, &VAR_19->fault_default.low_part);







 VAR_21.quad_part = (uint64_t)VAR_23 << 24;
 VAR_22.quad_part = (uint64_t)VAR_24 << 24;
 VAR_19->pte_base.quad_part += VAR_21.quad_part;
 VAR_19->pte_base.quad_part -= VAR_22.quad_part;
}
