
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {unsigned int id; } ;
typedef int ssize_t ;
struct TYPE_2__ {int data3; int data2; int data1; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int ,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 unsigned int VAR_4=VAR_1->id;

 return FUNC_0(VAR_3, "%lx, %lx, %lx\n",
   VAR_0[VAR_4].data1,
   VAR_0[VAR_4].data2,
   VAR_0[VAR_4].data3);
}
