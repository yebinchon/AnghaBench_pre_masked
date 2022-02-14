
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
struct TYPE_4__ {int* reg; int update_lock; } ;
struct TYPE_3__ {size_t* msb; int* shift; int* mask; } ;


 int FUNC_0 (struct device*,struct device_attribute*) ;
 size_t FUNC_1 (int,int ,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (char*,char*,int const) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 FUNC_0(VAR_2, VAR_3);
 u8 VAR_5, VAR_6, VAR_7;
 static const u8 VAR_8[] = {
  0x01, 0x02, 0x04, 0x1f, 0x00, 0x06, 0x07, 0x10,
  0x08, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f
 };

 FUNC_2(&VAR_0->update_lock);
 VAR_5 = (VAR_0->reg[VAR_1->msb[0]] >> VAR_1->shift[0]) & VAR_1->mask[0];
 VAR_6 = (VAR_0->reg[VAR_1->msb[1]] >> VAR_1->shift[1]) & VAR_1->mask[1];
 VAR_7 = VAR_5 | (VAR_6 << 3);
 FUNC_3(&VAR_0->update_lock);

 return FUNC_4(VAR_4, "%u\n", VAR_8[FUNC_1(VAR_7, 0, 15)]);
}
