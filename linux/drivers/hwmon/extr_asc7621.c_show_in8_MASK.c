
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int* reg; } ;
struct TYPE_5__ {size_t* msb; } ;
struct TYPE_4__ {size_t index; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 int* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4, struct device_attribute *VAR_5,
   char *VAR_6)
{
 FUNC_0(VAR_4, VAR_5);
 u8 VAR_7 = VAR_3->index;

 return FUNC_1(VAR_6, "%u\n",
         ((VAR_1->reg[VAR_2->msb[0]] *
    VAR_0[VAR_7]) / 0xc0));
}
