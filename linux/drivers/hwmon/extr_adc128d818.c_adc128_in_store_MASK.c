
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adc128_data {int** in; int update_lock; int client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (long,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct adc128_data* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
          struct device_attribute *VAR_1, const char *VAR_2,
          size_t VAR_3)
{
 struct adc128_data *VAR_4 = FUNC_4(VAR_0);
 int VAR_5 = FUNC_9(VAR_1)->index;
 int VAR_6 = FUNC_9(VAR_1)->nr;
 u8 VAR_7, VAR_8;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_2, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_7(&VAR_4->update_lock);

 VAR_8 = FUNC_3(FUNC_2(VAR_9, 10), 0, 255);
 VAR_4->in[VAR_5][VAR_6] = VAR_8 << 4;
 VAR_7 = VAR_5 == 1 ? FUNC_1(VAR_6) : FUNC_0(VAR_6);
 FUNC_5(VAR_4->client, VAR_7, VAR_8);
 FUNC_8(&VAR_4->update_lock);

 return VAR_3;
}
