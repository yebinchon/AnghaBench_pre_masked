
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static inline void
FUNC_7(uint32_t VAR_0, uint64_t *VAR_1, uint32_t *VAR_2)
{

 if (FUNC_6()) {
  *VAR_1 = (uint64_t)FUNC_5(FUNC_1(VAR_0)) << 32 |
      FUNC_5(FUNC_2(VAR_0));
  *VAR_2 = FUNC_5(FUNC_4(VAR_0));
 } else {
  *VAR_1 = (uint64_t)FUNC_5(FUNC_0(VAR_0)) << 12;
  *VAR_2 = FUNC_5(FUNC_3(VAR_0));
 }
}
