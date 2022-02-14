
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_work {int complete; int worker; } ;
struct pool {int wq; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pool_work *VAR_0, struct pool *VAR_1,
      void (*VAR_2)(struct work_struct *))
{
 FUNC_0(&VAR_0->worker, VAR_2);
 FUNC_1(&VAR_0->complete);
 FUNC_2(VAR_1->wq, &VAR_0->worker);
 FUNC_3(&VAR_0->complete);
}
