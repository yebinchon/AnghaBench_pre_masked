
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_port_state_info {int port_states; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int is_sm_config_started; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct opa_smp*,int,int*,struct ib_device*,int,int*,int) ;
 int FUNC_3 (struct hfi1_pportdata*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct hfi1_pportdata* FUNC_6 (struct hfi1_ibport*) ;
 int FUNC_7 (struct ib_mad_hdr*) ;
 int FUNC_8 (struct hfi1_pportdata*,struct opa_smp*,int,int,int) ;
 scalar_t__ FUNC_9 (int,int) ;
 struct hfi1_ibport* FUNC_10 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_11(struct opa_smp *VAR_3, u32 VAR_4, u8 *VAR_5,
         struct ib_device *VAR_6, u8 VAR_7,
         u32 *VAR_8, u32 VAR_9, int VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_4);
 u32 VAR_12 = FUNC_1(VAR_4);
 u32 VAR_13;
 u8 VAR_14, VAR_15;
 struct hfi1_ibport *VAR_16;
 struct hfi1_pportdata *VAR_17;
 struct opa_port_state_info *VAR_18 = (struct opa_port_state_info *)VAR_5;
 int VAR_19, VAR_20 = 0;

 if (VAR_11 != 1 || FUNC_9(sizeof(*VAR_18), VAR_9)) {
  VAR_3->status |= VAR_2;
  return FUNC_7((struct ib_mad_hdr *)VAR_3);
 }

 VAR_16 = FUNC_10(VAR_6, VAR_7);
 VAR_17 = FUNC_6(VAR_16);

 VAR_13 = FUNC_3(VAR_17);

 VAR_14 = FUNC_4(&VAR_18->port_states);
 VAR_15 = FUNC_5(&VAR_18->port_states);

 if (VAR_13 == VAR_1) {
  if (VAR_12) {
   if (VAR_14 == VAR_13 || (VAR_14 == VAR_0))
    VAR_17->is_sm_config_started = 1;
  } else if (VAR_14 == VAR_0) {
   if (VAR_17->is_sm_config_started == 0) {
    VAR_20 = 1;
    VAR_3->status |= VAR_2;
   }
  }
 }

 if (!VAR_20) {
  VAR_19 = FUNC_8(VAR_17, VAR_3, VAR_14, VAR_15, VAR_10);
  if (VAR_19)
   return VAR_19;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9);
}
