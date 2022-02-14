
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stv0900_internal*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct stv0900_internal *VAR_6, int VAR_7,
     enum fe_stv0900_demod_num VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_7) {
 case 0:
 default:
  VAR_11 = FUNC_0(VAR_6, VAR_2);
  VAR_10 = FUNC_0(VAR_6, VAR_1);
  VAR_9 = FUNC_0(VAR_6, VAR_0);
  break;
 case 1:
  VAR_11 = FUNC_0(VAR_6, VAR_5);
  VAR_10 = FUNC_0(VAR_6, VAR_4);
  VAR_9 = FUNC_0(VAR_6, VAR_3);
  break;
 }

 VAR_12 = (VAR_11 << 16) + (VAR_10 << 8) + (VAR_9);

 return VAR_12;
}
