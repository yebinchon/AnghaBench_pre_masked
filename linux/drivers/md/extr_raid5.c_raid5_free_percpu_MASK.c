
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int percpu; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct r5conf *VAR_1)
{
 if (!VAR_1->percpu)
  return;

 FUNC_0(VAR_0, &VAR_1->node);
 FUNC_1(VAR_1->percpu);
}
