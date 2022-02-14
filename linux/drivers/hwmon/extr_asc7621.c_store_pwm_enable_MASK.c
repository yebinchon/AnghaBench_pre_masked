
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


 size_t VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_4, VAR_5);
 long VAR_8;
 u8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 255;

 if (FUNC_1(VAR_6, 10, &VAR_8))
  return -VAR_0;

 switch (VAR_8) {
 case 0:
  VAR_12 = 0x04;
  break;
 case 1:
  VAR_12 = 0x07;
  break;
 case 2:
  VAR_12 = 0x00;
  VAR_13 = 1;
  break;
 case 3:
  VAR_12 = 0x00;
  VAR_13 = 0;
  break;
 case 255:
  VAR_12 = 0x03;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = VAR_12 & 0x07;
 VAR_11 = (VAR_12 >> 3) & 0x01;

 FUNC_2(&VAR_2->update_lock);
 VAR_10 = (VAR_10 & VAR_3->mask[0]) << VAR_3->shift[0];
 VAR_11 = (VAR_11 & VAR_3->mask[1]) << VAR_3->shift[1];
 VAR_9 = FUNC_4(VAR_1, VAR_3->msb[0]);
 VAR_12 = VAR_10 | (VAR_9 & ~(VAR_3->mask[0] << VAR_3->shift[0]));
 VAR_12 = VAR_11 | (VAR_12 & ~(VAR_3->mask[1] << VAR_3->shift[1]));
 VAR_2->reg[VAR_3->msb[0]] = VAR_12;
 FUNC_5(VAR_1, VAR_3->msb[0], VAR_12);
 if (VAR_13 < 255) {
  VAR_13 = (VAR_13 & VAR_3->mask[2]) << VAR_3->shift[2];
  VAR_9 = FUNC_4(VAR_1, VAR_3->msb[2]);
  VAR_12 =
      VAR_13 | (VAR_9 & ~(VAR_3->mask[2] << VAR_3->shift[2]));
  VAR_2->reg[VAR_3->msb[2]] = VAR_12;
  FUNC_5(VAR_1, VAR_3->msb[2], VAR_12);
 }
 FUNC_3(&VAR_2->update_lock);
 return VAR_7;
}
