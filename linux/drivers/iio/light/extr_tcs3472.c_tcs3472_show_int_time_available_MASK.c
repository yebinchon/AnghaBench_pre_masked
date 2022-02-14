
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 <= 256; VAR_5++)
  VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_0 - VAR_4, "0.%06d ",
   2400 * VAR_5);


 VAR_3[VAR_4 - 1] = '\n';

 return VAR_4;
}
