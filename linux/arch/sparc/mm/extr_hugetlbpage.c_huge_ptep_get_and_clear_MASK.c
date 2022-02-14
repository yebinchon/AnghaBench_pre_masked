
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int hugetlb_pte_count; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,int ,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

pte_t FUNC_6(struct mm_struct *VAR_7, unsigned long VAR_8,
         pte_t *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 pte_t VAR_15;

 VAR_15 = *VAR_9;
 VAR_14 = FUNC_2(VAR_15);

 VAR_13 = VAR_1;
 if (VAR_14 >= VAR_5)
  VAR_13 = VAR_4;
 else if (VAR_14 >= VAR_3)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_1;

 VAR_11 = VAR_14 >> VAR_13;
 VAR_12 = FUNC_4(VAR_15) ? VAR_1 : FUNC_1(VAR_15);

 if (FUNC_5(VAR_15))
  VAR_7->context.hugetlb_pte_count -= VAR_11;

 VAR_8 &= ~(VAR_14 - 1);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  VAR_9[VAR_10] = FUNC_0(0UL);

 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_15, 0, VAR_12);

 if (VAR_14 == VAR_0)
  FUNC_3(VAR_7, VAR_8 + VAR_6, VAR_9, VAR_15, 0,
        VAR_12);

 return VAR_15;
}
