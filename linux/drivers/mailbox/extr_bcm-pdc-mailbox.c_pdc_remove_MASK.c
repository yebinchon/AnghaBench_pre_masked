
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pdc_state {int ring_pool; int rx_buf_pool; int rx_tasklet; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pdc_state*) ;
 struct pdc_state* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct pdc_state *VAR_1 = FUNC_3(VAR_0);

 FUNC_1();

 FUNC_4(&VAR_1->rx_tasklet);

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->rx_buf_pool);
 FUNC_0(VAR_1->ring_pool);
 return 0;
}
