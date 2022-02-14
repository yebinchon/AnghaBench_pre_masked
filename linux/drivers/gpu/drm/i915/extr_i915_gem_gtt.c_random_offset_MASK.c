
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u64 FUNC_7(u64 VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5, VAR_6;

 FUNC_0(FUNC_4(VAR_1, VAR_3, VAR_2));
 FUNC_0(FUNC_6(VAR_1, VAR_4) > FUNC_5(VAR_2 - VAR_3, VAR_4));

 VAR_5 = FUNC_5(VAR_2 - VAR_3, VAR_4) - FUNC_6(VAR_1, VAR_4);
 if (VAR_5) {
  if (sizeof(unsigned long) == sizeof(u64)) {
   VAR_6 = FUNC_3();
  } else {
   VAR_6 = FUNC_2();
   if (VAR_5 > VAR_0) {
    VAR_6 <<= 32;
    VAR_6 |= FUNC_2();
   }
  }
  FUNC_1(VAR_6, VAR_5, &VAR_6);
  VAR_1 += VAR_6;
 }

 return FUNC_6(VAR_1, VAR_4);
}
