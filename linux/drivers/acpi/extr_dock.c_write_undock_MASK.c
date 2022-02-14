
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {struct dock_station* platform_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct dock_station*) ;
 int FUNC_3 (struct dock_station*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct dock_station *VAR_7 = VAR_2->platform_data;

 if (!VAR_5)
  return -VAR_1;

 FUNC_0();
 FUNC_2(VAR_7);
 VAR_6 = FUNC_3(VAR_7, VAR_0);
 FUNC_1();
 return VAR_6 ? VAR_6: VAR_5;
}
