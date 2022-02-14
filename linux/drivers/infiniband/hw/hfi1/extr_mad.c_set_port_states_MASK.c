
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct opa_smp {int status; } ;
struct hfi1_pportdata {int neighbor_normal; int offline_disabled_reason; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;




 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct hfi1_pportdata*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;
 int FUNC_4 (struct hfi1_pportdata*,int ,int ,int ) ;
 int FUNC_5 (struct hfi1_pportdata*,scalar_t__) ;
 int FUNC_6 (struct hfi1_pportdata*) ;

__attribute__((used)) static int FUNC_7(struct hfi1_pportdata *VAR_20, struct opa_smp *VAR_21,
      u32 VAR_22, u32 VAR_23, int VAR_24)
{
 struct hfi1_devdata *VAR_25 = VAR_20->dd;
 u32 VAR_26;
 int VAR_27;

 VAR_27 = FUNC_1(VAR_20, VAR_22, VAR_23);
 if (VAR_27 == VAR_0 ||
     VAR_27 == VAR_2) {

  VAR_21->status |= VAR_14;
  return 0;
 }

 if (VAR_27 == VAR_1)
  return 0;

 if ((VAR_23 != VAR_12) &&
     !(VAR_22 == 129 ||
       VAR_22 == 128)){
  FUNC_2("SubnSet(OPA_PortInfo) port state invalid: logical_state 0x%x physical_state 0x%x\n",
   VAR_22, VAR_23);
  VAR_21->status |= VAR_14;
 }






 switch (VAR_22) {
 case 128:
  if (VAR_23 == VAR_12)
   break;

 case 129:
  if (VAR_23 == VAR_12) {
   VAR_26 = VAR_4;
  } else if (VAR_23 == VAR_13) {
   VAR_26 = VAR_6;
   FUNC_4(VAR_20, VAR_15,
          0, VAR_15);
  } else if (VAR_23 == VAR_11) {
   VAR_26 = VAR_3;
  } else {
   FUNC_2("SubnSet(OPA_PortInfo) invalid physical state 0x%x\n",
    VAR_23);
   VAR_21->status |= VAR_14;
   break;
  }

  if ((VAR_26 == VAR_6 ||
       VAR_26 == VAR_4)) {







   FUNC_5(VAR_20, VAR_5);
   FUNC_6(VAR_20);
  } else {
   FUNC_5(VAR_20, VAR_26);
  }
  if (VAR_26 == VAR_3 &&
      (VAR_20->offline_disabled_reason >
       FUNC_0(VAR_17) ||
       VAR_20->offline_disabled_reason ==
       FUNC_0(VAR_16)))
   VAR_20->offline_disabled_reason =
   FUNC_0(VAR_17);




  if (VAR_26 == VAR_3 && !VAR_24)
   return VAR_10 | VAR_9;
  break;
 case 130:
  VAR_27 = FUNC_5(VAR_20, VAR_8);
  if (!VAR_27)
   FUNC_3(VAR_25, VAR_19);
  break;
 case 131:
  if (VAR_20->neighbor_normal) {
   VAR_27 = FUNC_5(VAR_20, VAR_7);
   if (VAR_27 == 0)
    FUNC_3(VAR_25, VAR_18);
  } else {
   FUNC_2("SubnSet(OPA_PortInfo) Cannot move to Active with NeighborNormal 0\n");
   VAR_21->status |= VAR_14;
  }
  break;
 default:
  FUNC_2("SubnSet(OPA_PortInfo) invalid logical state 0x%x\n",
   VAR_22);
  VAR_21->status |= VAR_14;
 }

 return 0;
}
