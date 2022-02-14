
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct zet6223_ts {int fingernum; void* max_y; void* max_x; TYPE_1__* client; } ;
typedef int cmd ;
typedef int buf ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 void* FUNC_2 (int*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct zet6223_ts *VAR_4)
{
 u8 VAR_5[VAR_2];
 u8 VAR_6 = VAR_1;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_4->client, &VAR_6, sizeof(VAR_6));
 if (VAR_7 != sizeof(VAR_6)) {
  VAR_8 = VAR_7 < 0 ? VAR_7 : -VAR_0;
  FUNC_0(&VAR_4->client->dev,
   "touchpanel info cmd failed: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7 = FUNC_3(VAR_4->client, VAR_5, sizeof(VAR_5));
 if (VAR_7 != sizeof(VAR_5)) {
  VAR_8 = VAR_7 < 0 ? VAR_7 : -VAR_0;
  FUNC_0(&VAR_4->client->dev,
   "failed to retrieve touchpanel info: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_4->fingernum = VAR_5[15] & 0x7F;
 if (VAR_4->fingernum > VAR_3) {
  FUNC_1(&VAR_4->client->dev,
    "touchpanel reports %d fingers, limiting to %d\n",
    VAR_4->fingernum, VAR_3);
  VAR_4->fingernum = VAR_3;
 }

 VAR_4->max_x = FUNC_2(&VAR_5[8]);
 VAR_4->max_y = FUNC_2(&VAR_5[10]);

 return 0;
}
