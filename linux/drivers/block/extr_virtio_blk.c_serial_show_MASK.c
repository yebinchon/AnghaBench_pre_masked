
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct gendisk* FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct gendisk*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4, char *VAR_5)
{
 struct gendisk *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;


 FUNC_0(VAR_1 < VAR_2);

 VAR_5[VAR_2] = '\0';
 VAR_7 = FUNC_3(VAR_6, VAR_5);
 if (!VAR_7)
  return FUNC_2(VAR_5);

 if (VAR_7 == -VAR_0)
  return 0;

 return VAR_7;
}
