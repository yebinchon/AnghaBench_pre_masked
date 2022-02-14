
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 ssize_t VAR_5;

 FUNC_0(&VAR_1);
 VAR_5 = FUNC_2(VAR_4, "%d\n", VAR_0);
 FUNC_1(&VAR_1);
 return VAR_5;
}
