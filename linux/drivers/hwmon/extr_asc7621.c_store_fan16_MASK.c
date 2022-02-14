
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {long* reg; int update_lock; } ;
struct TYPE_3__ {size_t* msb; size_t* lsb; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int ,size_t,long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
      struct device_attribute *VAR_5, const char *VAR_6,
      size_t VAR_7)
{
 FUNC_0(VAR_4, VAR_5);
 long VAR_8;

 if (FUNC_2(VAR_6, 10, &VAR_8))
  return -VAR_0;






 VAR_8 =
     (VAR_8 <= 0 ? 0xffff : FUNC_1(5400000 / VAR_8, 0, 0xfffe));

 FUNC_3(&VAR_2->update_lock);
 VAR_2->reg[VAR_3->msb[0]] = (VAR_8 >> 8) & 0xff;
 VAR_2->reg[VAR_3->lsb[0]] = VAR_8 & 0xff;
 FUNC_5(VAR_1, VAR_3->msb[0], VAR_2->reg[VAR_3->msb[0]]);
 FUNC_5(VAR_1, VAR_3->lsb[0], VAR_2->reg[VAR_3->lsb[0]]);
 FUNC_4(&VAR_2->update_lock);

 return VAR_7;
}
