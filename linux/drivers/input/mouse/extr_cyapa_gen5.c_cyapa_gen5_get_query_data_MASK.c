
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cyapa {int platform_ver; scalar_t__ gen; int fw_maj_ver; int fw_min_ver; int electrodes_x; int electrodes_y; int physical_size_x; int physical_size_y; int max_abs_x; int max_abs_y; int max_z; int x_origin; int y_origin; int btn_capability; char* product_id; } ;
typedef int resp_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cyapa*,int ,int ,int*,int*,int,int ,int) ;
 int VAR_10 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int*,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_12)
{
 u8 VAR_13[VAR_9];
 int VAR_14;
 u16 VAR_15;
 int VAR_16;

 VAR_14 = sizeof(VAR_13);
 VAR_16 = FUNC_0(VAR_12,
   VAR_11, VAR_8,
   VAR_13, &VAR_14,
   2000, VAR_10, 0);
 if (VAR_16 || VAR_14 < sizeof(VAR_13))
  return VAR_16 ? VAR_16 : -VAR_3;

 VAR_15 = FUNC_1(&VAR_13[7]);
 if ((VAR_15 & VAR_6) !=
  VAR_7)
  return -VAR_2;

 VAR_12->platform_ver = (VAR_13[49] >> VAR_5) &
         VAR_4;
 if (VAR_12->gen == VAR_1 && VAR_12->platform_ver < 2) {

  VAR_12->fw_maj_ver = VAR_13[15];
  VAR_12->fw_min_ver = VAR_13[16];
 } else {
  VAR_12->fw_maj_ver = VAR_13[9];
  VAR_12->fw_min_ver = VAR_13[10];
 }

 VAR_12->electrodes_x = VAR_13[52];
 VAR_12->electrodes_y = VAR_13[53];

 VAR_12->physical_size_x = FUNC_1(&VAR_13[54]) / 100;
 VAR_12->physical_size_y = FUNC_1(&VAR_13[56]) / 100;

 VAR_12->max_abs_x = FUNC_1(&VAR_13[58]);
 VAR_12->max_abs_y = FUNC_1(&VAR_13[60]);

 VAR_12->max_z = FUNC_1(&VAR_13[62]);

 VAR_12->x_origin = VAR_13[64] & 0x01;
 VAR_12->y_origin = VAR_13[65] & 0x01;

 VAR_12->btn_capability = (VAR_13[70] << 3) & VAR_0;

 FUNC_2(&VAR_12->product_id[0], &VAR_13[33], 5);
 VAR_12->product_id[5] = '-';
 FUNC_2(&VAR_12->product_id[6], &VAR_13[38], 6);
 VAR_12->product_id[12] = '-';
 FUNC_2(&VAR_12->product_id[13], &VAR_13[44], 2);
 VAR_12->product_id[15] = '\0';

 if (!VAR_12->electrodes_x || !VAR_12->electrodes_y ||
  !VAR_12->physical_size_x || !VAR_12->physical_size_y ||
  !VAR_12->max_abs_x || !VAR_12->max_abs_y || !VAR_12->max_z)
  return -VAR_2;

 return 0;
}
