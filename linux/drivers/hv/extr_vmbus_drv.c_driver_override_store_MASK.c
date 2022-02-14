
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_device {char* driver_override; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct hv_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,size_t,int ) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct hv_device *VAR_8 = FUNC_1(VAR_4);
 char *VAR_9, *VAR_10, *VAR_11;


 if (VAR_7 >= (VAR_3 - 1))
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_9, '\n');
 if (VAR_11)
  *VAR_11 = '\0';

 FUNC_0(VAR_4);
 VAR_10 = VAR_8->driver_override;
 if (FUNC_6(VAR_9)) {
  VAR_8->driver_override = VAR_9;
 } else {
  FUNC_3(VAR_9);
  VAR_8->driver_override = ((void*)0);
 }
 FUNC_2(VAR_4);

 FUNC_3(VAR_10);

 return VAR_7;
}
