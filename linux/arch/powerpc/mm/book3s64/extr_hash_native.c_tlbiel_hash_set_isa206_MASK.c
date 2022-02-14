
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = (VAR_0 << FUNC_0(51)) | (VAR_1 << FUNC_0(53));

 asm volatile("tlbiel %0" : : "r" (VAR_2));
}
