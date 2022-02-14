
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmp280_data {int regmap; } ;
struct bmp180_calib {void* MD; void* MC; void* MB; void* B2; void* B1; void* AC6; void* AC5; void* AC4; void* AC3; void* AC2; void* AC1; } ;
typedef int buf ;
typedef scalar_t__ __be16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (scalar_t__*,int) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(struct bmp280_data *VAR_14,
        struct bmp180_calib *VAR_15)
{
 int VAR_16;
 int VAR_17;
 __be16 VAR_18[VAR_8 / 2];

 VAR_16 = FUNC_4(VAR_14->regmap, VAR_9, VAR_18,
          sizeof(VAR_18));

 if (VAR_16 < 0)
  return VAR_16;


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_18); VAR_17++) {
  if (VAR_18[VAR_17] == FUNC_3(0) || VAR_18[VAR_17] == FUNC_3(0xffff))
   return -VAR_10;
 }


 FUNC_1(VAR_18, sizeof(VAR_18));

 VAR_15->AC1 = FUNC_2(VAR_18[VAR_0]);
 VAR_15->AC2 = FUNC_2(VAR_18[VAR_1]);
 VAR_15->AC3 = FUNC_2(VAR_18[VAR_2]);
 VAR_15->AC4 = FUNC_2(VAR_18[VAR_3]);
 VAR_15->AC5 = FUNC_2(VAR_18[VAR_4]);
 VAR_15->AC6 = FUNC_2(VAR_18[VAR_5]);
 VAR_15->B1 = FUNC_2(VAR_18[VAR_6]);
 VAR_15->B2 = FUNC_2(VAR_18[VAR_7]);
 VAR_15->MB = FUNC_2(VAR_18[VAR_11]);
 VAR_15->MC = FUNC_2(VAR_18[VAR_12]);
 VAR_15->MD = FUNC_2(VAR_18[VAR_13]);

 return 0;
}
