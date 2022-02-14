
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rescale {TYPE_1__* ext_info; int source; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int name; } ;


 struct rescale* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
         uintptr_t VAR_1,
         struct iio_chan_spec const *VAR_2,
         char *VAR_3)
{
 struct rescale *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4->source,
      VAR_4->ext_info[VAR_1].name,
      VAR_3);
}
