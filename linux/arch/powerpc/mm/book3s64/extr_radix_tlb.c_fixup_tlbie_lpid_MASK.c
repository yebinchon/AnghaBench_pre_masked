
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(unsigned long VAR_4)
{




 unsigned long VAR_5 = ((1UL << 52) - 1);

 if (FUNC_2(VAR_0)) {
  asm volatile("ptesync": : :"memory");
  FUNC_0(0, VAR_3);
 }

 if (FUNC_2(VAR_1)) {
  asm volatile("ptesync": : :"memory");
  FUNC_1(VAR_5, VAR_4, FUNC_3(VAR_2), VAR_3);
 }
}
