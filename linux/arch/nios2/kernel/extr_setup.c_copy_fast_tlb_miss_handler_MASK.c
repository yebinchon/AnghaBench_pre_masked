
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(unsigned int VAR_2)
{
 unsigned int VAR_3 = (unsigned int) VAR_0;
 unsigned int VAR_4 = (unsigned int) VAR_1;
 volatile unsigned int VAR_5 = 0;

 __asm__ __volatile__ (
  "1:\n"
  "	ldw	%3,0(%0)\n"
  "	stw	%3,0(%1)\n"
  "	flushd	0(%1)\n"
  "	flushi	%1\n"
  "	flushp\n"
  "	addi	%0,%0,4\n"
  "	addi	%1,%1,4\n"
  "	bne	%0,%2,1b\n"
  :
  : "r" (VAR_3), "r" (VAR_2), "r" (VAR_4), "r" (VAR_5)
  : "memory"
 );
}
