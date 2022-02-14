
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_data {int * base; int * node; } ;


 int FUNC_0 (struct ccu_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ccu_data *VAR_0)
{
 if (!VAR_0->base)
  return;

 FUNC_2(VAR_0->node);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0->node);
 VAR_0->node = ((void*)0);
 FUNC_1(VAR_0->base);
 VAR_0->base = ((void*)0);
}
