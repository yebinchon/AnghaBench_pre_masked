
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_0, int VAR_1,
     unsigned long VAR_2)
{
 unsigned char *VAR_3;

 VAR_3 = (unsigned char *)FUNC_0(VAR_0);
 VAR_3 += VAR_1;
 *(unsigned long *) VAR_3 = VAR_2;
 return 0;
}
