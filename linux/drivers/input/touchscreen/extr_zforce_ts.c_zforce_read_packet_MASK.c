
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zforce_ts {int access_mutex; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct zforce_ts *VAR_5, u8 *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 int VAR_8;

 FUNC_3(&VAR_5->access_mutex);


 VAR_8 = FUNC_2(VAR_7, VAR_6, 2);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "error reading header: %d\n", VAR_8);
  goto unlock;
 }

 if (VAR_6[VAR_3] != VAR_1) {
  FUNC_1(&VAR_7->dev, "invalid frame start: %d\n", VAR_6[0]);
  VAR_8 = -VAR_0;
  goto unlock;
 }

 if (VAR_6[VAR_4] == 0) {
  FUNC_1(&VAR_7->dev, "invalid payload length: %d\n",
   VAR_6[VAR_4]);
  VAR_8 = -VAR_0;
  goto unlock;
 }


 VAR_8 = FUNC_2(VAR_7, &VAR_6[VAR_2], VAR_6[VAR_4]);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "error reading payload: %d\n", VAR_8);
  goto unlock;
 }

 FUNC_0(&VAR_7->dev, "read %d bytes for response command 0x%x\n",
  VAR_6[VAR_4], VAR_6[VAR_2]);

unlock:
 FUNC_4(&VAR_5->access_mutex);
 return VAR_8;
}
