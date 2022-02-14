
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {scalar_t__ state; char* product_id; int fw_maj_ver; int fw_min_ver; int btn_capability; int gen; int max_abs_x; int max_abs_y; int physical_size_x; int physical_size_y; int max_z; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cyapa*,int ,int*) ;
 int FUNC_1 (char*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_6)
{
 u8 VAR_7[VAR_5];
 int VAR_8;

 if (VAR_6->state != VAR_2)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_7);
 if (VAR_8 != VAR_5)
  return (VAR_8 < 0) ? VAR_8 : -VAR_4;

 FUNC_1(&VAR_6->product_id[0], &VAR_7[0], 5);
 VAR_6->product_id[5] = '-';
 FUNC_1(&VAR_6->product_id[6], &VAR_7[5], 6);
 VAR_6->product_id[12] = '-';
 FUNC_1(&VAR_6->product_id[13], &VAR_7[11], 2);
 VAR_6->product_id[15] = '\0';

 VAR_6->fw_maj_ver = VAR_7[15];
 VAR_6->fw_min_ver = VAR_7[16];

 VAR_6->btn_capability = VAR_7[19] & VAR_0;

 VAR_6->gen = VAR_7[20] & 0x0f;

 VAR_6->max_abs_x = ((VAR_7[21] & 0xf0) << 4) | VAR_7[22];
 VAR_6->max_abs_y = ((VAR_7[21] & 0x0f) << 8) | VAR_7[23];

 VAR_6->physical_size_x =
  ((VAR_7[24] & 0xf0) << 4) | VAR_7[25];
 VAR_6->physical_size_y =
  ((VAR_7[24] & 0x0f) << 8) | VAR_7[26];

 VAR_6->max_z = 255;

 return 0;
}
