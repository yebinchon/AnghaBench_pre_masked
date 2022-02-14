
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_device {int pclk; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct amba_device *VAR_0)
{
 int VAR_1;

 VAR_0->pclk = FUNC_2(&VAR_0->dev, "apb_pclk");
 if (FUNC_0(VAR_0->pclk))
  return FUNC_1(VAR_0->pclk);

 VAR_1 = FUNC_3(VAR_0->pclk);
 if (VAR_1)
  FUNC_4(VAR_0->pclk);

 return VAR_1;
}
