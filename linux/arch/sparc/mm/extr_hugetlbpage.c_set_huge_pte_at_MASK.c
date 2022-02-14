
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
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,int ,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct mm_struct *VAR_7, unsigned long VAR_8,
       pte_t *VAR_9, pte_t VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 pte_t VAR_16;

 VAR_15 = FUNC_2(VAR_10);

 VAR_13 = VAR_1;
 if (VAR_15 >= VAR_5)
  VAR_13 = VAR_4;
 else if (VAR_15 >= VAR_3)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_1;

 VAR_11 = VAR_15 >> VAR_13;

 if (!FUNC_5(*VAR_9) && FUNC_5(VAR_10))
  VAR_7->context.hugetlb_pte_count += VAR_11;

 VAR_8 &= ~(VAR_15 - 1);
 VAR_16 = *VAR_9;
 VAR_12 = FUNC_4(VAR_16) ? VAR_1 : FUNC_1(VAR_16);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  VAR_9[VAR_14] = FUNC_0(FUNC_6(VAR_10) + (VAR_14 << VAR_13));

 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_16, 0, VAR_12);

 if (VAR_15 == VAR_0)
  FUNC_3(VAR_7, VAR_8 + VAR_6, VAR_9, VAR_16, 0,
        VAR_12);
}
