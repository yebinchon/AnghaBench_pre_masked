
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 long FUNC_3 (int) ;

void FUNC_4(void)
{
    long VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    VAR_0 = FUNC_3(0x0001);
    VAR_1 = FUNC_3(0x0002);
    VAR_2 = FUNC_3(0x0004);
    VAR_3 = FUNC_3(0x0008);
    VAR_4 = FUNC_3(0x0010);
    VAR_5 = FUNC_3(0x0020);

    FUNC_0("0x4000");

    FUNC_0("(%%eax)");
    FUNC_0("(%%ebx)");
    FUNC_0("(%%ecx)");
    FUNC_0("(%%edx)");
    FUNC_0("(%%esi)");
    FUNC_0("(%%edi)");

    FUNC_0("0x40(%%eax)");
    FUNC_0("0x40(%%ebx)");
    FUNC_0("0x40(%%ecx)");
    FUNC_0("0x40(%%edx)");
    FUNC_0("0x40(%%esi)");
    FUNC_0("0x40(%%edi)");

    FUNC_0("0x4000(%%eax)");
    FUNC_0("0x4000(%%ebx)");
    FUNC_0("0x4000(%%ecx)");
    FUNC_0("0x4000(%%edx)");
    FUNC_0("0x4000(%%esi)");
    FUNC_0("0x4000(%%edi)");

    FUNC_0("(%%eax, %%ecx)");
    FUNC_0("(%%ebx, %%edx)");
    FUNC_0("(%%ecx, %%ecx)");
    FUNC_0("(%%edx, %%ecx)");
    FUNC_0("(%%esi, %%ecx)");
    FUNC_0("(%%edi, %%ecx)");

    FUNC_0("0x40(%%eax, %%ecx)");
    FUNC_0("0x4000(%%ebx, %%edx)");

    FUNC_0("(%%ecx, %%ecx, 2)");
    FUNC_0("(%%edx, %%ecx, 4)");
    FUNC_0("(%%esi, %%ecx, 8)");

    FUNC_0("(,%%eax, 2)");
    FUNC_0("(,%%ebx, 4)");
    FUNC_0("(,%%ecx, 8)");

    FUNC_0("0x40(,%%eax, 2)");
    FUNC_0("0x40(,%%ebx, 4)");
    FUNC_0("0x40(,%%ecx, 8)");


    FUNC_0("-10(%%ecx, %%ecx, 2)");
    FUNC_0("-10(%%edx, %%ecx, 4)");
    FUNC_0("-10(%%esi, %%ecx, 8)");

    FUNC_0("0x4000(%%ecx, %%ecx, 2)");
    FUNC_0("0x4000(%%edx, %%ecx, 4)");
    FUNC_0("0x4000(%%esi, %%ecx, 8)");


    FUNC_2("0x4000");
    FUNC_2("0x4000(%%rip)");

    FUNC_2("(%%rax)");
    FUNC_2("(%%rbx)");
    FUNC_2("(%%rcx)");
    FUNC_2("(%%rdx)");
    FUNC_2("(%%rsi)");
    FUNC_2("(%%rdi)");

    FUNC_2("0x40(%%rax)");
    FUNC_2("0x40(%%rbx)");
    FUNC_2("0x40(%%rcx)");
    FUNC_2("0x40(%%rdx)");
    FUNC_2("0x40(%%rsi)");
    FUNC_2("0x40(%%rdi)");

    FUNC_2("0x4000(%%rax)");
    FUNC_2("0x4000(%%rbx)");
    FUNC_2("0x4000(%%rcx)");
    FUNC_2("0x4000(%%rdx)");
    FUNC_2("0x4000(%%rsi)");
    FUNC_2("0x4000(%%rdi)");

    FUNC_2("(%%rax, %%rcx)");
    FUNC_2("(%%rbx, %%rdx)");
    FUNC_2("(%%rcx, %%rcx)");
    FUNC_2("(%%rdx, %%rcx)");
    FUNC_2("(%%rsi, %%rcx)");
    FUNC_2("(%%rdi, %%rcx)");

    FUNC_2("0x40(%%rax, %%rcx)");
    FUNC_2("0x4000(%%rbx, %%rdx)");

    FUNC_2("(%%rcx, %%rcx, 2)");
    FUNC_2("(%%rdx, %%rcx, 4)");
    FUNC_2("(%%rsi, %%rcx, 8)");

    FUNC_2("(,%%rax, 2)");
    FUNC_2("(,%%rbx, 4)");
    FUNC_2("(,%%rcx, 8)");

    FUNC_2("0x40(,%%rax, 2)");
    FUNC_2("0x40(,%%rbx, 4)");
    FUNC_2("0x40(,%%rcx, 8)");


    FUNC_2("-10(%%rcx, %%rcx, 2)");
    FUNC_2("-10(%%rdx, %%rcx, 4)");
    FUNC_2("-10(%%rsi, %%rcx, 8)");

    FUNC_2("0x4000(%%rcx, %%rcx, 2)");
    FUNC_2("0x4000(%%rdx, %%rcx, 4)");
    FUNC_2("0x4000(%%rsi, %%rcx, 8)");
}
