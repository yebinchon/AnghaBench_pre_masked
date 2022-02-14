
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int ebx; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int,unsigned long) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 int VAR_3;
 struct smm_regs *VAR_4 = VAR_2;
 int VAR_5 = VAR_4->eax;
 if (FUNC_4() != 0)
  return -VAR_0;
 asm volatile("pushl %%eax\n\t"
     "movl 0(%%eax),%%edx\n\t"
     "push %%edx\n\t"
     "movl 4(%%eax),%%ebx\n\t"
     "movl 8(%%eax),%%ecx\n\t"
     "movl 12(%%eax),%%edx\n\t"
     "movl 16(%%eax),%%esi\n\t"
     "movl 20(%%eax),%%edi\n\t"
     "popl %%eax\n\t"
     "out %%al,$0xb2\n\t"
     "out %%al,$0x84\n\t"
     "xchgl %%eax,(%%esp)\n\t"
     "movl %%ebx,4(%%eax)\n\t"
     "movl %%ecx,8(%%eax)\n\t"
     "movl %%edx,12(%%eax)\n\t"
     "movl %%esi,16(%%eax)\n\t"
     "movl %%edi,20(%%eax)\n\t"
     "popl %%edx\n\t"
     "movl %%edx,0(%%eax)\n\t"
     "lahf\n\t"
     "shrl $8,%%eax\n\t"
     "andl $1,%%eax\n"
     : "=a"(VAR_3)
     : "a"(VAR_4)
     : "%ebx", "%ecx", "%edx", "%esi", "%edi", "memory");

 if (VAR_3 != 0 || (VAR_4->eax & 0xffff) == 0xffff || VAR_4->eax == VAR_5)
  VAR_3 = -VAR_1;
 return VAR_3;
}
