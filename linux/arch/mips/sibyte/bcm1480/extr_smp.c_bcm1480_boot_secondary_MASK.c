
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,int *,int ,unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct task_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(FUNC_2(VAR_1), &VAR_0,
          FUNC_0(VAR_2),
          (unsigned long)FUNC_4(VAR_2), 0);
 if (VAR_3 != 0)
  FUNC_3("cfe_start_cpu(%i) returned %i\n" , VAR_1, VAR_3);
 return VAR_3;
}
