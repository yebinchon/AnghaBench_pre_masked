
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ltq_atm_ops {int (* shutdown ) () ;int (* stop ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__* port; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 () ;
 struct ltq_atm_ops* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 int VAR_6;
 struct ltq_atm_ops *VAR_7 = FUNC_4(VAR_5);

 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);

 FUNC_3();

 VAR_7->stop(0);

 FUNC_2(VAR_1, &VAR_2);

 for ( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
  FUNC_0(VAR_2.port[VAR_6].dev);

 VAR_7->shutdown();

 FUNC_1();

 return 0;
}
