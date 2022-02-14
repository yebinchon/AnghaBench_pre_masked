
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int clockid_t ;


 int FUNC_0 () ;







 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 const struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 const clockid_t VAR_4 = FUNC_2(VAR_3);
 const char *VAR_5;
 ssize_t VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_5 = "realtime\n";
  VAR_6 = sizeof("realtime\n");
  break;
 case 133:
  VAR_5 = "monotonic\n";
  VAR_6 = sizeof("monotonic\n");
  break;
 case 131:
  VAR_5 = "monotonic_raw\n";
  VAR_6 = sizeof("monotonic_raw\n");
  break;
 case 129:
  VAR_5 = "realtime_coarse\n";
  VAR_6 = sizeof("realtime_coarse\n");
  break;
 case 132:
  VAR_5 = "monotonic_coarse\n";
  VAR_6 = sizeof("monotonic_coarse\n");
  break;
 case 134:
  VAR_5 = "boottime\n";
  VAR_6 = sizeof("boottime\n");
  break;
 case 128:
  VAR_5 = "tai\n";
  VAR_6 = sizeof("tai\n");
  break;
 default:
  FUNC_0();
 }

 FUNC_3(VAR_2, VAR_5, VAR_6);
 return VAR_6;
}
