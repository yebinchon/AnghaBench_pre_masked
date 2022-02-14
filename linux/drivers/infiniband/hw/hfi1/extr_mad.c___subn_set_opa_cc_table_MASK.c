
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_table_entry_shadow {int entry; } ;
struct ib_cc_table_attr {TYPE_1__* ccti_entries; int ccti_limit; } ;
struct hfi1_pportdata {int cc_max_table_entries; int total_cct_entry; int cc_state_lock; struct ib_cc_table_entry_shadow* ccti_entries; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_2__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct opa_smp*,int,int *,struct ib_device*,int ,int*,int) ;
 int FUNC_3 (struct hfi1_pportdata*) ;
 int FUNC_4 (int ) ;
 struct hfi1_pportdata* FUNC_5 (struct hfi1_ibport*) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct hfi1_ibport* FUNC_10 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
       struct ib_device *VAR_5, u8 VAR_6,
       u32 *VAR_7, u32 VAR_8)
{
 struct ib_cc_table_attr *VAR_9 = (struct ib_cc_table_attr *)VAR_4;
 struct hfi1_ibport *VAR_10 = FUNC_10(VAR_5, VAR_6);
 struct hfi1_pportdata *VAR_11 = FUNC_5(VAR_10);
 u32 VAR_12 = FUNC_1(VAR_3);
 u32 VAR_13 = FUNC_0(VAR_3);
 struct ib_cc_table_entry_shadow *VAR_14;
 int VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 u16 VAR_19;
 u32 VAR_20 = sizeof(u16) * (VAR_0 * VAR_13 + 1);


 if (VAR_13 == 0 || FUNC_7(VAR_20, VAR_8) ||
     VAR_12 + VAR_13 > VAR_11->cc_max_table_entries) {
  VAR_2->status |= VAR_1;
  return FUNC_6((struct ib_mad_hdr *)VAR_2);
 }

 VAR_17 = VAR_12 * VAR_0;
 VAR_18 = VAR_17 + ((VAR_13 - 1) * VAR_0) +
   (FUNC_4(VAR_9->ccti_limit)) % VAR_0 + 1;


 VAR_19 = FUNC_4(VAR_9->ccti_limit);
 if (VAR_19 + 1 > VAR_18) {
  VAR_2->status |= VAR_1;
  return FUNC_6((struct ib_mad_hdr *)VAR_2);
 }





 FUNC_8(&VAR_11->cc_state_lock);
 VAR_11->total_cct_entry = VAR_19 + 1;
 VAR_14 = VAR_11->ccti_entries;
 for (VAR_16 = 0, VAR_15 = VAR_17; VAR_15 < VAR_18; VAR_16++, VAR_15++)
  VAR_14[VAR_15].entry = FUNC_4(VAR_9->ccti_entries[VAR_16].entry);
 FUNC_9(&VAR_11->cc_state_lock);


 FUNC_3(VAR_11);

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8);
}
