
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_congestion_info_attr {int congestion_log_length; int control_table_cap; scalar_t__ congestion_info; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int cc_max_table_entries; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfi1_pportdata* FUNC_0 (struct hfi1_ibport*) ;
 int FUNC_1 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_2 (int,int) ;
 struct hfi1_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
        struct ib_device *VAR_5, u8 VAR_6,
        u32 *VAR_7, u32 VAR_8)
{
 struct opa_congestion_info_attr *VAR_9 =
  (struct opa_congestion_info_attr *)VAR_4;
 struct hfi1_ibport *VAR_10 = FUNC_3(VAR_5, VAR_6);
 struct hfi1_pportdata *VAR_11 = FUNC_0(VAR_10);

 if (FUNC_2(sizeof(*VAR_9), VAR_8)) {
  VAR_2->status |= VAR_0;
  return FUNC_1((struct ib_mad_hdr *)VAR_2);
 }

 VAR_9->congestion_info = 0;
 VAR_9->control_table_cap = VAR_11->cc_max_table_entries;
 VAR_9->congestion_log_length = VAR_1;

 if (VAR_7)
  *VAR_7 += sizeof(*VAR_9);

 return FUNC_1((struct ib_mad_hdr *)VAR_2);
}
