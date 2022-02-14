
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flush_count; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pud_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_7 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static inline pud_t FUNC_9(struct mm_struct *VAR_2,
          unsigned long VAR_3, pud_t *VAR_4)
{
 pud_t VAR_5;

 VAR_5 = *VAR_4;
 if (FUNC_5(VAR_5) & VAR_1)
  return VAR_5;
 FUNC_1(&VAR_2->context.flush_count);
 if (VAR_0 &&
     FUNC_2(FUNC_4(VAR_2), FUNC_3(FUNC_8())))
  FUNC_7(VAR_2, VAR_3, VAR_4);
 else
  FUNC_6(VAR_2, VAR_3, VAR_4);
 FUNC_0(&VAR_2->context.flush_count);
 return VAR_5;
}
