
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fts_data {int valid; int fan_present; int fan_alarm; int* fan_input; int* fan_source; int temp_alarm; int* temp_input; int* volt; int update_lock; scalar_t__ last_updated; int client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct fts_data *VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;

 FUNC_6(&VAR_10->update_lock);
 if (!FUNC_8(VAR_9, VAR_10->last_updated + 2 * VAR_8) && VAR_10->valid)
  goto exit;

 VAR_12 = FUNC_5(VAR_10->client, VAR_1);
 if (VAR_12 < 0)
  goto exit;

 VAR_10->valid = !!(VAR_12 & 0x02);
 if (FUNC_9(!VAR_10->valid)) {
  VAR_12 = -VAR_0;
  goto exit;
 }

 VAR_12 = FUNC_5(VAR_10->client, VAR_3);
 if (VAR_12 < 0)
  goto exit;
 VAR_10->fan_present = VAR_12;

 VAR_12 = FUNC_5(VAR_10->client, VAR_2);
 if (VAR_12 < 0)
  goto exit;
 VAR_10->fan_alarm = VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_10->fan_present & FUNC_0(VAR_11)) {
   VAR_12 = FUNC_5(VAR_10->client, FUNC_1(VAR_11));
   if (VAR_12 < 0)
    goto exit;
   VAR_10->fan_input[VAR_11] = VAR_12;

   VAR_12 = FUNC_5(VAR_10->client,
         FUNC_2(VAR_11));
   if (VAR_12 < 0)
    goto exit;
   VAR_10->fan_source[VAR_11] = VAR_12;
  } else {
   VAR_10->fan_input[VAR_11] = 0;
   VAR_10->fan_source[VAR_11] = 0;
  }
 }

 VAR_12 = FUNC_5(VAR_10->client, VAR_7);
 if (VAR_12 < 0)
  goto exit;
 VAR_10->temp_alarm = VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_12 = FUNC_5(VAR_10->client, FUNC_3(VAR_11));
  if (VAR_12 < 0)
   goto exit;
  VAR_10->temp_input[VAR_11] = VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = FUNC_5(VAR_10->client, FUNC_4(VAR_11));
  if (VAR_12 < 0)
   goto exit;
  VAR_10->volt[VAR_11] = VAR_12;
 }
 VAR_10->last_updated = VAR_9;
 VAR_12 = 0;
exit:
 FUNC_7(&VAR_10->update_lock);
 return VAR_12;
}
