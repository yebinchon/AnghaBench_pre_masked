
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int * in; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct adm1026_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct adm1026_data *VAR_4 = FUNC_1(VAR_1);
 return FUNC_2(VAR_3, "%d\n", FUNC_0(16, VAR_4->in[16]) -
  VAR_0);
}
