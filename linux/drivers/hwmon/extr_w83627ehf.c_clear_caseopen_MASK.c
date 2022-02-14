
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct w83627ehf_data {int update_lock; scalar_t__ valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int nr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct w83627ehf_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;
 int FUNC_5 (struct w83627ehf_data*,int ) ;
 int FUNC_6 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct w83627ehf_data *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 u16 VAR_8, VAR_9;

 if (FUNC_1(VAR_4, 10, &VAR_7) || VAR_7 != 0)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3)->nr;

 FUNC_2(&VAR_6->update_lock);
 VAR_8 = FUNC_5(VAR_6, VAR_1);
 FUNC_6(VAR_6, VAR_1, VAR_8 | VAR_9);
 FUNC_6(VAR_6, VAR_1, VAR_8 & ~VAR_9);
 VAR_6->valid = 0;
 FUNC_3(&VAR_6->update_lock);

 return VAR_5;
}
