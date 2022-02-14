
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long,int ) ;
 struct list_head* VAR_1 ;
 int * FUNC_1 (unsigned long,unsigned int*) ;
 unsigned long FUNC_2 (unsigned int) ;

__attribute__((used)) static struct list_head *FUNC_3(unsigned long VAR_2)
{
 unsigned int VAR_3;
 pte_t *VAR_4 = FUNC_1(VAR_2, &VAR_3);

 if (!VAR_4)
  return ((void*)0);
 VAR_2 &= FUNC_2(VAR_3);

 return &VAR_1[FUNC_0(VAR_2, VAR_0)];
}
