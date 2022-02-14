
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int tfm; } ;
struct cryptd_queue {int cpu_queue; } ;
struct cryptd_cpu_queue {int work; int queue; } ;
typedef int refcount_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct crypto_async_request*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct cryptd_cpu_queue* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct cryptd_queue *VAR_2,
      struct crypto_async_request *VAR_3)
{
 int VAR_4, VAR_5;
 struct cryptd_cpu_queue *VAR_6;
 refcount_t *VAR_7;

 VAR_4 = FUNC_2();
 VAR_6 = FUNC_7(VAR_2->cpu_queue);
 VAR_5 = FUNC_0(&VAR_6->queue, VAR_3);

 VAR_7 = FUNC_1(VAR_3->tfm);

 if (VAR_5 == -VAR_0)
  goto out_put_cpu;

 FUNC_4(VAR_4, VAR_1, &VAR_6->work);

 if (!FUNC_6(VAR_7))
  goto out_put_cpu;

 FUNC_5(VAR_7);

out_put_cpu:
 FUNC_3();

 return VAR_5;
}
