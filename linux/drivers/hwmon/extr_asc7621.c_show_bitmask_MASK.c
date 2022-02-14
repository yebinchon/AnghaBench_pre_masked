
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int* reg; } ;
struct TYPE_3__ {size_t* msb; int* shift; int* mask; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_4, "%u\n",
         (VAR_0->reg[VAR_1->msb[0]] >> VAR_1->
   shift[0]) & VAR_1->mask[0]);
}
