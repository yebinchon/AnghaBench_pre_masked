
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Xsig ;



__attribute__((used)) static inline void FUNC_0(Xsig *VAR_0, const Xsig *VAR_1)
{
 asm volatile ("movl %1,%%edi; movl %2,%%esi;\n"
        "movl (%%esi),%%eax; addl %%eax,(%%edi);\n"
        "movl 4(%%esi),%%eax; adcl %%eax,4(%%edi);\n"
        "movl 8(%%esi),%%eax; adcl %%eax,8(%%edi);\n":"=g"
        (*VAR_0):"g"(VAR_0), "g"(VAR_1)
        :"ax", "si", "di");
}
