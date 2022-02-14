
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds9300_data {int thresh_hi; TYPE_1__* client; int power_state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct apds9300_data *VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_6->power_state)
  return -VAR_4;

 if (VAR_7 > VAR_2)
  return -VAR_5;

 VAR_8 = FUNC_1(VAR_6->client, VAR_1
   | VAR_0 | VAR_3, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_6->client->dev, "failed to set thresh_hi\n");
  return VAR_8;
 }
 VAR_6->thresh_hi = VAR_7;

 return 0;
}
