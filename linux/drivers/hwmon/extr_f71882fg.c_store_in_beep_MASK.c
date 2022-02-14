
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {scalar_t__ type; int in_beep; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f71882fg_data* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct f71882fg_data*,int ) ;
 int FUNC_2 (struct f71882fg_data*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, struct device_attribute
 *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct f71882fg_data *VAR_7 = FUNC_0(VAR_3);
 int VAR_8, VAR_9 = FUNC_6(VAR_4)->index;
 unsigned long VAR_10;

 VAR_8 = FUNC_3(VAR_5, 10, &VAR_10);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_7->update_lock);
 if (VAR_7->type == VAR_2)
  VAR_7->in_beep = FUNC_1(VAR_7, VAR_1);
 else
  VAR_7->in_beep = FUNC_1(VAR_7, VAR_0);

 if (VAR_10)
  VAR_7->in_beep |= 1 << VAR_9;
 else
  VAR_7->in_beep &= ~(1 << VAR_9);

 if (VAR_7->type == VAR_2)
  FUNC_2(VAR_7, VAR_1, VAR_7->in_beep);
 else
  FUNC_2(VAR_7, VAR_0, VAR_7->in_beep);
 FUNC_5(&VAR_7->update_lock);

 return VAR_6;
}
