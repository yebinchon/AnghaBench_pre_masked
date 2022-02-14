
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct elants_data {int iap_mode; struct i2c_client* client; } ;
typedef int recov_packet ;
typedef int hello_packet ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct elants_data*) ;
 int FUNC_3 (struct elants_data*) ;
 int FUNC_4 (struct elants_data*) ;
 int FUNC_5 (struct elants_data*) ;
 int FUNC_6 (struct elants_data*) ;
 int FUNC_7 (struct i2c_client*,int*,int) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (int*,int const*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct elants_data *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9, VAR_10, VAR_11;
 const u8 VAR_12[] = { 0x55, 0x55, 0x55, 0x55 };
 const u8 VAR_13[] = { 0x55, 0x55, 0x80, 0x80 };
 u8 VAR_14[VAR_5];

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_9 = FUNC_8(VAR_8);
  if (VAR_9) {

   if (VAR_11 < VAR_6 - 1)
    continue;
  }

  VAR_9 = FUNC_1(VAR_8);
  if (VAR_9) {

   if (VAR_11 < VAR_6 - 1)
    continue;
  }


  FUNC_10(VAR_0);

  VAR_9 = FUNC_7(VAR_8, VAR_14, sizeof(VAR_14));
  if (VAR_9) {
   FUNC_0(&VAR_8->dev,
    "failed to read 'hello' packet: %d\n", VAR_9);
  } else if (!FUNC_9(VAR_14, VAR_12, sizeof(VAR_12))) {
   VAR_7->iap_mode = VAR_3;
   break;
  } else if (!FUNC_9(VAR_14, VAR_13, sizeof(VAR_13))) {




   VAR_9 = -VAR_2;
   break;
  } else {
   VAR_9 = -VAR_1;
   FUNC_0(&VAR_8->dev,
    "invalid 'hello' packet: %*ph\n",
    (int)sizeof(VAR_14), VAR_14);
  }
 }


 VAR_10 = FUNC_4(VAR_7);
 if (!VAR_9)
  VAR_9 = VAR_10;

 if (!VAR_9)
  VAR_9 = FUNC_3(VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_5(VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_6(VAR_7);

 if (VAR_9)
  VAR_7->iap_mode = VAR_4;

 return 0;
}
