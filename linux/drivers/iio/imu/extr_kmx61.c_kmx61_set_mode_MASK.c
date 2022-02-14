
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {int acc_stby; int mag_stby; TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kmx61_data *VAR_6, u8 VAR_7, u8 VAR_8,
     bool VAR_9)
{
 int VAR_10;
 int VAR_11 = -1, VAR_12 = -1;

 VAR_10 = FUNC_1(VAR_6->client, VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error reading reg_stby\n");
  return VAR_10;
 }
 if (VAR_8 & VAR_0) {
  if (VAR_7 & VAR_1) {
   VAR_10 |= VAR_1;
   VAR_11 = 1;
  } else {
   VAR_10 &= ~VAR_1;
   VAR_11 = 0;
  }
 }

 if (VAR_8 & VAR_3) {
  if (VAR_7 & VAR_4) {
   VAR_10 |= VAR_4;
   VAR_12 = 1;
  } else {
   VAR_10 &= ~VAR_4;
   VAR_12 = 0;
  }
 }

 if (VAR_7 & VAR_2)
  VAR_10 |= VAR_2;

 VAR_10 = FUNC_2(VAR_6->client, VAR_5, VAR_10);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error writing reg_stby\n");
  return VAR_10;
 }

 if (VAR_11 != -1 && VAR_9)
  VAR_6->acc_stby = VAR_11;
 if (VAR_12 != -1 && VAR_9)
  VAR_6->mag_stby = VAR_12;

 return 0;
}
