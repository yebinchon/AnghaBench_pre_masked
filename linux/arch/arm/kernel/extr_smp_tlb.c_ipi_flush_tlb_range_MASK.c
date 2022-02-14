
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_args {int ta_end; int ta_start; int ta_vma; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(void *VAR_0)
{
 struct tlb_args *VAR_1 = (struct tlb_args *)VAR_0;
 unsigned int VAR_2 = FUNC_2();

 FUNC_0(VAR_1->ta_vma, VAR_1->ta_start, VAR_1->ta_end);

 FUNC_1(VAR_2);
}
