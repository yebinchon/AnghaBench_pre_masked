
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kimage_arch {unsigned long cmdline; unsigned long initrd_start; unsigned long initrd_end; } ;
struct kimage {unsigned long head; unsigned long start; struct kimage_arch arch; int control_code_page; } ;
struct TYPE_4__ {unsigned long mem_free; } ;
struct TYPE_3__ {long long addr; } ;
typedef TYPE_1__ Elf64_Fdesc ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (void*,int ,int ) ;
 unsigned long FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,unsigned long) ;

void FUNC_8(struct kimage *VAR_9)
{



 void (*VAR_10)(unsigned long VAR_11,
        unsigned long VAR_12,
        unsigned long VAR_13);

 unsigned long VAR_14 = FUNC_6(VAR_9->control_code_page);
 void *VAR_15 = (void *)FUNC_0(VAR_0);
 struct kimage_arch *VAR_16 = &VAR_9->arch;

 FUNC_7(VAR_0, VAR_14);

 FUNC_2();





 VAR_10 = (void *)VAR_15;


 FUNC_5(VAR_15, FUNC_1(VAR_7),
  VAR_8);

 *(unsigned long *)(VAR_15 + VAR_3) = VAR_16->cmdline;
 *(unsigned long *)(VAR_15 + VAR_6) = VAR_16->initrd_start;
 *(unsigned long *)(VAR_15 + VAR_5) = VAR_16->initrd_end;
 *(unsigned long *)(VAR_15 + VAR_4) = VAR_1->mem_free;

 FUNC_2();
 FUNC_3();
 FUNC_4();

 VAR_10(VAR_9->head & VAR_2, VAR_9->start, VAR_14);
}
