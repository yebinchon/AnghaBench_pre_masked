
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* cache; int limiting_active; int reset_needed; } ;
struct hfi1_pportdata {int link_speed_supported; int link_speed_enabled; int dd; TYPE_1__ qsfp_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct hfi1_pportdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_pportdata*,int ,int ) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 int FUNC_5 (struct hfi1_pportdata*) ;
 int FUNC_6 (struct hfi1_pportdata*,TYPE_1__*) ;
 int FUNC_7 (struct hfi1_pportdata*) ;
 int FUNC_8 (struct hfi1_pportdata*) ;
 int FUNC_9 (struct hfi1_pportdata*,int) ;

__attribute__((used)) static int FUNC_10(struct hfi1_pportdata *VAR_10, u32 *VAR_11,
       u32 *VAR_12, u32 *VAR_13)
{
 int VAR_14;
 u16 VAR_15 = VAR_10->link_speed_supported, VAR_16 = VAR_10->link_speed_enabled;
 u8 *VAR_17 = VAR_10->qsfp_info.cache;

 VAR_10->qsfp_info.limiting_active = 1;

 VAR_14 = FUNC_9(VAR_10, 0);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14)
  return VAR_14;






 if (VAR_10->qsfp_info.reset_needed) {
  VAR_14 = FUNC_7(VAR_10);
  if (VAR_14)
   return VAR_14;
  FUNC_6(VAR_10, &VAR_10->qsfp_info);
 } else {
  VAR_10->qsfp_info.reset_needed = 1;
 }

 VAR_14 = FUNC_8(VAR_10);
 if (VAR_14)
  return VAR_14;

 if (VAR_17[VAR_9] & 0x4) {
  VAR_14 = FUNC_3(
   VAR_10->dd,
   VAR_3, 0,
   VAR_7,
   VAR_11, 4);
  if (VAR_14) {
   *VAR_11 = VAR_0;
   return VAR_14;
  }
 } else {
  VAR_14 = FUNC_3(
   VAR_10->dd,
   VAR_3, 0,
   VAR_8,
   VAR_11, 4);
  if (VAR_14) {
   *VAR_11 = VAR_0;
   return VAR_14;
  }
 }

 VAR_14 = FUNC_3(
  VAR_10->dd, VAR_3, 0,
  VAR_6, VAR_12, 4);
 if (VAR_14) {
  *VAR_12 = VAR_0;
  return VAR_14;
 }

 if ((VAR_15 & VAR_2) && (VAR_16 & VAR_2))
  FUNC_3(
   VAR_10->dd, VAR_3, 0,
   VAR_5, VAR_13, 4);
 else if ((VAR_15 & VAR_1) && (VAR_16 & VAR_1))
  FUNC_3(
   VAR_10->dd, VAR_3, 0,
   VAR_4, VAR_13, 4);

 FUNC_0(VAR_10, *VAR_12, *VAR_11);

 FUNC_1(VAR_10, *VAR_12, *VAR_11);

 FUNC_2(VAR_10, *VAR_12, *VAR_11);

 VAR_14 = FUNC_9(VAR_10, 1);

 return VAR_14;
}
