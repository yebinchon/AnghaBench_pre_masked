
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long) ;
 long FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 long VAR_4 = FUNC_1(VAR_1->id, VAR_0, ((void*)0));

 return FUNC_0(VAR_3, "%lx\n", VAR_4);
}
