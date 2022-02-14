
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mx25_gcq_priv {scalar_t__* vref; int clk; int irq; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mx25_gcq_priv*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mx25_gcq_priv* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct mx25_gcq_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_2(VAR_1);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_0(VAR_2->clk);
 for (VAR_3 = 4; VAR_3-- > 0;) {
  if (VAR_2->vref[VAR_3])
   FUNC_5(VAR_2->vref[VAR_3]);
 }

 return 0;
}
