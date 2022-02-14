
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ cpumask_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct mm_struct*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_2)
{
 int VAR_3;
 cpumask_t VAR_4 = { VAR_0 };

 if (!FUNC_1())
  return;

 VAR_3 = FUNC_2();
 FUNC_0(VAR_3, VAR_2, &VAR_4);
 FUNC_4(&VAR_4, VAR_1, ((void*)0), 1);
 FUNC_3();
}
