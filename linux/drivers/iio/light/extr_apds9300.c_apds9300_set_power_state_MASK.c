
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct apds9300_data {int power_state; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct apds9300_data *VAR_4, int VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 VAR_7 = VAR_5 ? VAR_3 : VAR_2;
 VAR_6 = FUNC_1(VAR_4->client,
   VAR_1 | VAR_0, VAR_7);
 if (VAR_6) {
  FUNC_0(&VAR_4->client->dev,
   "failed to set power state %d\n", VAR_5);
  return VAR_6;
 }
 VAR_4->power_state = VAR_5;

 return 0;
}
