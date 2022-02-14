
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flush_count; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mm_struct*,unsigned long,int *,int) ;
 int FUNC_7 (struct mm_struct*,unsigned long,int *,int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline pte_t FUNC_10(struct mm_struct *VAR_2,
          unsigned long VAR_3, pte_t *VAR_4,
          int VAR_5)
{
 pte_t VAR_6;

 VAR_6 = *VAR_4;
 if (FUNC_9(FUNC_5(VAR_6) & VAR_1))
  return VAR_6;
 FUNC_1(&VAR_2->context.flush_count);
 if (VAR_0 &&
     FUNC_2(FUNC_4(VAR_2), FUNC_3(FUNC_8())))
  FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(&VAR_2->context.flush_count);
 return VAR_6;
}
