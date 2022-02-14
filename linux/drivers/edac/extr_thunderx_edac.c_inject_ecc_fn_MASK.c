
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_lmc {unsigned long long parity_test; unsigned int mask0; unsigned int mask2; scalar_t__ regs; int mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(void *VAR_5)
{
 struct thunderx_lmc *VAR_6 = VAR_5;
 uintptr_t VAR_7, VAR_8;
 unsigned int VAR_9 = FUNC_1();
 const unsigned int VAR_10 = VAR_3 / VAR_9;
 unsigned int VAR_11, VAR_12;

 VAR_7 = (uintptr_t)FUNC_3(VAR_6->mem);
 VAR_8 = (uintptr_t)FUNC_4(VAR_6->mem);

 VAR_12 = (VAR_8 & 0x7f) >> 4;
 VAR_6->parity_test &= ~(7ULL << 8);
 VAR_6->parity_test |= (VAR_12 << 8);

 FUNC_6(VAR_6->mask0, VAR_6->regs + VAR_0);
 FUNC_6(VAR_6->mask2, VAR_6->regs + VAR_1);
 FUNC_6(VAR_6->parity_test, VAR_6->regs + VAR_2);

 FUNC_5(VAR_6->regs + VAR_0);
 FUNC_5(VAR_6->regs + VAR_1);
 FUNC_5(VAR_6->regs + VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  FUNC_2((void *)VAR_7, VAR_4, VAR_9);
  FUNC_0();





  asm volatile("dc civac, %0\n"
        "dsb sy\n"
        : : "r"(VAR_7 + VAR_11 * VAR_9));
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {





  __asm__ volatile("sys #0,c11,C1,#2, %0\n"
     : : "r"(VAR_8 + VAR_11 * VAR_9));
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {





  __asm__ volatile("sys #0,c11,C1,#1, %0"
     : : "r"(VAR_8 + VAR_11 * VAR_9));
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {





  asm volatile("dc ivac, %0\n"
        "dsb sy\n"
        : : "r"(VAR_7 + VAR_11 * VAR_9));
 }

 return 0;
}
