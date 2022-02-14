
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long FUNC_0(const char *VAR_0, long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;

 asm volatile(
 "       cmpnei  %1, 0           \n"
 "       bf      3f              \n"
 "1:     cmpnei  %0, 0           \n"
 "       bf      3f              \n"
 "2:     ldb     %3, (%1, 0)     \n"
 "       cmpnei  %3, 0           \n"
 "       bf      3f              \n"
 "       subi    %0,  1          \n"
 "       addi    %1,  1          \n"
 "       br      1b              \n"
 "3:     subu    %2, %0          \n"
 "       addi    %2,  1          \n"
 "       br      5f              \n"
 "4:     movi    %0, 0           \n"
 "       br      5f              \n"
 ".section __ex_table, \"a\"     \n"
 ".align   2                     \n"
 ".long    2b, 4b                \n"
 ".previous                      \n"
 "5:                             \n"
 : "=r"(VAR_1), "=r"(VAR_0), "=r"(VAR_2), "=r"(VAR_3)
 : "0"(VAR_1), "1"(VAR_0), "2"(VAR_1)
 : "memory", "cc");

 return VAR_2;
}
