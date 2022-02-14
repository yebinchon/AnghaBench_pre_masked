
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s8 ;
struct TYPE_4__ {int* reg; int update_lock; } ;
struct TYPE_3__ {size_t* msb; int* shift; int* mask; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 long* VAR_0 ;
 size_t FUNC_1 (int,int ,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 FUNC_0(VAR_3, VAR_4);
 long VAR_6;
 u8 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_1->update_lock);
 VAR_6 = ((s8) VAR_1->reg[VAR_2->msb[1]]) * 1000;
 VAR_7 =
     ((VAR_1->reg[VAR_2->msb[0]] >> VAR_2->shift[0]) & VAR_2->mask[0]);
 VAR_8 = VAR_6 + VAR_0[FUNC_1(VAR_7, 0, 15)];
 FUNC_3(&VAR_1->update_lock);

 return FUNC_4(VAR_5, "%d\n", VAR_8);

}
