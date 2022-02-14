
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int irq; int data_ready; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int,int ,int ,int,int ,struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4,
        struct iio_dev *VAR_5,
        struct zpa2326_private *VAR_6,
        int VAR_7)
{
 int VAR_8;

 VAR_6->irq = VAR_7;

 if (VAR_7 <= 0) {




  FUNC_1(VAR_4, "no interrupt found, running in polling mode");
  return 0;
 }

 FUNC_4(&VAR_6->data_ready);


 VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_2,
     VAR_3,
     VAR_1 | VAR_0,
     FUNC_2(VAR_4), VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4, "failed to request interrupt %d (%d)", VAR_7,
   VAR_8);
  return VAR_8;
 }

 FUNC_1(VAR_4, "using interrupt %d", VAR_7);

 return 0;
}
