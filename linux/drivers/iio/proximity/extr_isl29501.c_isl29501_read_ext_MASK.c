
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isl29501_private {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;
typedef enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;


 int VAR_0 ;






 int VAR_1 ;
 struct isl29501_private* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct isl29501_private*,int,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_2,
     uintptr_t VAR_3,
     const struct iio_chan_spec *VAR_4,
     char *VAR_5)
{
 struct isl29501_private *VAR_6 = FUNC_0(VAR_2);
 enum isl29501_register_name VAR_7 = VAR_3;
 int VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_7) {
 case 129:
 case 128:
  VAR_8 = FUNC_1(VAR_6, VAR_7, &VAR_10);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = VAR_10;
  break;
 case 131:
 case 130:
 case 133:
 case 132:
  VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_12);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_6, VAR_7, &VAR_11);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = VAR_11 << VAR_12;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_5, "%u\n", VAR_9);
}
