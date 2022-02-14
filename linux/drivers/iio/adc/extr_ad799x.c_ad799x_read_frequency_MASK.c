
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad799x_state {int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 struct ad799x_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     char *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_3);
 struct ad799x_state *VAR_7 = FUNC_2(VAR_6);

 int VAR_8 = FUNC_1(VAR_7->client, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_3(VAR_5, "%u\n", VAR_2[VAR_8 & VAR_1]);
}
