
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_3, unsigned long VAR_4,
           unsigned long VAR_5)
{
 if (FUNC_1(VAR_0)) {
  asm volatile("ptesync": : :"memory");
  FUNC_0(VAR_3, 0, VAR_5, VAR_2);
 }

 if (FUNC_1(VAR_1)) {
  asm volatile("ptesync": : :"memory");
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2);
 }
}
