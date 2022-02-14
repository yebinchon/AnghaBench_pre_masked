
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct gma_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gma_encoder*,int*,int,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct gma_encoder *VAR_6,
    uint16_t VAR_7, uint8_t *VAR_8, int VAR_9)
{
 uint8_t VAR_10[4];
 int VAR_11;
 uint8_t VAR_12[20];
 int VAR_13;
 uint8_t VAR_14;
 int VAR_15;

 VAR_10[0] = VAR_0 << 4;
 VAR_10[1] = VAR_7 >> 8;
 VAR_10[2] = VAR_7 & 0xff;
 VAR_10[3] = VAR_9 - 1;

 VAR_11 = 4;
 VAR_13 = VAR_9 + 1;

 for (;;) {
  VAR_15 = FUNC_0(VAR_6, VAR_10, VAR_11,
          VAR_12, VAR_13);
  if (VAR_15 == 0)
   return -VAR_5;
  if (VAR_15 < 0)
   return VAR_15;
  VAR_14 = VAR_12[0] >> 4;
  if ((VAR_14 & VAR_3) == VAR_1) {
   FUNC_1(VAR_8, VAR_12 + 1, VAR_15 - 1);
   return VAR_15 - 1;
  }
  else if ((VAR_14 & VAR_3) == VAR_2)
   FUNC_2(100);
  else
   return -VAR_4;
 }
}
