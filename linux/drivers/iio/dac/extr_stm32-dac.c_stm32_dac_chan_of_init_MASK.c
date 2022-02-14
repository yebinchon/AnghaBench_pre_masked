
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct iio_dev {int num_channels; TYPE_1__* channels; TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct device_node*,char*,scalar_t__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 unsigned int VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, "reg", &VAR_5);
 if (VAR_6) {
  FUNC_1(&VAR_2->dev, "Failed to read reg property\n");
  return VAR_6;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].channel == VAR_5)
   break;
 }
 if (VAR_4 >= FUNC_0(VAR_1)) {
  FUNC_1(&VAR_2->dev, "Invalid reg property\n");
  return -VAR_0;
 }

 VAR_2->channels = &VAR_1[VAR_4];





 VAR_2->num_channels = 1;

 return 0;
}
