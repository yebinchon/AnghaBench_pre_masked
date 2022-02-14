
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {int ver_major; int ver_minor; } ;
typedef int ssize_t ;


 struct aem_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct aem_data *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d.%d\n", VAR_3->ver_major, VAR_3->ver_minor);
}
