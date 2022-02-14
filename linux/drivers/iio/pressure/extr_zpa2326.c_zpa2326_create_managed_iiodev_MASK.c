
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpa2326_private {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int * info; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct iio_dev *FUNC_2(struct device *VAR_3,
           const char *VAR_4,
           struct regmap *VAR_5)
{
 struct iio_dev *VAR_6;


 VAR_6 = FUNC_1(VAR_3,
       sizeof(struct zpa2326_private));
 if (!VAR_6)
  return ((void*)0);


 VAR_6->modes = VAR_0;
 VAR_6->dev.parent = VAR_3;
 VAR_6->channels = VAR_1;
 VAR_6->num_channels = FUNC_0(VAR_1);
 VAR_6->name = VAR_4;
 VAR_6->info = &VAR_2;

 return VAR_6;
}
