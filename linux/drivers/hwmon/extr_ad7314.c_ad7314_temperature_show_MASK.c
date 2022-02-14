
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7314_data {int spi_dev; } ;
typedef int ssize_t ;
typedef int s16 ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;

 int FUNC_1 (struct ad7314_data*) ;


 struct ad7314_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
           struct device_attribute *VAR_5,
           char *VAR_6)
{
 struct ad7314_data *VAR_7 = FUNC_2(VAR_4);
 s16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 switch (FUNC_4(VAR_7->spi_dev)->driver_data) {
 case 130:
  VAR_8 = (VAR_9 & VAR_0) >> VAR_1;
  VAR_8 = FUNC_3(VAR_8, 9);

  return FUNC_5(VAR_6, "%d\n", 250 * VAR_8);
 case 129:
 case 128:





  VAR_8 = VAR_9 & VAR_2;
  VAR_8 = FUNC_3(VAR_8, 13);

  return FUNC_5(VAR_6, "%d\n",
          FUNC_0(VAR_8 * 3125, 100));
 default:
  return -VAR_3;
 }
}
