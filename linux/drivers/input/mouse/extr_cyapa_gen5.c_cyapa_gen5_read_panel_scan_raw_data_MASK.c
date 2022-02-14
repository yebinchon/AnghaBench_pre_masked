
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pip_app_cmd_head {scalar_t__ parameter_data; scalar_t__ cmd_code; int report_id; int length; int addr; } ;
struct gen5_retrieve_panel_scan_data {scalar_t__ data_id; int read_elements; int read_offset; } ;
struct cyapa {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct cyapa*,scalar_t__*,int,scalar_t__*,int*,int,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,int) ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct cyapa *VAR_11,
  u8 VAR_12, u8 VAR_13, int VAR_14,
  int *VAR_15, int *VAR_16, int *VAR_17,
  u8 *VAR_18)
{
 struct pip_app_cmd_head *VAR_19;
 struct gen5_retrieve_panel_scan_data *VAR_20;
 u8 VAR_21[12];
 u8 VAR_22[256];
 int VAR_23;
 int VAR_24;
 int VAR_25;
 u16 VAR_26;
 s32 VAR_27;
 int VAR_28, VAR_29;
 int VAR_30;
 s32 *VAR_31;
 int VAR_32;
 int VAR_33;

 if (VAR_12 != VAR_2 ||
  (VAR_13 > VAR_3) ||
  !VAR_15 || !VAR_16 || !VAR_17)
  return -VAR_1;

 VAR_31 = (s32 *)VAR_18;
 *VAR_15 = VAR_7;
 *VAR_16 = VAR_6;
 VAR_28 = VAR_29 = 0;
 VAR_26 = 0;

 VAR_24 = (256 - VAR_5) / 4;
 VAR_25 = VAR_24 * 4;
 VAR_19 = (struct pip_app_cmd_head *)VAR_21;
 FUNC_7(VAR_9, &VAR_19->addr);
 FUNC_7(sizeof(VAR_21) - 2, &VAR_19->length);
 VAR_19->report_id = VAR_8;
 VAR_19->cmd_code = VAR_12;
 VAR_20 = (struct gen5_retrieve_panel_scan_data *)
   VAR_19->parameter_data;
 do {
  FUNC_7(VAR_26, &VAR_20->read_offset);
  FUNC_7(VAR_24,
   &VAR_20->read_elements);
  VAR_20->data_id = VAR_13;

  VAR_23 = VAR_5 + VAR_25;
  VAR_33 = FUNC_2(VAR_11,
   VAR_21, sizeof(VAR_21),
   VAR_22, &VAR_23,
   500, VAR_10, 1);
  if (VAR_33 || VAR_23 < VAR_5 ||
    !FUNC_1(VAR_22, VAR_12) ||
    !FUNC_0(VAR_22) ||
    VAR_22[6] != VAR_13)
   return VAR_33 ? VAR_33 : -VAR_0;

  VAR_24 = FUNC_4(&VAR_22[7]);
  if (VAR_24 == 0)
   break;

  VAR_30 = (VAR_22[9] & VAR_4);
  VAR_26 += VAR_24;
  if (VAR_24) {
   for (VAR_32 = VAR_5;
        VAR_32 < (VAR_24 * VAR_30 +
     VAR_5);
        VAR_32 += VAR_30) {
    VAR_27 = FUNC_3(VAR_22[9],
      &VAR_22[VAR_32], VAR_30);
    *VAR_16 = FUNC_6(VAR_27, *VAR_16);
    *VAR_15 = FUNC_5(VAR_27, *VAR_15);

    if (VAR_31)
     FUNC_8(VAR_27, &VAR_31[VAR_29]);

    VAR_28 += VAR_27;
    VAR_29++;

   }
  }

  if (VAR_29 >= VAR_14)
   break;

  VAR_24 = (sizeof(VAR_22) -
    VAR_5) / VAR_30;
  VAR_25 = VAR_24 * VAR_30;
 } while (1);

 *VAR_17 = VAR_29 ? (VAR_28 / VAR_29) : 0;

 return 0;
}
