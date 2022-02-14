
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct neponset_drvdata {int base; int irq_base; int smc91x; int sa1111; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct neponset_drvdata*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 struct neponset_drvdata* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct neponset_drvdata *VAR_6 = FUNC_7(VAR_5);
 int VAR_7 = FUNC_8(VAR_5, 0);

 if (!FUNC_0(VAR_6->sa1111))
  FUNC_6(VAR_6->sa1111);
 if (!FUNC_0(VAR_6->smc91x))
  FUNC_6(VAR_6->smc91x);

 FUNC_1(&VAR_2);
 FUNC_1(&VAR_4);
 FUNC_1(&VAR_3);

 FUNC_4(VAR_7, ((void*)0));
 FUNC_3(VAR_6->irq_base, VAR_0);
 VAR_1 = ((void*)0);
 FUNC_2(VAR_6->base);
 FUNC_5(VAR_6);

 return 0;
}
