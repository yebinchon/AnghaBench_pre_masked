
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
 int FUNC_1 (int ,int ,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
          uintptr_t VAR_1,
          struct iio_chan_spec const *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct rescale *VAR_5 = FUNC_0(VAR_0);

 return FUNC_1(VAR_5->source,
       VAR_5->ext_info[VAR_1].name,
       VAR_3, VAR_4);
}
