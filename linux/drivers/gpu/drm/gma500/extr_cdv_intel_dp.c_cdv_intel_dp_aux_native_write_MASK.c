
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
 int FUNC_0 (struct gma_encoder*,int*,int,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct gma_encoder *VAR_5,
     uint16_t VAR_6, uint8_t *VAR_7, int VAR_8)
{
 int VAR_9;
 uint8_t VAR_10[20];
 int VAR_11;
 uint8_t VAR_12;

 if (VAR_8 > 16)
  return -1;
 VAR_10[0] = VAR_3 << 4;
 VAR_10[1] = VAR_6 >> 8;
 VAR_10[2] = VAR_6 & 0xff;
 VAR_10[3] = VAR_8 - 1;
 FUNC_1(&VAR_10[4], VAR_7, VAR_8);
 VAR_11 = VAR_8 + 4;
 for (;;) {
  VAR_9 = FUNC_0(VAR_5, VAR_10, VAR_11, &VAR_12, 1);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_12 >>= 4;
  if ((VAR_12 & VAR_2) == VAR_0)
   break;
  else if ((VAR_12 & VAR_2) == VAR_1)
   FUNC_2(100);
  else
   return -VAR_4;
 }
 return VAR_8;
}
