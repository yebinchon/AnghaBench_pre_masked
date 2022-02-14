
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stts751_priv {long event_min; int access_lock; TYPE_1__* client; int event_max; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (long,int,int ) ;
 int FUNC_1 (int *,char*,long) ;
 struct stts751_priv* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stts751_priv*,long,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 long VAR_8;
 struct stts751_priv *VAR_9 = FUNC_2(VAR_3);

 if (FUNC_3(VAR_5, 10, &VAR_8) < 0)
  return -VAR_0;

 FUNC_4(&VAR_9->access_lock);

 VAR_8 = FUNC_0(VAR_8, -64000, VAR_9->event_max);
 VAR_7 = FUNC_6(VAR_9, VAR_8,
         VAR_1, VAR_2);
 if (VAR_7)
  goto exit;

 FUNC_1(&VAR_9->client->dev, "setting event min %ld", VAR_8);
 VAR_9->event_min = VAR_8;
 VAR_7 = VAR_6;
exit:
 FUNC_5(&VAR_9->access_lock);
 return VAR_7;
}
