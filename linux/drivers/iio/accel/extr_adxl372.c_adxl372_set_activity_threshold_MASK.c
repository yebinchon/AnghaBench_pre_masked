
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {int regmap; } ;
typedef enum adxl372_th_activity { ____Placeholder_adxl372_th_activity } adxl372_th_activity ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* VAR_0 ;
 int FUNC_1 (int ,unsigned char,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_1,
       enum adxl372_th_activity VAR_2,
       bool VAR_3, bool VAR_4,
       unsigned int VAR_5)
{
 unsigned char VAR_6[6];
 unsigned char VAR_7, VAR_8, VAR_9;


 VAR_7 = (VAR_5 / 100) >> 3;
 VAR_8 = ((VAR_5 / 100) << 5) | (VAR_3 << 1) | VAR_4;
 VAR_9 = VAR_0[VAR_2];

 VAR_6[0] = VAR_7;
 VAR_6[1] = VAR_8;
 VAR_6[2] = VAR_7;
 VAR_6[3] = VAR_8;
 VAR_6[4] = VAR_7;
 VAR_6[5] = VAR_8;

 return FUNC_1(VAR_1->regmap, VAR_9,
     VAR_6, FUNC_0(VAR_6));
}
