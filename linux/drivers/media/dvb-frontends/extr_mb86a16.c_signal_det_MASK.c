
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct mb86a16_state*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (struct mb86a16_state*,int,unsigned char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mb86a16_state*,int) ;
 int FUNC_5 (struct mb86a16_state*,int) ;
 int FUNC_6 (struct mb86a16_state*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct mb86a16_state *VAR_3,
        int VAR_4,
        unsigned char *VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned char VAR_8[3];
 int VAR_9;

 if (*VAR_5 > 45) {
  if (FUNC_0(VAR_3, 2, 1, 2) < 0) {
   FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
   return -1;
  }
 } else {
  if (FUNC_0(VAR_3, 3, 1, 2) < 0) {
   FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
   return -1;
  }
 }
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  if (VAR_9 == 0)
   VAR_7 = VAR_4 * 98 / 100;
  else if (VAR_9 == 1)
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_4 * 102 / 100;
  FUNC_4(VAR_3, VAR_7);
  FUNC_5(VAR_3, VAR_7);
  FUNC_6(VAR_3);
  FUNC_3(10);
  if (FUNC_2(VAR_3, 0x37, &(VAR_8[VAR_9])) != 2) {
   FUNC_1(VAR_2, VAR_1, 1, "I2C transfer error");
   return -VAR_0;
  }
 }
 if ((VAR_8[1] > VAR_8[0] * 112 / 100) && (VAR_8[1] > VAR_8[2] * 112 / 100))
  VAR_6 = 1;
 else
  VAR_6 = 0;

 *VAR_5 = VAR_8[1];

 if (FUNC_0(VAR_3, 0, 1, 2) < 0) {
  FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
  return -1;
 }

 return VAR_6;
}
