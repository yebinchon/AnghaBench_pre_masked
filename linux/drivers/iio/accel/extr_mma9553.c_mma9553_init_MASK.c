
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {void* config; int sleepthd; int sleepmax; int sleepmin; } ;
struct mma9553_data {TYPE_2__* client; TYPE_1__ conf; int gpio_bitnum; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int,int *) ;
 int FUNC_6 (struct mma9553_data*) ;
 void* FUNC_7 (void*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct mma9553_data *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_3(VAR_9->client);
 if (VAR_10)
  return VAR_10;






 VAR_10 = FUNC_2(VAR_9->client, VAR_0,
     VAR_8,
     sizeof(VAR_9->conf) / sizeof(u16),
     (u16 *)&VAR_9->conf);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_9->client->dev,
   "failed to read configuration registers\n");
  return VAR_10;
 }


 VAR_9->gpio_bitnum = VAR_7;
 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_9->client, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9->conf.sleepmin = VAR_3;
 VAR_9->conf.sleepmax = VAR_2;
 VAR_9->conf.sleepthd = VAR_4;
 VAR_9->conf.config = FUNC_7(VAR_9->conf.config, 1,
          VAR_6);




 VAR_9->conf.config = FUNC_7(VAR_9->conf.config, 1,
          VAR_5);
 VAR_10 = FUNC_5(VAR_9->client, VAR_0,
      VAR_8,
      sizeof(VAR_9->conf) / sizeof(u16),
      (u16 *)&VAR_9->conf);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_9->client->dev,
   "failed to write configuration registers\n");
  return VAR_10;
 }

 return FUNC_4(VAR_9->client, 1);
}
