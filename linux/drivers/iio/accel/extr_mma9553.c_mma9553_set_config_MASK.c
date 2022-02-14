
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ config; } ;
struct mma9553_data {TYPE_2__* client; TYPE_1__ conf; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mma9553_data *VAR_5, u16 VAR_6,
         u16 *VAR_7, u16 VAR_8, u16 VAR_9)
{
 int VAR_10, VAR_11;
 u16 VAR_12, VAR_13;

 VAR_12 = *VAR_7;
 if (VAR_8 == FUNC_4(VAR_12, VAR_9))
  return 0;

 VAR_12 = FUNC_5(VAR_12, VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_5->client, VAR_0,
     VAR_6, VAR_12);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->client->dev,
   "error writing config register 0x%x\n", VAR_6);
  return VAR_10;
 }

 *VAR_7 = VAR_12;


 VAR_13 = FUNC_5(VAR_5->conf.config, 1,
      VAR_3);

 VAR_10 = FUNC_3(VAR_5->client, VAR_0,
     VAR_4, VAR_13);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_5->client->dev,
   "error writing config register 0x%x\n",
   VAR_4);
  return VAR_10;
 }

 VAR_11 = VAR_1;
 do {
  FUNC_2(VAR_2);
  VAR_10 = FUNC_1(VAR_5->client,
            VAR_0,
            VAR_4,
            &VAR_13);
  if (VAR_10 < 0)
   return VAR_10;
 } while (FUNC_4(VAR_13, VAR_3) &&
   --VAR_11 > 0);

 return 0;
}
