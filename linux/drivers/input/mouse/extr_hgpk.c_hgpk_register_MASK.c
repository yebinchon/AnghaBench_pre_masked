
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* serio; } ;
struct psmouse {int resetafter; scalar_t__ model; TYPE_2__ ps2dev; int dev; scalar_t__ resync_time; int reconnect; int disconnect; int poll; int protocol_handler; struct hgpk_data* private; } ;
struct hgpk_data {int mode; } ;
struct TYPE_10__ {int dattr; } ;
struct TYPE_9__ {int dattr; } ;
struct TYPE_8__ {int dattr; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_3 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_8)
{
 struct hgpk_data *VAR_9 = VAR_8->private;
 int VAR_10;


 VAR_8->protocol_handler = VAR_3;
 VAR_8->poll = VAR_2;
 VAR_8->disconnect = VAR_1;
 VAR_8->reconnect = VAR_4;


 VAR_8->resync_time = 0;

 VAR_8->resetafter = 1024;

 FUNC_2(VAR_8->dev, ((void*)0), VAR_9->mode);

 VAR_10 = FUNC_0(&VAR_8->ps2dev.serio->dev,
     &VAR_6.dattr);
 if (VAR_10) {
  FUNC_3(VAR_8, "Failed creating 'powered' sysfs node\n");
  return VAR_10;
 }

 VAR_10 = FUNC_0(&VAR_8->ps2dev.serio->dev,
     &VAR_5.dattr);
 if (VAR_10) {
  FUNC_3(VAR_8,
       "Failed creating 'hgpk_mode' sysfs node\n");
  goto err_remove_powered;
 }


 if (VAR_8->model >= VAR_0) {
  VAR_10 = FUNC_0(&VAR_8->ps2dev.serio->dev,
      &VAR_7.dattr);
  if (VAR_10) {
   FUNC_3(VAR_8,
        "Failed creating 'recalibrate' sysfs node\n");
   goto err_remove_mode;
  }
 }

 return 0;

err_remove_mode:
 FUNC_1(&VAR_8->ps2dev.serio->dev,
      &VAR_5.dattr);
err_remove_powered:
 FUNC_1(&VAR_8->ps2dev.serio->dev,
      &VAR_6.dattr);
 return VAR_10;
}
