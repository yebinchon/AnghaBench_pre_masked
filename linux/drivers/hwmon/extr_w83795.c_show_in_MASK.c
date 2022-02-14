
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct w83795_data {int** in; int has_gain; int** in_lsb; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;



 size_t VAR_0 ;
 size_t VAR_1 ;
 int** VAR_2 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83795_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_2(VAR_4);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 struct w83795_data *VAR_9 = FUNC_3(VAR_3);
 u16 VAR_10 = VAR_9->in[VAR_8][VAR_7];
 u8 VAR_11;

 switch (VAR_7) {
 case 128:

  if ((VAR_8 >= 17) &&
      !((VAR_9->has_gain >> (VAR_8 - 17)) & 1))
   VAR_10 *= 8;
  break;
 case 129:
 case 130:
  VAR_11 = VAR_2[VAR_8][VAR_0];
  VAR_10 <<= 2;
  VAR_10 |= (VAR_9->in_lsb[VAR_11][VAR_7] >>
   VAR_2[VAR_8][VAR_1]) & 0x03;
  if ((VAR_8 >= 17) &&
      !((VAR_9->has_gain >> (VAR_8 - 17)) & 1))
   VAR_10 *= 8;
  break;
 }
 VAR_10 = FUNC_0(VAR_8, VAR_10);

 return FUNC_1(VAR_5, "%d\n", VAR_10);
}
