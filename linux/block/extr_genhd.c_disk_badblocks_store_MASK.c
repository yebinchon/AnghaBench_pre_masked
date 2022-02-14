
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int bb; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t,int ) ;
 struct gendisk* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct gendisk *VAR_5 = FUNC_1(VAR_1);

 if (!VAR_5->bb)
  return -VAR_0;

 return FUNC_0(VAR_5->bb, VAR_3, VAR_4, 0);
}
