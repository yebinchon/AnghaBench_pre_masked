
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct gmap*) ;
 unsigned long* FUNC_2 (struct gmap*,unsigned long,int) ;
 int * FUNC_3 (int ,int *,unsigned long,int **) ;

__attribute__((used)) static pte_t *FUNC_4(struct gmap *VAR_1, unsigned long VAR_2,
          spinlock_t **VAR_3)
{
 unsigned long *VAR_4;

 FUNC_0(FUNC_1(VAR_1));

 VAR_4 = FUNC_2(VAR_1, VAR_2, 1);
 if (!VAR_4 || *VAR_4 & VAR_0)
  return ((void*)0);
 return FUNC_3(VAR_1->mm, (pmd_t *) VAR_4, VAR_2, VAR_3);
}
