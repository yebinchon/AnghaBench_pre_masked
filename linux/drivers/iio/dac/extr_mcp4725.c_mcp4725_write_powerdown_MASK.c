
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4725_data {TYPE_1__* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 struct mcp4725_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct iio_dev *VAR_0,
  uintptr_t VAR_1, const struct iio_chan_spec *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct mcp4725_data *VAR_5 = FUNC_0(VAR_0);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_7 = FUNC_2(&VAR_5->client->dev);
 else
  VAR_7 = FUNC_1(&VAR_5->client->dev);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
