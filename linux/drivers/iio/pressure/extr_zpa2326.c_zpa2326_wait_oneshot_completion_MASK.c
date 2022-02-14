
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int result; int regmap; int data_ready; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 long FUNC_1 (int *,int ) ;
 int FUNC_2 (struct iio_dev const*,char*) ;
 int FUNC_3 (struct iio_dev const*,char*,...) ;

__attribute__((used)) static int FUNC_4(const struct iio_dev *VAR_4,
        struct zpa2326_private *VAR_5)
{
 unsigned int VAR_6;
 long VAR_7;

 FUNC_2(VAR_4, "waiting for one shot completion interrupt");

 VAR_7 = FUNC_1(
  &VAR_5->data_ready, VAR_2);
 if (VAR_7 > 0)




  return VAR_5->result;


 FUNC_0(VAR_5->regmap, VAR_3, &VAR_6);

 if (!VAR_7) {

  FUNC_3(VAR_4, "no one shot interrupt occurred (%ld)",
        VAR_7);
  return -VAR_1;
 }

 FUNC_3(VAR_4, "wait for one shot interrupt cancelled");
 return -VAR_0;
}
