
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int stat1; int stat2; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 struct amc6821_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_7,
          struct device_attribute *VAR_8, char *VAR_9)
{
 struct amc6821_data *VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = FUNC_3(VAR_8)->index;
 u8 VAR_12;

 switch (VAR_11) {
 case 131:
  VAR_12 = VAR_10->stat1 & VAR_1;
  break;
 case 132:
  VAR_12 = VAR_10->stat1 & VAR_0;
  break;
 case 133:
  VAR_12 = VAR_10->stat2 & VAR_4;
  break;
 case 128:
  VAR_12 = VAR_10->stat1 & VAR_3;
  break;
 case 129:
  VAR_12 = VAR_10->stat1 & VAR_2;
  break;
 case 130:
  VAR_12 = VAR_10->stat2 & VAR_5;
  break;
 default:
  FUNC_1(VAR_7, "Unknown attr->index (%d).\n", VAR_11);
  return -VAR_6;
 }
 if (VAR_12)
  return FUNC_2(VAR_9, "1");
 else
  return FUNC_2(VAR_9, "0");
}
