
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
struct TYPE_3__ {int* mask; int* shift; size_t* msb; } ;


 int FUNC_0 (unsigned long*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct device*,struct device_attribute*) ;
 unsigned long* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 FUNC_1(VAR_5, VAR_6);
 unsigned long VAR_9;
 u8 VAR_10, VAR_11 = 255;
 int VAR_12;

 if (FUNC_2(VAR_7, 10, &VAR_9))
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); VAR_12++) {
  if (VAR_9 == VAR_1[VAR_12]) {
   VAR_11 = VAR_12;
   break;
  }
 }
 if (VAR_11 == 255)
  return -VAR_0;

 VAR_11 = (VAR_11 & VAR_4->mask[0]) << VAR_4->shift[0];

 FUNC_3(&VAR_3->update_lock);
 VAR_10 = FUNC_5(VAR_2, VAR_4->msb[0]);
 VAR_11 |= (VAR_10 & ~(VAR_4->mask[0] << VAR_4->shift[0]));
 VAR_3->reg[VAR_4->msb[0]] = VAR_11;
 FUNC_6(VAR_2, VAR_4->msb[0], VAR_11);
 FUNC_4(&VAR_3->update_lock);
 return VAR_8;
}
