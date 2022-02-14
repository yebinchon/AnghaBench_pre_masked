
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int len; int msg; } ;
struct tda9950_priv {TYPE_1__* client; TYPE_3__ rx_msg; int adap; int open; } ;
typedef int irqreturn_t ;
typedef int buf ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,unsigned int,int,int,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_13, void *VAR_14)
{
 struct tda9950_priv *VAR_15 = VAR_14;
 unsigned int VAR_16;
 u8 VAR_17, VAR_18, VAR_19[19];
 u8 VAR_20, VAR_21, VAR_22;

 if (!VAR_15->open)
  return VAR_9;

 VAR_17 = FUNC_5(VAR_15->client, VAR_12);
 if (!(VAR_17 & VAR_7))
  return VAR_9;

 VAR_18 = FUNC_5(VAR_15->client, VAR_10) & VAR_0;

 FUNC_6(VAR_15->client, VAR_11, VAR_19, sizeof(VAR_19));





 if (VAR_19[0] == 0) {
  FUNC_3(&VAR_15->client->dev, "interrupt pending, but no message?\n");
  return VAR_9;
 }

 switch (VAR_19[1]) {
 case 132:
  VAR_20 = VAR_21 = VAR_22 = 0;
  switch (VAR_19[2]) {
  case 128:
   VAR_16 = VAR_6;
   break;

  case 130:
   VAR_16 = VAR_2;
   VAR_20 = VAR_18;
   break;

  case 129:
   VAR_16 = VAR_5;
   VAR_21 = VAR_18;
   break;

  default:
   FUNC_2(&VAR_15->client->dev, "CNF reply error 0x%02x\n",
    VAR_19[2]);
   VAR_16 = VAR_3;
   VAR_22 = VAR_18;
   break;
  }

  if (VAR_16 != VAR_6)
   VAR_16 |= VAR_4;
  FUNC_1(VAR_15->adap, VAR_16, VAR_20,
      VAR_21, 0, VAR_22);
  break;

 case 131:
  VAR_15->rx_msg.len = VAR_19[0] - 2;
  if (VAR_15->rx_msg.len > VAR_1)
   VAR_15->rx_msg.len = VAR_1;

  FUNC_4(VAR_15->rx_msg.msg, VAR_19 + 2, VAR_15->rx_msg.len);
  FUNC_0(VAR_15->adap, &VAR_15->rx_msg);
  break;

 default:
  FUNC_2(&VAR_15->client->dev, "unknown service id 0x%02x\n",
   VAR_19[1]);
  break;
 }

 return VAR_8;
}
