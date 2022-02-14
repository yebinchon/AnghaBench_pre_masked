
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 unsigned long FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline int FUNC_1(unsigned long VAR_3, struct task_struct *VAR_4,
      unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = FUNC_0(VAR_4);

 VAR_6 = (unsigned long)VAR_1[VAR_7];
 if (VAR_3 >= VAR_6 && VAR_3 <= VAR_6 + VAR_0 - VAR_5)
  return 1;

 VAR_6 = (unsigned long)VAR_2[VAR_7];
 if (VAR_3 >= VAR_6 && VAR_3 <= VAR_6 + VAR_0 - VAR_5)
  return 1;

 return 0;
}
