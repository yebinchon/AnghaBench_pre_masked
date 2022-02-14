
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(
  unsigned int VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = (VAR_1 & 0xf) << 1;
 unsigned long VAR_4 = 3 << VAR_3;
 unsigned long VAR_5 = VAR_2 << VAR_3;
 unsigned long VAR_6 = VAR_1 < 16 ? FUNC_0(VAR_0) : FUNC_1(VAR_0);

 FUNC_2(VAR_6, VAR_4, VAR_5);
}
