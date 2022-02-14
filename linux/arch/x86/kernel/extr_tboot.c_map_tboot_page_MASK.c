
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
struct TYPE_4__ {int pgd; } ;
typedef TYPE_1__ pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_1__*,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 TYPE_1__* FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,int *,unsigned long) ;
 int * FUNC_4 (int *,int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_2, unsigned long VAR_3,
     pgprot_t VAR_4)
{
 pgd_t *VAR_5;
 p4d_t *VAR_6;
 pud_t *VAR_7;
 pmd_t *VAR_8;
 pte_t *VAR_9;

 VAR_5 = FUNC_2(&VAR_1, VAR_2);
 VAR_6 = FUNC_0(&VAR_1, VAR_5, VAR_2);
 if (!VAR_6)
  return -1;
 VAR_7 = FUNC_6(&VAR_1, VAR_6, VAR_2);
 if (!VAR_7)
  return -1;
 VAR_8 = FUNC_3(&VAR_1, VAR_7, VAR_2);
 if (!VAR_8)
  return -1;
 VAR_9 = FUNC_4(&VAR_1, VAR_8, VAR_2);
 if (!VAR_9)
  return -1;
 FUNC_7(&VAR_1, VAR_2, VAR_9, FUNC_1(VAR_3, VAR_4));
 FUNC_5(VAR_9);
 VAR_5->pgd &= ~VAR_0;

 return 0;
}
