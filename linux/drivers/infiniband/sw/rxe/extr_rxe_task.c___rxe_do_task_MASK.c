
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_task {int (* func ) (int ) ;int ret; int arg; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct rxe_task *VAR_0)

{
 int VAR_1;

 while ((VAR_1 = VAR_0->func(VAR_0->arg)) == 0)
  ;

 VAR_0->ret = VAR_1;

 return VAR_1;
}
