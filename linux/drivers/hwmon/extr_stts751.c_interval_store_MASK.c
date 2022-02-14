
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stts751_priv {int interval; int access_lock; TYPE_1__* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 struct stts751_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (unsigned long,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct stts751_priv*) ;
 int * VAR_2 ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
         struct device_attribute *VAR_4, const char *VAR_5,
         size_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = VAR_6;
 struct stts751_priv *VAR_10 = FUNC_2(VAR_3);

 if (FUNC_5(VAR_5, 10, &VAR_7) < 0)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7, VAR_2,
          FUNC_0(VAR_2));

 FUNC_1(&VAR_10->client->dev, "setting interval. req:%lu, idx: %d, val: %d",
  VAR_7, VAR_8, VAR_2[VAR_8]);

 FUNC_6(&VAR_10->access_lock);
 if (VAR_10->interval == VAR_8)
  goto exit;
 if (VAR_10->interval < VAR_8) {
  FUNC_1(&VAR_10->client->dev, "lower resolution, then modify convrate");
  VAR_10->interval = VAR_8;
  VAR_9 = FUNC_8(VAR_10);
  if (VAR_9)
   goto exit;
 }

 VAR_9 = FUNC_4(VAR_10->client, VAR_1, VAR_8);
 if (VAR_9)
  goto exit;

 if (VAR_10->interval != VAR_8) {
  FUNC_1(&VAR_10->client->dev, "modify convrate, then raise resolution");
  VAR_10->interval = VAR_8;
  VAR_9 = FUNC_8(VAR_10);
  if (VAR_9)
   goto exit;
 }
 VAR_9 = VAR_6;
exit:
 FUNC_7(&VAR_10->access_lock);

 return VAR_9;
}
