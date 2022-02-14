
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *,unsigned long,int **) ;
 int FUNC_3 (int ,unsigned long,int *,int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gmap *VAR_7, unsigned long VAR_8,
       pmd_t *VAR_9, int VAR_10, unsigned long VAR_11)
{
 int VAR_12;
 pte_t *VAR_13;
 spinlock_t *VAR_14 = ((void*)0);
 unsigned long VAR_15 = 0;

 if (FUNC_1(*VAR_9) & VAR_6)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_7->mm, VAR_9, VAR_8, &VAR_14);
 if (!VAR_13)
  return -VAR_1;

 VAR_15 |= (VAR_11 & VAR_2) ? VAR_4 : 0;
 VAR_15 |= (VAR_11 & VAR_3) ? VAR_5 : 0;

 VAR_12 = FUNC_3(VAR_7->mm, VAR_8, VAR_13, VAR_10, VAR_15);
 FUNC_0(VAR_14);
 return VAR_12;
}
