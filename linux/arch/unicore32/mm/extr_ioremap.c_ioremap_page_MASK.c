
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_type {int prot_pte; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,scalar_t__,unsigned long,int ) ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
   const struct mem_type *VAR_3)
{
 return FUNC_1(VAR_1, VAR_1 + VAR_0, VAR_2,
      FUNC_0(VAR_3->prot_pte));
}
