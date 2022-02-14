
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int irq; scalar_t__ waken; } ;
struct iio_dev {int dummy; } ;


 struct zpa2326_private* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ) ;
 int FUNC_4 (struct iio_dev*,int ) ;
 int FUNC_5 (struct iio_dev*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_0)
{
 const struct zpa2326_private *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 if (!VAR_1->waken) {




  VAR_2 = FUNC_3(VAR_0, 0);
  if (VAR_2)
   goto err;
 }

 if (!FUNC_1(VAR_0) && VAR_1->waken) {




  VAR_2 = FUNC_4(VAR_0, VAR_1->irq);
  if (VAR_2)
   goto err;
 }


 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto err;

 return 0;

err:
 FUNC_5(VAR_0, "failed to enable buffering (%d)", VAR_2);

 return VAR_2;
}
