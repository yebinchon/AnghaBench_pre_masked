
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned int VAR_1)
{
 unsigned int VAR_2 = (unsigned int) VAR_0;
 volatile unsigned int VAR_3 = 0;

 if (VAR_2 == VAR_1) {

  return;
 }

 __asm__ __volatile__ (
  "ldw	%2,0(%0)\n"
  "stw	%2,0(%1)\n"
  "ldw	%2,4(%0)\n"
  "stw	%2,4(%1)\n"
  "ldw	%2,8(%0)\n"
  "stw	%2,8(%1)\n"
  "flushd	0(%1)\n"
  "flushd	4(%1)\n"
  "flushd	8(%1)\n"
  "flushi %1\n"
  "addi	%1,%1,4\n"
  "flushi %1\n"
  "addi	%1,%1,4\n"
  "flushi %1\n"
  "flushp\n"
  :
  : "r" (VAR_2), "r" (VAR_1), "r" (VAR_3)
  : "memory"
 );
}
