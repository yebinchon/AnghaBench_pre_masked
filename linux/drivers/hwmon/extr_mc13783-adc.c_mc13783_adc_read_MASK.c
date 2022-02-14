
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {unsigned int index; } ;
struct mc13783_adc_priv {int mc13xxx; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mc13783_adc_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int,int ,int ,unsigned int*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, unsigned int *VAR_3)
{
 struct mc13783_adc_priv *VAR_4 = FUNC_0(VAR_1);
 struct sensor_device_attribute *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6 = VAR_5->index;
 unsigned int VAR_7[4];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4->mc13xxx,
   VAR_0,
   VAR_6, 0, 0, VAR_7);
 if (VAR_8)
  return VAR_8;


 if (VAR_6 >= 16)
  VAR_6 = 7;

 VAR_6 &= 0x7;

 *VAR_3 = (VAR_7[VAR_6 % 4] >> (VAR_6 > 3 ? 14 : 2)) & 0x3ff;

 return 0;
}
