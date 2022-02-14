
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int dummy; } ;
struct elan_tp_data {TYPE_1__* client; struct input_dev* tp_input; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct elan_tp_data *VAR_6, u8 *VAR_7)
{
 struct input_dev *VAR_8 = VAR_6->tp_input;
 u8 *VAR_9 = &VAR_7[VAR_3 + 1];
 int VAR_10, VAR_11;

 if (!VAR_6->tp_input) {
  FUNC_0(&VAR_6->client->dev,
         "received a trackpoint report while no trackpoint device has been created. Please report upstream.\n");
  return;
 }

 FUNC_1(VAR_8, VAR_0, VAR_9[0] & 0x01);
 FUNC_1(VAR_8, VAR_2, VAR_9[0] & 0x02);
 FUNC_1(VAR_8, VAR_1, VAR_9[0] & 0x04);

 if ((VAR_9[3] & 0x0F) == 0x06) {
  VAR_10 = VAR_9[4] - (int)((VAR_9[1] ^ 0x80) << 1);
  VAR_11 = (int)((VAR_9[2] ^ 0x80) << 1) - VAR_9[5];

  FUNC_2(VAR_8, VAR_4, VAR_10);
  FUNC_2(VAR_8, VAR_5, VAR_11);
 }

 FUNC_3(VAR_8);
}
