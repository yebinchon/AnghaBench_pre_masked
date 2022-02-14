
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(unsigned VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0);

 VAR_3 &= ~VAR_1;
 VAR_3 |= VAR_2;

 FUNC_1(VAR_3, VAR_0);
}
