
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct stv0367_state {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct stv0367_state*,int ) ;
 int FUNC_1 (struct stv0367_state*,int ,int) ;
 int** VAR_7 ;
 int** VAR_8 ;

__attribute__((used)) static s32 FUNC_2(struct stv0367_state *VAR_9)
{
 s32 VAR_10 = 0;
 s32 VAR_11 = 0, VAR_12 = 0;
 u8 VAR_13;

 FUNC_1(VAR_9, VAR_4, 0x0);

 VAR_11 =
  (FUNC_0(VAR_9, VAR_3) & 0x03) +
  (FUNC_0(VAR_9, VAR_2) << 2);
 VAR_11 = 100 * VAR_11 / 1023;

 VAR_12 =
  FUNC_0(VAR_9, VAR_1) +
  (FUNC_0(VAR_9, VAR_0) << 8);
 if (VAR_12 >= 2048)
  VAR_12 -= 2048;
 else
  VAR_12 += 2048;

 VAR_12 = 100 * VAR_12 / 4095;


 if (VAR_11 < 90 && VAR_12 < 28) {
  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
   if (VAR_11 <= VAR_7[0][VAR_13]) {
    VAR_10 = (-1) * VAR_7[1][VAR_13];
    break;
   }
  }
  if (VAR_13 == VAR_6)
   VAR_10 = -56;
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   if (VAR_12 <= VAR_8[0][VAR_13]) {
    VAR_10 = (-1) * VAR_8[1][VAR_13];
    break;
   }
  }
  if (VAR_13 == VAR_5)
   VAR_10 = -72;
 }
 return VAR_10;
}
