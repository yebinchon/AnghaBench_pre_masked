
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cyapa {int platform_ver; int fw_maj_ver; int fw_min_ver; int electrodes_x; int electrodes_y; int physical_size_x; int physical_size_y; int max_abs_x; int max_abs_y; int max_z; int x_origin; int y_origin; int btn_capability; char* product_id; int electrodes_rx; unsigned int aligned_electrodes_rx; } ;
typedef int resp_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cyapa*,int ,int ,int*,int*,int,int ,int) ;
 int VAR_9 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_11)
{
 u8 VAR_12[VAR_8];
 int VAR_13;
 u16 VAR_14;
 u8 VAR_15;
 int VAR_16;


 VAR_13 = sizeof(VAR_12);
 VAR_16 = FUNC_0(VAR_11,
   VAR_10, VAR_7,
   VAR_12, &VAR_13,
   2000, VAR_9, 0);
 if (VAR_16 || VAR_13 < sizeof(VAR_12))
  return VAR_16 ? VAR_16 : -VAR_2;

 VAR_14 = FUNC_1(&VAR_12[7]);
 if ((VAR_14 & VAR_5) !=
  VAR_6)
  return -VAR_1;

 VAR_11->platform_ver = (VAR_12[67] >> VAR_4) &
         VAR_3;
 VAR_11->fw_maj_ver = VAR_12[9];
 VAR_11->fw_min_ver = VAR_12[10];

 VAR_11->electrodes_x = VAR_12[33];
 VAR_11->electrodes_y = VAR_12[34];

 VAR_11->physical_size_x = FUNC_1(&VAR_12[35]) / 100;
 VAR_11->physical_size_y = FUNC_1(&VAR_12[37]) / 100;

 VAR_11->max_abs_x = FUNC_1(&VAR_12[39]);
 VAR_11->max_abs_y = FUNC_1(&VAR_12[41]);

 VAR_11->max_z = FUNC_1(&VAR_12[43]);

 VAR_11->x_origin = VAR_12[45] & 0x01;
 VAR_11->y_origin = VAR_12[46] & 0x01;

 VAR_11->btn_capability = (VAR_12[70] << 3) & VAR_0;

 FUNC_2(&VAR_11->product_id[0], &VAR_12[51], 5);
 VAR_11->product_id[5] = '-';
 FUNC_2(&VAR_11->product_id[6], &VAR_12[56], 6);
 VAR_11->product_id[12] = '-';
 FUNC_2(&VAR_11->product_id[13], &VAR_12[62], 2);
 VAR_11->product_id[15] = '\0';


 VAR_15 = VAR_12[68];
 VAR_11->electrodes_rx =
  VAR_15 ? VAR_11->electrodes_y : VAR_11->electrodes_x;
 VAR_11->aligned_electrodes_rx = (VAR_11->electrodes_rx + 3) & ~3u;

 if (!VAR_11->electrodes_x || !VAR_11->electrodes_y ||
  !VAR_11->physical_size_x || !VAR_11->physical_size_y ||
  !VAR_11->max_abs_x || !VAR_11->max_abs_y || !VAR_11->max_z)
  return -VAR_1;

 return 0;
}
