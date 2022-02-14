
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct decon_context {int regs; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 struct decon_context* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct decon_context *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_3(&VAR_1->dev);

 FUNC_2(VAR_2->regs);

 FUNC_0(&VAR_1->dev, &VAR_0);

 return 0;
}
