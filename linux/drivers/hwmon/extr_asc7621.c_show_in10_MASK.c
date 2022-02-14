
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int* reg; int update_lock; } ;
struct TYPE_5__ {size_t* msb; size_t* lsb; } ;
struct TYPE_4__ {size_t index; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 int* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5,
    char *VAR_6)
{
 FUNC_0(VAR_4, VAR_5);
 u16 VAR_7;
 u8 VAR_8 = VAR_3->index;

 FUNC_1(&VAR_1->update_lock);
 VAR_7 = (VAR_1->reg[VAR_2->msb[0]] << 8) | (VAR_1->reg[VAR_2->lsb[0]]);
 FUNC_2(&VAR_1->update_lock);


 VAR_7 = (VAR_7 >> 6) * VAR_0[VAR_8] / (0xc0 << 2);

 return FUNC_3(VAR_6, "%u\n", VAR_7);
}
