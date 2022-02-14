
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pmd_frag; void* pte_frag; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_0)
{
 void *VAR_1;

 VAR_1 = VAR_0->context.pte_frag;
 if (VAR_1)
  FUNC_1(VAR_1);

 VAR_1 = VAR_0->context.pmd_frag;
 if (VAR_1)
  FUNC_0(VAR_1);
 return;
}
