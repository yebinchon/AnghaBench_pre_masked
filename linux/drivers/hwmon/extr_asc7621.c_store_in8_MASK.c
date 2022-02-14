
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
typedef size_t ssize_t ;
struct TYPE_6__ {long* reg; int update_lock; } ;
struct TYPE_5__ {size_t* msb; } ;
struct TYPE_4__ {size_t index; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*) ;
 long* VAR_1 ;
 long FUNC_1 (long,int ,int) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ,size_t,long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6, struct device_attribute *VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 FUNC_0(VAR_6, VAR_7);
 long VAR_10;
 u8 VAR_11 = VAR_5->index;

 if (FUNC_2(VAR_8, 10, &VAR_10))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_10, 0, 0xffff);

 VAR_10 = VAR_10 * 0xc0 / VAR_1[VAR_11];

 VAR_10 = FUNC_1(VAR_10, 0, 0xff);

 FUNC_3(&VAR_3->update_lock);
 VAR_3->reg[VAR_4->msb[0]] = VAR_10;
 FUNC_5(VAR_2, VAR_4->msb[0], VAR_10);
 FUNC_4(&VAR_3->update_lock);

 return VAR_9;
}
