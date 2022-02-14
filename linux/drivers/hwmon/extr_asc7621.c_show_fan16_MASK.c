
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int* reg; int update_lock; } ;
struct TYPE_3__ {size_t* msb; size_t* lsb; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 FUNC_0(VAR_2, VAR_3);
 u16 VAR_5;

 FUNC_1(&VAR_0->update_lock);
 VAR_5 = (VAR_0->reg[VAR_1->msb[0]] << 8) | VAR_0->reg[VAR_1->lsb[0]];
 FUNC_2(&VAR_0->update_lock);

 return FUNC_3(VAR_4, "%u\n",
         (VAR_5 == 0 ? -1 : (VAR_5) ==
   0xffff ? 0 : 5400000 / VAR_5));
}
