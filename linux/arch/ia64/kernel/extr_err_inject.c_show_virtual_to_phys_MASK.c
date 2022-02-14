
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {unsigned int id; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 unsigned int VAR_4=VAR_1->id;
 return FUNC_0(VAR_3, "%lx\n", VAR_0[VAR_4]);
}
