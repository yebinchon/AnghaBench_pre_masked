
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vdso; } ;
struct mm_struct {TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
typedef enum arch_vdso_type { ____Placeholder_arch_vdso_type } arch_vdso_type ;
struct TYPE_4__ {unsigned long vdso_pages; int cm; int dm; } ;


 void* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (struct mm_struct*,unsigned long,unsigned long,int,int ) ;
 unsigned long FUNC_5 (int *,int ,unsigned long,int ,int ) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int FUNC_6(enum arch_vdso_type VAR_8,
        struct mm_struct *VAR_9,
        struct linux_binprm *VAR_10,
        int VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14;
 void *VAR_15;

 VAR_13 = VAR_7[VAR_8].vdso_pages << VAR_0;

 VAR_14 = VAR_13 + VAR_1;

 VAR_12 = FUNC_5(((void*)0), 0, VAR_14, 0, 0);
 if (FUNC_2(VAR_12)) {
  VAR_15 = FUNC_0(VAR_12);
  goto up_fail;
 }

 VAR_15 = FUNC_4(VAR_9, VAR_12, VAR_1,
           VAR_6|VAR_4,
           VAR_7[VAR_8].dm);
 if (FUNC_1(VAR_15))
  goto up_fail;

 VAR_12 += VAR_1;
 VAR_9->context.vdso = (void *)VAR_12;
 VAR_15 = FUNC_4(VAR_9, VAR_12, VAR_13,
           VAR_6|VAR_2|
           VAR_4|VAR_5|VAR_3,
           VAR_7[VAR_8].cm);
 if (FUNC_1(VAR_15))
  goto up_fail;

 return 0;

up_fail:
 VAR_9->context.vdso = ((void*)0);
 return FUNC_3(VAR_15);
}
