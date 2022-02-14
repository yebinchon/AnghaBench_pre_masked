
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dps310_data {void* c30; void* c21; void* c20; void* c11; void* c01; void* c10; void* c00; void* c1; void* c0; int regmap; } ;
typedef int coef ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int*,int) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct dps310_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3[18];
 u32 VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


 VAR_2 = FUNC_1(VAR_1->regmap, VAR_0, VAR_3,
         sizeof(VAR_3));
 if (VAR_2 < 0)
  return VAR_2;





 VAR_4 = (VAR_3[0] << 4) | (VAR_3[1] >> 4);
 VAR_1->c0 = FUNC_2(VAR_4, 11);

 VAR_5 = ((VAR_3[1] & FUNC_0(3, 0)) << 8) | VAR_3[2];
 VAR_1->c1 = FUNC_2(VAR_5, 11);






 VAR_6 = (VAR_3[3] << 12) | (VAR_3[4] << 4) | (VAR_3[5] >> 4);
 VAR_1->c00 = FUNC_2(VAR_6, 19);

 VAR_7 = ((VAR_3[5] & FUNC_0(3, 0)) << 16) | (VAR_3[6] << 8) | VAR_3[7];
 VAR_1->c10 = FUNC_2(VAR_7, 19);

 VAR_10 = (VAR_3[8] << 8) | VAR_3[9];
 VAR_1->c01 = FUNC_2(VAR_10, 15);

 VAR_11 = (VAR_3[10] << 8) | VAR_3[11];
 VAR_1->c11 = FUNC_2(VAR_11, 15);

 VAR_8 = (VAR_3[12] << 8) | VAR_3[13];
 VAR_1->c20 = FUNC_2(VAR_8, 15);

 VAR_12 = (VAR_3[14] << 8) | VAR_3[15];
 VAR_1->c21 = FUNC_2(VAR_12, 15);

 VAR_9 = (VAR_3[16] << 8) | VAR_3[17];
 VAR_1->c30 = FUNC_2(VAR_9, 15);

 return 0;
}
