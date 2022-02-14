
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int bb; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*,int ) ;
 struct gendisk* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct gendisk *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_3->bb)
  return FUNC_2(VAR_2, "\n");

 return FUNC_0(VAR_3->bb, VAR_2, 0);
}
