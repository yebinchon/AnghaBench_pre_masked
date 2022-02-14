
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fts_data {int valid; int update_lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef long ssize_t ;
struct TYPE_2__ {int index; } ;


 long VAR_0 ;
 int FUNC_0 (int) ;
 struct fts_data* FUNC_1 (struct device*) ;
 long FUNC_2 (int ,int ) ;
 long FUNC_3 (struct fts_data*) ;
 long FUNC_4 (int ,int ,long) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct fts_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = FUNC_8(VAR_2)->index;
 long VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 if (FUNC_5(VAR_3, 10, &VAR_7) || VAR_7 != 0)
  return -VAR_0;

 FUNC_6(&VAR_5->update_lock);
 VAR_7 = FUNC_2(VAR_5->client, FUNC_0(VAR_6));
 if (VAR_7 < 0)
  goto error;

 VAR_7 = FUNC_4(VAR_5->client, FUNC_0(VAR_6),
        VAR_7 | 0x1);
 if (VAR_7 < 0)
  goto error;

 VAR_5->valid = 0;
 VAR_7 = VAR_4;
error:
 FUNC_7(&VAR_5->update_lock);
 return VAR_7;
}
