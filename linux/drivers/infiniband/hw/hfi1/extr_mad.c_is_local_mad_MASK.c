
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dr_slid; scalar_t__ dr_dlid; } ;
struct TYPE_3__ {TYPE_2__ dr; } ;
struct opa_smp {scalar_t__ mgmt_class; scalar_t__ hop_cnt; TYPE_1__ route; } ;
struct opa_mad {int dummy; } ;
struct ib_wc {scalar_t__ slid; } ;
struct hfi1_pportdata {scalar_t__ lid; } ;
struct hfi1_ibport {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hfi1_pportdata* FUNC_0 (struct hfi1_ibport*) ;

__attribute__((used)) static int FUNC_1(struct hfi1_ibport *VAR_2, const struct opa_mad *VAR_3,
   const struct ib_wc *VAR_4)
{
 struct hfi1_pportdata *VAR_5 = FUNC_0(VAR_2);
 const struct opa_smp *VAR_6 = (const struct opa_smp *)VAR_3;

 if (VAR_6->mgmt_class == VAR_0) {
  return (VAR_6->hop_cnt == 0 &&
   VAR_6->route.dr.dr_slid == VAR_1 &&
   VAR_6->route.dr.dr_dlid == VAR_1);
 }

 return (VAR_4->slid == VAR_5->lid);
}
