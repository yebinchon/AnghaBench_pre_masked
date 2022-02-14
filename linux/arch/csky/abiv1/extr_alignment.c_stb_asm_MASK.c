
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 asm volatile (
  "movi	%0, 0\n"
  "1:\n"
  "stb	%1, (%2)\n"
  "br	3f\n"
  "2:\n"
  "movi	%0, 1\n"
  "br	3f\n"
  ".section __ex_table,\"a\"\n"
  ".align 2\n"
  ".long	1b, 2b\n"
  ".previous\n"
  "3:\n"
  : "=&r"(VAR_2)
  : "r"(VAR_1), "r" (VAR_0)
 );

 return VAR_2;
}
