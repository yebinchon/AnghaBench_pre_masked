
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int* reg; int update_lock; } ;
struct TYPE_3__ {size_t* msb; int* mask; int* shift; } ;


 int FUNC_0 (long*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct device*,struct device_attribute*) ;
 long* VAR_1 ;
 long FUNC_2 (long,long,long) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 (int ,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 FUNC_1(VAR_5, VAR_6);
 long VAR_9, VAR_10;
 int VAR_11;
 u8 VAR_12, VAR_13 = 0;

 if (FUNC_3(VAR_7, 10, &VAR_9))
  return -VAR_0;

 FUNC_4(&VAR_3->update_lock);
 VAR_10 = VAR_3->reg[VAR_4->msb[1]] * 1000;
 VAR_9 = FUNC_2(VAR_9, VAR_10 + 2000, VAR_10 + 80000);

 for (VAR_11 = FUNC_0(VAR_1) - 1; VAR_11 >= 0; VAR_11--) {
  if (VAR_9 >= VAR_10 + VAR_1[VAR_11]) {
   VAR_13 = VAR_11;
   break;
  }
 }

 VAR_13 = (VAR_13 & VAR_4->mask[0]) << VAR_4->shift[0];
 VAR_12 = FUNC_6(VAR_2, VAR_4->msb[0]);
 VAR_13 |= (VAR_12 & ~(VAR_4->mask[0] << VAR_4->shift[0]));
 VAR_3->reg[VAR_4->msb[0]] = VAR_13;
 FUNC_7(VAR_2, VAR_4->msb[0], VAR_13);
 FUNC_5(&VAR_3->update_lock);
 return VAR_8;
}
