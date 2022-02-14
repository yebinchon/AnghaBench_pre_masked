
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {size_t* reg; } ;
struct TYPE_3__ {size_t* msb; size_t* shift; size_t* mask; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 int* VAR_0 ;
 size_t FUNC_1 (size_t,int ,int) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
       struct device_attribute *VAR_4, char *VAR_5)
{
 FUNC_0(VAR_3, VAR_4);
 u8 VAR_6 =
     (VAR_1->reg[VAR_2->msb[0]] >> VAR_2->shift[0]) & VAR_2->mask[0];

 VAR_6 = FUNC_1(VAR_6, 0, 7);

 return FUNC_2(VAR_5, "%u\n", VAR_0[VAR_6]);

}
