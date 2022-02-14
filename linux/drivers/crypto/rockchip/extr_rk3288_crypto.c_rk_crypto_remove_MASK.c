
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int queue_task; int done_task; } ;
struct platform_device {int dummy; } ;


 struct rk_crypto_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct rk_crypto_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1();
 FUNC_2(&VAR_1->done_task);
 FUNC_2(&VAR_1->queue_task);
 return 0;
}
