
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktsize; scalar_t__ resync_time; int protocol_handler; int reconnect; int disconnect; struct byd_data* private; struct input_dev* dev; } ;
struct input_dev {int relbit; int evbit; int keybit; int propbit; } ;
struct byd_data {int timer; struct psmouse* psmouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ,int ,int ,int ) ;
 struct byd_data* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct psmouse*) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(struct psmouse *VAR_22)
{
 struct input_dev *VAR_23 = VAR_22->dev;
 struct byd_data *VAR_24;

 if (FUNC_6(VAR_22))
  return -VAR_10;

 if (FUNC_2(VAR_22))
  return -VAR_10;

 VAR_24 = FUNC_5(sizeof(*VAR_24), VAR_14);
 if (!VAR_24)
  return -VAR_11;

 VAR_24->psmouse = VAR_22;
 FUNC_7(&VAR_24->timer, VAR_18, 0);

 VAR_22->private = VAR_24;
 VAR_22->disconnect = VAR_19;
 VAR_22->reconnect = VAR_21;
 VAR_22->protocol_handler = VAR_20;
 VAR_22->pktsize = 4;
 VAR_22->resync_time = 0;

 FUNC_1(VAR_15, VAR_23->propbit);

 FUNC_1(VAR_6, VAR_23->keybit);
 FUNC_1(VAR_5, VAR_23->keybit);

 FUNC_1(VAR_2, VAR_23->keybit);
 FUNC_1(VAR_4, VAR_23->keybit);
 FUNC_0(VAR_3, VAR_23->keybit);


 FUNC_1(VAR_12, VAR_23->evbit);
 FUNC_4(VAR_23, VAR_0, 0, VAR_9, 0, 0);
 FUNC_4(VAR_23, VAR_1, 0, VAR_7, 0, 0);
 FUNC_3(VAR_23, VAR_0, VAR_8);
 FUNC_3(VAR_23, VAR_1, VAR_8);

 FUNC_0(VAR_13, VAR_23->evbit);
 FUNC_0(VAR_16, VAR_23->relbit);
 FUNC_0(VAR_17, VAR_23->relbit);

 return 0;
}
