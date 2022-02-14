
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int fpstate; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct thread_info *VAR_5 = VAR_4;

 if (VAR_3 == VAR_1)
  FUNC_0(&VAR_5->fpstate);

 return VAR_0;
}
