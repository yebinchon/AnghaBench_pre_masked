
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int core; int iface; int bus; int dma; int done_tasklet; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qce_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qce_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct qce_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(&VAR_1->done_tasklet);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->dma);
 FUNC_0(VAR_1->bus);
 FUNC_0(VAR_1->iface);
 FUNC_0(VAR_1->core);
 return 0;
}
