
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_mask_set {int used; } ;


 int FUNC_0 (struct cpu_mask_set*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct cpu_mask_set *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_1, &VAR_0->used);
 FUNC_0(VAR_0);
}
