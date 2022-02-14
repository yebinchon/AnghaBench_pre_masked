
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct apds9300_data {int intr_en; TYPE_1__* client; int power_state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct apds9300_data *VAR_5, int VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 if (!VAR_5->power_state)
  return -VAR_4;

 VAR_8 = VAR_6 ? VAR_2 | VAR_3 : 0x00;
 VAR_7 = FUNC_1(VAR_5->client,
   VAR_1 | VAR_0, VAR_8);
 if (VAR_7) {
  FUNC_0(&VAR_5->client->dev,
   "failed to set interrupt state %d\n", VAR_6);
  return VAR_7;
 }
 VAR_5->intr_en = VAR_6;

 return 0;
}
