
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6697_data {long temp_offset; scalar_t__ type; long** temp; int update_lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int nr; int index; } ;


 long FUNC_0 (long,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 long FUNC_1 (long,int ,int) ;
 struct max6697_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
     struct device_attribute *VAR_4, const char *VAR_5,
     size_t VAR_6)
{
 int VAR_7 = FUNC_7(VAR_4)->nr;
 int VAR_8 = FUNC_7(VAR_4)->index;
 struct max6697_data *VAR_9 = FUNC_2(VAR_3);
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_5, 10, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_5(&VAR_9->update_lock);
 VAR_10 = FUNC_0(VAR_10, 1000) + VAR_9->temp_offset;
 VAR_10 = FUNC_1(VAR_10, 0, VAR_9->type == VAR_2 ? 255 : 127);
 VAR_9->temp[VAR_7][VAR_8] = VAR_10;
 VAR_11 = FUNC_3(VAR_9->client,
     VAR_8 == 2 ? VAR_1[VAR_7]
         : VAR_0[VAR_7],
     VAR_10);
 FUNC_6(&VAR_9->update_lock);

 return VAR_11 < 0 ? VAR_11 : VAR_6;
}
