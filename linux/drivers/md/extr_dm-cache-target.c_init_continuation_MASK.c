
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuation {scalar_t__ input; int ws; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;

__attribute__((used)) static inline void FUNC_1(struct continuation *VAR_0,
         void (*VAR_1)(struct work_struct *))
{
 FUNC_0(&VAR_0->ws, VAR_1);
 VAR_0->input = 0;
}
