
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_1__* buffer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int address; } ;
struct TYPE_3__ {int scan_mask; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 int VAR_3;
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);


 VAR_3 = !!FUNC_2(FUNC_3(VAR_1)->address,
         VAR_4->buffer->scan_mask);

 return FUNC_1(VAR_2, "%d\n", VAR_3);
}
