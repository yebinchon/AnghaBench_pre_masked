
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zforce_ts {int boot_complete; int version_major; int version_minor; int version_build; int version_rev; scalar_t__ suspending; struct i2c_client* client; int gpio_int; scalar_t__ suspended; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;



 size_t VAR_2 ;
 size_t VAR_3 ;

 size_t VAR_4 ;





 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct zforce_ts*,int,int) ;
 int FUNC_9 (struct zforce_ts*,int*) ;
 int FUNC_10 (struct zforce_ts*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct zforce_ts *VAR_7 = VAR_6;
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 u8 VAR_10[VAR_0];
 u8 *VAR_11;





 if (VAR_7->suspended) {
  FUNC_4(20);
  return VAR_1;
 }

 FUNC_0(&VAR_8->dev, "handling interrupt\n");


 if (!VAR_7->suspending && FUNC_2(&VAR_8->dev))
  FUNC_6(&VAR_8->dev);
 do {
  VAR_9 = FUNC_9(VAR_7, VAR_10);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_8->dev,
    "could not read packet, ret: %d\n", VAR_9);
   break;
  }

  VAR_11 = &VAR_10[VAR_2];

  switch (VAR_11[VAR_4]) {
  case 134:




   if (VAR_7->suspending && FUNC_2(&VAR_8->dev))
    FUNC_7(&VAR_8->dev, 500);
   FUNC_10(VAR_7, &VAR_11[VAR_3]);
   break;

  case 136:
   VAR_7->boot_complete = VAR_11[VAR_3];
   FUNC_8(VAR_7, VAR_11[VAR_4], 0);
   break;

  case 132:
  case 133:
  case 129:
  case 131:
  case 130:
   FUNC_8(VAR_7, VAR_11[VAR_4],
     VAR_11[VAR_3]);
   break;

  case 128:




   VAR_7->version_major = (VAR_11[VAR_3 + 1] << 8) |
      VAR_11[VAR_3];
   VAR_7->version_minor = (VAR_11[VAR_3 + 3] << 8) |
      VAR_11[VAR_3 + 2];
   VAR_7->version_build = (VAR_11[VAR_3 + 5] << 8) |
      VAR_11[VAR_3 + 4];
   VAR_7->version_rev = (VAR_11[VAR_3 + 7] << 8) |
      VAR_11[VAR_3 + 6];
   FUNC_0(&VAR_7->client->dev,
    "Firmware Version %04x:%04x %04x:%04x\n",
    VAR_7->version_major, VAR_7->version_minor,
    VAR_7->version_build, VAR_7->version_rev);

   FUNC_8(VAR_7, VAR_11[VAR_4], 0);
   break;

  case 135:
   FUNC_1(&VAR_7->client->dev, "invalid command: 0x%x\n",
    VAR_11[VAR_3]);
   break;

  default:
   FUNC_1(&VAR_7->client->dev,
    "unrecognized response id: 0x%x\n",
    VAR_11[VAR_4]);
   break;
  }
 } while (FUNC_3(VAR_7->gpio_int));

 if (!VAR_7->suspending && FUNC_2(&VAR_8->dev))
  FUNC_5(&VAR_8->dev);

 FUNC_0(&VAR_8->dev, "finished interrupt\n");

 return VAR_1;
}
