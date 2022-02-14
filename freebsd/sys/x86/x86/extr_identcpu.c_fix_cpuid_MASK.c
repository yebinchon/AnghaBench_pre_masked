
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int) ;

bool
FUNC_4(void)
{
 uint64_t VAR_9;







 if (VAR_7 == VAR_1 &&
     ((FUNC_0(VAR_6) == 0xf &&
     FUNC_1(VAR_6) >= 0x3) ||
     (FUNC_0(VAR_6) == 0x6 &&
     FUNC_1(VAR_6) >= 0xe))) {
  VAR_9 = FUNC_2(VAR_4);
  if ((VAR_9 & VAR_2) != 0) {
   VAR_9 &= ~VAR_2;
   FUNC_3(VAR_4, VAR_9);
   return (1);
  }
 }
 if (VAR_8 == VAR_5 && VAR_7 == VAR_0 &&
     FUNC_0(VAR_6) == 0x15) {
  VAR_9 = FUNC_2(VAR_3);
  if ((VAR_9 & ((uint64_t)1 << 54)) == 0) {
   VAR_9 |= (uint64_t)1 << 54;
   FUNC_3(VAR_3, VAR_9);
   return (1);
  }
 }
 return (0);
}
