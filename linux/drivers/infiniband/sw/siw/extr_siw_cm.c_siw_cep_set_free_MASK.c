
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_cep {int waitq; int lock; scalar_t__ in_use; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct siw_cep *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_0->in_use = 0;
 FUNC_1(&VAR_0->lock, VAR_1);

 FUNC_2(&VAR_0->waitq);
}
