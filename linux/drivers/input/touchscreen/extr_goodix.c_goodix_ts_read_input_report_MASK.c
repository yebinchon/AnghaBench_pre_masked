
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct goodix_ts_data {int contact_size; int max_touch_num; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int*,int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct goodix_ts_data *VAR_5, u8 *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;






 VAR_7 = VAR_4 + FUNC_2(VAR_2);
 do {
  VAR_9 = FUNC_1(VAR_5->client, VAR_3,
     VAR_6, VAR_5->contact_size + 1);
  if (VAR_9) {
   FUNC_0(&VAR_5->client->dev, "I2C transfer error: %d\n",
     VAR_9);
   return VAR_9;
  }

  if (VAR_6[0] & VAR_1) {
   VAR_8 = VAR_6[0] & 0x0f;
   if (VAR_8 > VAR_5->max_touch_num)
    return -VAR_0;

   if (VAR_8 > 1) {
    VAR_6 += 1 + VAR_5->contact_size;
    VAR_9 = FUNC_1(VAR_5->client,
      VAR_3 +
       1 + VAR_5->contact_size,
      VAR_6,
      VAR_5->contact_size *
       (VAR_8 - 1));
    if (VAR_9)
     return VAR_9;
   }

   return VAR_8;
  }

  FUNC_4(1000, 2000);
 } while (FUNC_3(VAR_4, VAR_7));





 return 0;
}
