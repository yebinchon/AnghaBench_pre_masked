
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int flushing; int tasklet; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct context *VAR_0)
{
 FUNC_1(&VAR_0->tasklet);

 VAR_0->flushing = 1;
 FUNC_0((unsigned long)VAR_0);
 VAR_0->flushing = 0;

 FUNC_2(&VAR_0->tasklet);
}
