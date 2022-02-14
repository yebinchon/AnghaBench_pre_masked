
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned long VAR_0, unsigned long VAR_1)
{
 asm volatile(
  "	.insn	rrf,0xb98e0000,%0,%1,0,0"
  : : "a" (VAR_0), "a" (VAR_1) : "cc", "memory");
}
