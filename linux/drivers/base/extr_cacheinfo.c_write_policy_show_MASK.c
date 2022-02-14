
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cacheinfo {unsigned int attributes; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct cacheinfo* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct cacheinfo *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = VAR_5->attributes;
 int VAR_7 = 0;

 if (VAR_6 & VAR_1)
  VAR_7 = FUNC_1(VAR_4, "WriteThrough\n");
 else if (VAR_6 & VAR_0)
  VAR_7 = FUNC_1(VAR_4, "WriteBack\n");
 return VAR_7;
}
