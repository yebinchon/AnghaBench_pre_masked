
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int dummy; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stv0900_internal*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct stv0900_internal *VAR_1,
     u32 VAR_2, u32 VAR_3,
     enum fe_stv0900_demod_num VAR_4)
{
 u32 VAR_5;

 VAR_3 = 105 * (VAR_3 / 100);

 if (VAR_3 > 60000000) {
  VAR_5 = VAR_3 << 4;
  VAR_5 /= (VAR_2 >> 12);
 } else if (VAR_3 > 6000000) {
  VAR_5 = VAR_3 << 6;
  VAR_5 /= (VAR_2 >> 10);
 } else {
  VAR_5 = VAR_3 << 9;
  VAR_5 /= (VAR_2 >> 7);
 }

 if (VAR_5 < 0x7fff) {
  FUNC_0(VAR_1, VAR_0, (VAR_5 >> 8) & 0x7f);
  FUNC_0(VAR_1, VAR_0 + 1, (VAR_5 & 0xff));
 } else {
  FUNC_0(VAR_1, VAR_0, 0x7f);
  FUNC_0(VAR_1, VAR_0 + 1, 0xff);
 }
}
