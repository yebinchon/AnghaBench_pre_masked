
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rvt_qp {int dummy; } ;
struct opa_smp {scalar_t__ mgmt_class; int method; int status; } ;
struct hfi1_pportdata {int dummy; } ;
struct TYPE_2__ {int port_cap_flags; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int ) ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;
 scalar_t__ FUNC_2 (struct hfi1_pportdata*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct hfi1_ibport *VAR_6, u16 VAR_7, u8 VAR_8,
    struct rvt_qp *VAR_9, u16 VAR_10, struct opa_smp *VAR_11)
{
 struct hfi1_pportdata *VAR_12 = FUNC_1(VAR_6);





 if (VAR_8 != 0xf)
  return 1;

 if (FUNC_2(VAR_12, VAR_7, VAR_8, VAR_10))
  return 1;






 if (VAR_11->mgmt_class != VAR_1 &&
     VAR_11->mgmt_class != VAR_2) {
  FUNC_0(VAR_12, VAR_7, VAR_10);
  return 1;
 }
 switch (VAR_11->method) {
 case 132:
 case 130:
  break;
 case 133:
 case 129:
 case 131:
 case 128:
  if (VAR_7 != VAR_0) {
   FUNC_0(VAR_12, VAR_7, VAR_10);
   return 1;
  }
  break;
 default:
  if (VAR_6->rvp.port_cap_flags & VAR_4)
   return 0;
  if (VAR_11->method == VAR_3)
   return 1;
  if (VAR_7 == VAR_0) {
   VAR_11->status |= VAR_5;
   return 0;
  }
  FUNC_0(VAR_12, VAR_7, VAR_10);
  return 1;
 }
 return 0;
}
