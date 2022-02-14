
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stts751_priv {long therm; int access_lock; scalar_t__ hyst; TYPE_1__* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (long,int,int) ;
 int FUNC_1 (int *,char*,long) ;
 struct stts751_priv* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stts751_priv*,long,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 long VAR_7;
 struct stts751_priv *VAR_8 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_4, 10, &VAR_7) < 0)
  return -VAR_0;


 VAR_7 = FUNC_0(VAR_7, -64000, 127937);
 FUNC_4(&VAR_8->access_lock);
 VAR_6 = FUNC_6(VAR_8, VAR_7, VAR_1);
 if (VAR_6)
  goto exit;

 FUNC_1(&VAR_8->client->dev, "setting therm %ld", VAR_7);





 VAR_8->hyst = VAR_7 - (VAR_8->therm - VAR_8->hyst);
 VAR_8->therm = VAR_7;

exit:
 FUNC_5(&VAR_8->access_lock);
 if (VAR_6)
  return VAR_6;

 return VAR_5;
}
