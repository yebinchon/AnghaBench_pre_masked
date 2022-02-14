
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7768_state {int mclk_freq; } ;
typedef int ssize_t ;
struct TYPE_3__ {int clk_div; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad7768_state* FUNC_3 (struct iio_dev*) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_2);
 struct ad7768_state *VAR_6 = FUNC_3(VAR_5);
 unsigned int VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  VAR_7 = FUNC_1(VAR_6->mclk_freq,
      VAR_1[VAR_8].clk_div);
  VAR_9 += FUNC_4(VAR_4 + VAR_9, VAR_0 - VAR_9, "%d ", VAR_7);
 }

 VAR_4[VAR_9 - 1] = '\n';

 return VAR_9;
}
