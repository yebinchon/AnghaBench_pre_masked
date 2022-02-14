
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev_attr {size_t address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int irq_sim; TYPE_1__* regs; } ;
struct TYPE_3__ {size_t reg_id; unsigned long reg_data; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 struct iio_dev_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3,
         size_t VAR_4)
{
 struct iio_dev_attr *VAR_5 = FUNC_2(VAR_2);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_0->regs[VAR_5->address].reg_id = VAR_5->address;
 VAR_0->regs[VAR_5->address].reg_data = VAR_6;

 FUNC_0(&VAR_0->irq_sim, VAR_5->address);

 return VAR_4;
}
