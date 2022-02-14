
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_2[4];
 u_int VAR_3, VAR_4;
 u_int VAR_5, VAR_6;

 if (VAR_1 >= 2) {
  VAR_3 = 0;
  do {
   FUNC_0(0x2, VAR_2);
   if (VAR_3 == 0 && (VAR_3 = (VAR_2[0] & 0xff)) == 0)
    break;

   for (VAR_4 = 0; VAR_4 <= 3; ++VAR_4) {
    if (VAR_2[VAR_4] & (1<<31))
     continue;
    if (VAR_4 != 0)
     FUNC_1(VAR_2[VAR_4] & 0xff);
    FUNC_1((VAR_2[VAR_4] >> 8) & 0xff);
    FUNC_1((VAR_2[VAR_4] >> 16) & 0xff);
    FUNC_1((VAR_2[VAR_4] >> 24) & 0xff);
   }
  } while (--VAR_3 > 0);
 }

 if (VAR_0 >= 0x80000006) {
  FUNC_0(0x80000006, VAR_2);
  VAR_5 = (VAR_2[2] >> 12) & 0x0f;
  if (VAR_5 >= 0x02 && VAR_5 <= 0x08)
   VAR_6 = 1 << (VAR_5 / 2);
  else
   VAR_6 = 0;
  FUNC_2("L2 cache: %u kbytes, %u-way associative, %u bytes/line\n",
      (VAR_2[2] >> 16) & 0xffff, VAR_6, VAR_2[2] & 0xff);
 }
}
