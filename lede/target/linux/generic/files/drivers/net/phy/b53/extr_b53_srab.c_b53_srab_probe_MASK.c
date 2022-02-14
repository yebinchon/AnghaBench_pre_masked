
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b53_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct b53_platform_data {int regs; } ;
struct b53_device {struct b53_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct b53_device* FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct platform_device*,struct b53_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct b53_platform_data *VAR_4 = VAR_3->dev.platform_data;
 struct b53_device *VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_3->dev, &VAR_2, VAR_4->regs);
 if (!VAR_5)
  return -VAR_1;

 if (VAR_4)
  VAR_5->pdata = VAR_4;

 FUNC_2(VAR_3, VAR_5);

 return FUNC_1(VAR_5);
}
