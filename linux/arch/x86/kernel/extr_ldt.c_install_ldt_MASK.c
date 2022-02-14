
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int ldt; } ;
struct mm_struct {TYPE_1__ context; } ;
struct ldt_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct mm_struct*,int) ;
 int FUNC_4 (int *,struct ldt_struct*) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_1, struct ldt_struct *VAR_2)
{
 FUNC_1(&VAR_1->context.lock);


 FUNC_4(&VAR_1->context.ldt, VAR_2);


 FUNC_3(FUNC_0(VAR_1), VAR_0, VAR_1, 1);

 FUNC_2(&VAR_1->context.lock);
}
