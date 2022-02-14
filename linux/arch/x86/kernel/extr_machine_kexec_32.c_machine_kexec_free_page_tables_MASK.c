
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pte1; int * pte0; int * pmd1; int * pmd0; int * pgd; } ;
struct kimage {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct kimage *VAR_1)
{
 FUNC_1((unsigned long)VAR_1->arch.pgd, VAR_0);
 VAR_1->arch.pgd = ((void*)0);






 FUNC_0((unsigned long)VAR_1->arch.pte0);
 VAR_1->arch.pte0 = ((void*)0);
 FUNC_0((unsigned long)VAR_1->arch.pte1);
 VAR_1->arch.pte1 = ((void*)0);
}
