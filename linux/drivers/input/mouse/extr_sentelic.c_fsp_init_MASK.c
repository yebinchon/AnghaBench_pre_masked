
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {int pktsize; struct fsp_data* private; TYPE_3__ ps2dev; int cleanup; int reconnect; int disconnect; int protocol_handler; } ;
struct fsp_data {int ver; int rev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psmouse*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct psmouse*,int*) ;
 int FUNC_2 (struct psmouse*,int*) ;
 scalar_t__ FUNC_3 (struct psmouse*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct fsp_data*) ;
 struct fsp_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct psmouse*,char*,int) ;
 int FUNC_8 (struct psmouse*,char*,int,int,int,int,int ) ;
 int FUNC_9 (int *,int *) ;

int FUNC_10(struct psmouse *VAR_10)
{
 struct fsp_data *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15;

 if (FUNC_3(VAR_10, &VAR_12) ||
     FUNC_1(VAR_10, &VAR_13)) {
  return -VAR_0;
 }
 if (VAR_12 >= VAR_2) {

  FUNC_2(VAR_10, &VAR_14);
 }

 FUNC_8(VAR_10,
       "Finger Sensing Pad, hw: %d.%d.%d, sn: %x, sw: %s\n",
       VAR_12 >> 4, VAR_12 & 0x0F, VAR_13, VAR_14, VAR_6);

 VAR_10->private = VAR_11 = FUNC_6(sizeof(struct fsp_data), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ver = VAR_12;
 VAR_11->rev = VAR_13;

 VAR_10->protocol_handler = VAR_7;
 VAR_10->disconnect = VAR_5;
 VAR_10->reconnect = VAR_8;
 VAR_10->cleanup = VAR_9;
 VAR_10->pktsize = 4;

 VAR_15 = FUNC_0(VAR_10);
 if (VAR_15)
  goto err_out;


 VAR_15 = FUNC_4(VAR_10);
 if (VAR_15)
  goto err_out;

 VAR_15 = FUNC_9(&VAR_10->ps2dev.serio->dev.kobj,
       &VAR_4);
 if (VAR_15) {
  FUNC_7(VAR_10,
       "Failed to create sysfs attributes (%d)", VAR_15);
  goto err_out;
 }

 return 0;

 err_out:
 FUNC_5(VAR_10->private);
 VAR_10->private = ((void*)0);
 return VAR_15;
}
