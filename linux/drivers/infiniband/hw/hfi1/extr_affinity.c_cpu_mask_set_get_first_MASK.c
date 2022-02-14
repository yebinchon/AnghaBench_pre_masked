
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_mask_set {int used; int mask; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int FUNC_0 (struct cpu_mask_set*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct cpu_mask_set *VAR_2, cpumask_var_t VAR_3)
{
 int VAR_4;

 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2);


 FUNC_1(VAR_3, &VAR_2->mask, &VAR_2->used);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 >= VAR_1)
  VAR_4 = -VAR_0;
 else
  FUNC_3(VAR_4, &VAR_2->used);

 return VAR_4;
}
