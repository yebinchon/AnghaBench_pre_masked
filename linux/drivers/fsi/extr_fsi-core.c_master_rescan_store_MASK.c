
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct fsi_master*) ;
 struct fsi_master* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct fsi_master *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_3;
}
