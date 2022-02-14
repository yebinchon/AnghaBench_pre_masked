
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pip_app_cmd_head {scalar_t__* parameter_data; scalar_t__ cmd_code; int report_id; scalar_t__ length; scalar_t__ addr; } ;
struct cyapa {int aligned_electrodes_rx; int electrodes_rx; int electrodes_x; int electrodes_y; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct cyapa*,int*,int*) ;
 int FUNC_3 (struct cyapa*,scalar_t__*,int,scalar_t__*,int*,int,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int) ;
 int VAR_11 ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__*,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(struct cyapa *VAR_12,
  u8 VAR_13, u8 VAR_14, int *VAR_15,
  int *VAR_16, int *VAR_17, int *VAR_18)
{
 struct pip_app_cmd_head *VAR_19;
 u8 VAR_20[12];
 u8 VAR_21[256];
 int VAR_22;
 int VAR_23;
 int VAR_24;
 u16 VAR_25;
 int VAR_26;
 bool VAR_27;
 int VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37;
 int VAR_38;
 int VAR_39;

 if (VAR_13 != VAR_10 ||
  (VAR_14 != VAR_4 &&
  VAR_14 != VAR_5) ||
  !VAR_15 || !VAR_16 || !VAR_17 || !VAR_18)
  return -VAR_1;

 *VAR_16 = VAR_7;
 *VAR_17 = VAR_6;
 VAR_28 = VAR_29 = VAR_35 = 0;
 VAR_36 = VAR_37 = 0;
 if (*VAR_15 == 0) {




  VAR_27 = 1;
  VAR_25 = 0;
  *VAR_15 = 4;
  VAR_31 = VAR_7;
  VAR_32 = VAR_6;
  VAR_33 = VAR_34 = VAR_35 = 0;

  if (VAR_14 == VAR_4) {
   if (VAR_12->aligned_electrodes_rx == 0) {
    FUNC_2(VAR_12,
     &VAR_36, &VAR_37);
    VAR_12->aligned_electrodes_rx =
     (VAR_36 + 3) & ~3u;
   }
   VAR_30 =
    (VAR_12->aligned_electrodes_rx + 7) & ~7u;
  } else {
   VAR_30 = 2;
  }
 } else {
  VAR_27 = 0;
  if (*VAR_15 > 4)
   *VAR_15 = 4;

  if (VAR_14 == VAR_4) {
   VAR_25 = VAR_12->aligned_electrodes_rx * (*VAR_15);
   if (VAR_12->electrodes_rx == VAR_12->electrodes_x)
    VAR_37 = VAR_12->electrodes_y;
   else
    VAR_37 = VAR_12->electrodes_x;
   VAR_30 = ((VAR_12->aligned_electrodes_rx + 7) &
      ~7u) * VAR_37;
  } else {
   VAR_25 = 2;
   VAR_30 = VAR_12->electrodes_x +
      VAR_12->electrodes_y;
   VAR_30 = (VAR_30 + 3) & ~3u;
  }
 }

 FUNC_7(VAR_20, 0, sizeof(VAR_20));
 VAR_19 = (struct pip_app_cmd_head *)VAR_20;
 FUNC_9(VAR_9, &VAR_19->addr);
 FUNC_9(sizeof(VAR_20) - 2, &VAR_19->length);
 VAR_19->report_id = VAR_8;
 VAR_19->cmd_code = VAR_13;
 do {
  VAR_26 = (256 - VAR_3) /
    (*VAR_15);
  VAR_26 = FUNC_8(VAR_26, VAR_30 - VAR_29);
  VAR_23 = VAR_26 * (*VAR_15);

  FUNC_9(VAR_25, &VAR_19->parameter_data[0]);
  FUNC_9(VAR_23, &VAR_19->parameter_data[2]);
  VAR_19->parameter_data[4] = VAR_14;
  VAR_22 = VAR_3 + VAR_23;
  VAR_39 = FUNC_3(VAR_12,
    VAR_20, sizeof(VAR_20),
    VAR_21, &VAR_22,
    500, VAR_11,
    1);
  if (VAR_39 || VAR_22 < VAR_3 ||
    !FUNC_1(VAR_21, VAR_13) ||
    !FUNC_0(VAR_21) ||
    VAR_21[6] != VAR_14)
   return (VAR_39 < 0) ? VAR_39 : -VAR_0;
  VAR_23 = FUNC_5(&VAR_21[7]);
  if (VAR_23 == 0)
   break;

  *VAR_15 = (VAR_21[9] & VAR_2);
  if (VAR_23 < *VAR_15)
   return -VAR_1;

  if (VAR_27 &&
   VAR_14 == VAR_5) {

   *VAR_16 = FUNC_4(
    VAR_21[9],
    &VAR_21[VAR_3],
    *VAR_15);

   *VAR_17 = FUNC_4(
    VAR_21[9],
    &VAR_21[VAR_3 +
        *VAR_15],
    *VAR_15);
   break;
  }


  VAR_25 += VAR_23;
  for (VAR_38 = 10; VAR_38 < (VAR_23 + VAR_3);
    VAR_38 += *VAR_15) {
   VAR_24 = FUNC_4(VAR_21[9],
     &VAR_21[VAR_38], *VAR_15);
   *VAR_17 = FUNC_8(VAR_24, *VAR_17);
   *VAR_16 = FUNC_6(VAR_24, *VAR_16);

   if (VAR_14 == VAR_4 &&
    VAR_35 < VAR_12->aligned_electrodes_rx &&
    VAR_27) {






    if (!VAR_33 || VAR_24 > VAR_33 / 2) {
     VAR_32 = FUNC_8(VAR_24, VAR_32);
     VAR_31 = FUNC_6(VAR_24, VAR_31);
     VAR_34 += VAR_24;
     VAR_35++;

     VAR_33 = VAR_34 / VAR_35;
    }
   }

   VAR_28 += VAR_24;
   VAR_29++;

   if (VAR_29 >= VAR_30)
    goto out;
  }
 } while (1);

out:
 *VAR_18 = VAR_29 ? (VAR_28 / VAR_29) : 0;

 if (VAR_27 &&
  VAR_14 == VAR_4) {
  if (VAR_35 == 0)
   return 0;

  if (VAR_35 == VAR_12->aligned_electrodes_rx) {
   VAR_12->electrodes_rx = VAR_12->electrodes_rx ?
    VAR_12->electrodes_rx : VAR_36;
  } else if (VAR_35 == VAR_36) {
   VAR_12->electrodes_rx = VAR_12->electrodes_rx ?
    VAR_12->electrodes_rx : VAR_36;
   VAR_12->aligned_electrodes_rx = VAR_36;
  } else {
   VAR_12->electrodes_rx = VAR_12->electrodes_rx ?
    VAR_12->electrodes_rx : VAR_37;
   VAR_12->aligned_electrodes_rx = VAR_35;
  }

  *VAR_17 = VAR_32;
  *VAR_16 = VAR_31;
  *VAR_18 = VAR_33;
 }

 return 0;
}
