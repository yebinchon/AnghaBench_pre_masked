
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbiel_va_range {int also_pwc; int psize; int page_size; int pid; int end; int start; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct tlbiel_va_range *VAR_1 = VAR_0;

 FUNC_0(VAR_1->start, VAR_1->end, VAR_1->pid, VAR_1->page_size,
        VAR_1->psize, VAR_1->also_pwc);
}
