
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async {int tid; int pid; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,char*,int ) ;

int FUNC_3(struct async *VAR_0)
{



 void *VAR_1 = (void *)(intptr_t)(-1);

 if (FUNC_1(VAR_0->tid, &VAR_1))
  FUNC_0("pthread_join failed");
 return (int)(intptr_t)VAR_1;

}
