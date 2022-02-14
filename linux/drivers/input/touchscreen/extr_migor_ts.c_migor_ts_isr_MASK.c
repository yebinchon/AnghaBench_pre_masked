
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct migor_ts_priv {int input; TYPE_1__* client; } ;
typedef int irqreturn_t ;
typedef int buf ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (int ,int ,unsigned short) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct migor_ts_priv *VAR_6 = VAR_5;
 unsigned short VAR_7, VAR_8;
 unsigned char VAR_9;
 u_int8_t VAR_10[16];
 FUNC_6(VAR_10, 0, sizeof(VAR_10));


 VAR_10[0] = 0;
 if (FUNC_2(VAR_6->client, VAR_10, 1) != 1) {
  FUNC_0(&VAR_6->client->dev, "Unable to write i2c index\n");
  goto out;
 }


 if (FUNC_1(VAR_6->client, VAR_10, sizeof(VAR_10)) != sizeof(VAR_10)) {
  FUNC_0(&VAR_6->client->dev, "Unable to read i2c page\n");
  goto out;
 }

 VAR_8 = ((VAR_10[9] & 0x03) << 8 | VAR_10[8]);
 VAR_7 = ((VAR_10[11] & 0x03) << 8 | VAR_10[10]);
 VAR_9 = VAR_10[12];

 switch (VAR_9) {
 case 130:
 case 128:
  FUNC_4(VAR_6->input, VAR_2, 1);
  FUNC_3(VAR_6->input, VAR_0, VAR_8);
  FUNC_3(VAR_6->input, VAR_1, VAR_7);
  FUNC_5(VAR_6->input);
  break;

 case 129:
  FUNC_4(VAR_6->input, VAR_2, 0);
  FUNC_5(VAR_6->input);
  break;
 }

 out:
 return VAR_3;
}
