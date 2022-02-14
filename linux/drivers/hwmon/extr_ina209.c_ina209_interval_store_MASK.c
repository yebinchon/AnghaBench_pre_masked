
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ina209_data {int update_lock; int update_interval; int * regs; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct ina209_data*) ;
 int FUNC_1 (struct ina209_data*) ;
 int FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,long) ;
 struct ina209_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ina209_data *VAR_5 = FUNC_5(VAR_1);
 long VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_8 = FUNC_6(VAR_3, 10, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_7(&VAR_5->update_lock);
 VAR_7 = FUNC_4(VAR_5->regs[VAR_0],
       VAR_6);
 FUNC_2(VAR_5->client, VAR_0,
         VAR_7);
 VAR_5->regs[VAR_0] = VAR_7;
 VAR_5->update_interval = FUNC_3(VAR_7);
 FUNC_8(&VAR_5->update_lock);
 return VAR_4;
}
