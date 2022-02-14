
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int beep_mask; scalar_t__ type; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct w83781d_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_5, struct device_attribute *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct w83781d_data *VAR_9 = FUNC_1(VAR_5);
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_7, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_9->update_lock);
 VAR_9->beep_mask &= 0x8000;
 VAR_9->beep_mask |= FUNC_0(VAR_10, VAR_9->type);
 FUNC_5(VAR_9, VAR_0,
       VAR_9->beep_mask & 0xff);
 FUNC_5(VAR_9, VAR_1,
       (VAR_9->beep_mask >> 8) & 0xff);
 if (VAR_9->type != VAR_4 && VAR_9->type != VAR_3) {
  FUNC_5(VAR_9, VAR_2,
        ((VAR_9->beep_mask) >> 16) & 0xff);
 }
 FUNC_4(&VAR_9->update_lock);

 return VAR_8;
}
