
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


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
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct kmx61_data*,int*,int) ;
 int FUNC_4 (struct kmx61_data*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct kmx61_data *VAR_9,
       bool VAR_10, u8 VAR_11)
{
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_9, &VAR_12, VAR_0 | VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_9, VAR_1, VAR_0 | VAR_2, 1);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_9->client, VAR_5);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error reading reg_ctrl1\n");
  return VAR_13;
 }

 if (VAR_10) {
  VAR_13 |= VAR_8;
  if (VAR_11 & VAR_0)
   VAR_13 |= VAR_6;
  if (VAR_11 & VAR_2)
   VAR_13 |= VAR_7;
 } else {
  VAR_13 &= ~VAR_8;
  if (VAR_11 & VAR_0)
   VAR_13 &= ~VAR_6;
  if (VAR_11 & VAR_2)
   VAR_13 &= ~VAR_7;
 }
 VAR_13 = FUNC_2(VAR_9->client, VAR_5, VAR_13);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error writing reg_int_ctrl1\n");
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_9->client, VAR_3);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error reading reg_ctrl1\n");
  return VAR_13;
 }

 if (VAR_10)
  VAR_13 |= VAR_4;
 else
  VAR_13 &= ~VAR_4;

 VAR_13 = FUNC_2(VAR_9->client, VAR_3, VAR_13);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->client->dev, "Error writing reg_ctrl1\n");
  return VAR_13;
 }

 return FUNC_4(VAR_9, VAR_12, VAR_0 | VAR_2, 1);
}
