
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int tx_buf ;
struct am2315_sensor_data {int hum_data; int temp_data; } ;
struct am2315_data {int lock; TYPE_1__* client; } ;
typedef int rx_buf ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct am2315_data *VAR_5,
       struct am2315_sensor_data *VAR_6)
{
 int VAR_7;

 u8 VAR_8[3] = { VAR_0, VAR_2, 4 };






 u8 VAR_9[8];
 u16 VAR_10;


 FUNC_1(VAR_5->client);

 FUNC_5(&VAR_5->lock);
 VAR_7 = FUNC_4(VAR_5->client, VAR_8, sizeof(VAR_8));
 if (VAR_7 < 0) {
  FUNC_2(&VAR_5->client->dev, "failed to send read request\n");
  goto exit_unlock;
 }

 FUNC_7(2000, 3000);

 VAR_7 = FUNC_3(VAR_5->client, VAR_9, sizeof(VAR_9));
 if (VAR_7 < 0) {
  FUNC_2(&VAR_5->client->dev, "failed to read sensor data\n");
  goto exit_unlock;
 }
 FUNC_6(&VAR_5->lock);




 VAR_10 = FUNC_0(VAR_9, sizeof(VAR_9) - 2);
 if ((VAR_10 & 0xff) != VAR_9[6] || (VAR_10 >> 8) != VAR_9[7]) {
  FUNC_2(&VAR_5->client->dev, "failed to verify sensor data\n");
  return -VAR_4;
 }

 VAR_6->hum_data = (VAR_9[VAR_1] << 8) |
     VAR_9[VAR_1 + 1];
 VAR_6->temp_data = (VAR_9[VAR_3] << 8) |
      VAR_9[VAR_3 + 1];

 return VAR_7;

exit_unlock:
 FUNC_6(&VAR_5->lock);
 return VAR_7;
}
