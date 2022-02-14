
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,unsigned long,int*,int,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct task_struct *VAR_2, unsigned long VAR_3, int * VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, sizeof(int),
   VAR_1);
 return (VAR_5 == sizeof(int)) ? 0 : -VAR_0;
}
