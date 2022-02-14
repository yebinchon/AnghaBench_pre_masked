
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dax_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct dax_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dax_device*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct dax_device*) ;
 int FUNC_5 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 bool VAR_5;
 int VAR_6 = FUNC_5(VAR_3, &VAR_5);
 struct dax_device *VAR_7 = FUNC_1(FUNC_3(VAR_1));

 FUNC_0(!VAR_7);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_6)
  VAR_4 = VAR_6;
 else
  FUNC_2(VAR_7, VAR_5);

 FUNC_4(VAR_7);
 return VAR_4;
}
