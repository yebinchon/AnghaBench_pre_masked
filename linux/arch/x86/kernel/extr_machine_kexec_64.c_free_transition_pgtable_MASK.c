
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pte; int * pmd; int * pud; int * p4d; } ;
struct kimage {TYPE_1__ arch; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kimage *VAR_0)
{
 FUNC_0((unsigned long)VAR_0->arch.p4d);
 VAR_0->arch.p4d = ((void*)0);
 FUNC_0((unsigned long)VAR_0->arch.pud);
 VAR_0->arch.pud = ((void*)0);
 FUNC_0((unsigned long)VAR_0->arch.pmd);
 VAR_0->arch.pmd = ((void*)0);
 FUNC_0((unsigned long)VAR_0->arch.pte);
 VAR_0->arch.pte = ((void*)0);
}
