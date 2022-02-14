
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {int worker; int wq; int suspended; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct era *VAR_0)
{
 if (!FUNC_0(&VAR_0->suspended))
  FUNC_1(VAR_0->wq, &VAR_0->worker);
}
