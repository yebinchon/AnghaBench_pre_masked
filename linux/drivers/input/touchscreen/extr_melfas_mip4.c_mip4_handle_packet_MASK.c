
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mip4_ts {int event_format; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mip4_ts*,int*) ;
 int FUNC_3 (struct mip4_ts*,int*) ;

__attribute__((used)) static int FUNC_4(struct mip4_ts *VAR_1, u8 *VAR_2)
{
 u8 VAR_3;

 switch (VAR_1->event_format) {
 case 0:
 case 1:
  VAR_3 = (VAR_2[0] & 0x40) >> 6;
  break;

 case 3:
  VAR_3 = (VAR_2[0] & 0xF0) >> 4;
  break;

 default:

  return -VAR_0;
 }

 FUNC_0(&VAR_1->client->dev, "Type: %d\n", VAR_3);


 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_1, VAR_2);
  break;

 case 128:
  FUNC_3(VAR_1, VAR_2);
  break;

 default:
  FUNC_1(&VAR_1->client->dev, "Unknown event type: %d\n", VAR_3);
  break;
 }

 return 0;
}
