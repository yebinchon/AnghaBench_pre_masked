
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tmp401_data {int config; int temp_crit_hyst; int update_lock; int client; int ** temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct tmp401_data*) ;
 size_t FUNC_1 (struct tmp401_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (long,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 struct tmp401_data* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8 = FUNC_9(VAR_4)->index;
 struct tmp401_data *VAR_9 = FUNC_8(VAR_3);
 long VAR_10;
 u8 VAR_11;

 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (FUNC_4(VAR_5, 10, &VAR_10))
  return -VAR_0;

 if (VAR_9->config & VAR_1)
  VAR_10 = FUNC_2(VAR_10, -64000, 191000);
 else
  VAR_10 = FUNC_2(VAR_10, 0, 127000);

 FUNC_5(&VAR_9->update_lock);
 VAR_7 = FUNC_7(VAR_9->temp[3][VAR_8], VAR_9->config);
 VAR_10 = FUNC_2(VAR_10, VAR_7 - 255000, VAR_7);
 VAR_11 = ((VAR_7 - VAR_10) + 500) / 1000;

 FUNC_3(VAR_9->client, VAR_2,
      VAR_11);

 VAR_9->temp_crit_hyst = VAR_11;

 FUNC_6(&VAR_9->update_lock);

 return VAR_6;
}
