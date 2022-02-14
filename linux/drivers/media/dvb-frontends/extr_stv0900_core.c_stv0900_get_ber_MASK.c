
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;
 int FUNC_2 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct stv0900_internal *VAR_3,
    enum fe_stv0900_demod_num VAR_4)
{
 u32 VAR_5 = 10000000, VAR_6;
 s32 VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0);

 switch (VAR_7) {
 case 128:
 case 129:
 default:
  VAR_5 = 10000000;
  break;
 case 130:
  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
   FUNC_0(5);
   VAR_5 += FUNC_2(VAR_3, 0, VAR_4);
  }

  VAR_5 /= 5;
  if (FUNC_1(VAR_3, VAR_2)) {
   VAR_5 *= 9766;
   VAR_5 = VAR_5 >> 13;
  }

  break;
 case 131:
  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
   FUNC_0(5);
   VAR_5 += FUNC_2(VAR_3, 0, VAR_4);
  }

  VAR_5 /= 5;
  if (FUNC_1(VAR_3, VAR_1)) {
   VAR_5 *= 9766;
   VAR_5 = VAR_5 >> 13;
  }

  break;
 }

 return VAR_5;
}
