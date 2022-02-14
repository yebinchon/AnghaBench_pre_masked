
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_cep {int in_use; int lock; int waitq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct siw_cep *VAR_1)
{
 unsigned long VAR_2;
retry:
 FUNC_2(&VAR_1->lock, VAR_2);

 if (VAR_1->in_use) {
  FUNC_3(&VAR_1->lock, VAR_2);
  FUNC_4(VAR_1->waitq, !VAR_1->in_use);
  if (FUNC_1(VAR_0))
   FUNC_0(VAR_0);
  goto retry;
 } else {
  VAR_1->in_use = 1;
  FUNC_3(&VAR_1->lock, VAR_2);
 }
}
