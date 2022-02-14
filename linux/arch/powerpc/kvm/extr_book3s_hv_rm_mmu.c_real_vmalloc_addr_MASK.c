
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 int * FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_2;
 pte_t *VAR_4;





 VAR_4 = FUNC_1(VAR_3, ((void*)0));
 if (!VAR_4 || !FUNC_3(*VAR_4))
  return ((void*)0);
 VAR_3 = (FUNC_2(*VAR_4) << VAR_1) | (VAR_3 & ~VAR_0);
 return FUNC_0(VAR_3);
}
