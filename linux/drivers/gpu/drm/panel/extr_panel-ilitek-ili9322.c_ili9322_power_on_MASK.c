
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9322 {int reset_gpio; int dev; int supplies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ili9322 *VAR_0)
{
 int VAR_1;


 FUNC_2(VAR_0->reset_gpio, 1);

 VAR_1 = FUNC_4(FUNC_0(VAR_0->supplies), VAR_0->supplies);
 if (VAR_1 < 0) {
  FUNC_1(VAR_0->dev, "unable to enable regulators\n");
  return VAR_1;
 }
 FUNC_3(20);


 FUNC_2(VAR_0->reset_gpio, 0);

 FUNC_3(10);

 return 0;
}
