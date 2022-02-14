
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fschmd_data {int update_lock; int global_control; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fschmd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 u8 VAR_6;
 struct fschmd_data *VAR_7 = FUNC_0(VAR_2);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_7->update_lock);

 VAR_6 = FUNC_1(FUNC_6(VAR_2), VAR_1);

 if (VAR_8)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_2(FUNC_6(VAR_2), VAR_1, VAR_6);

 VAR_7->global_control = VAR_6;

 FUNC_5(&VAR_7->update_lock);

 return VAR_5;
}
