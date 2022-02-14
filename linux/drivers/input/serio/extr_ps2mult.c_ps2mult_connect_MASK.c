
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct serio {TYPE_1__* ports; int phys; int name; int dev; TYPE_1__* out_port; TYPE_1__* in_port; struct serio* mx_serio; int lock; int write; } ;
struct ps2mult {TYPE_1__* ports; int phys; int name; int dev; TYPE_1__* out_port; TYPE_1__* in_port; struct ps2mult* mx_serio; int lock; int write; } ;
struct TYPE_2__ {struct serio* serio; int sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct serio*) ;
 struct serio* FUNC_2 (int,int ) ;
 int * VAR_5 ;
 int FUNC_3 (struct serio*,int) ;
 int FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*,struct serio_driver*) ;
 int FUNC_6 (struct serio*) ;
 int FUNC_7 (struct serio*,struct serio*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct serio *VAR_6, struct serio_driver *VAR_7)
{
 struct ps2mult *VAR_8;
 int VAR_9;
 int VAR_10;

 if (!VAR_6->write)
  return -VAR_0;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_8(&VAR_8->lock);
 VAR_8->mx_serio = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8->ports[VAR_9].sel = VAR_5[VAR_9];
  VAR_10 = FUNC_3(VAR_8, VAR_9);
  if (VAR_10)
   goto err_out;
 }

 VAR_8->in_port = VAR_8->out_port = &VAR_8->ports[VAR_3];

 FUNC_7(VAR_6, VAR_8);
 VAR_10 = FUNC_5(VAR_6, VAR_7);
 if (VAR_10)
  goto err_out;

 FUNC_4(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct serio *VAR_11 = VAR_8->ports[VAR_9].serio;

  FUNC_0(&VAR_6->dev, "%s port at %s\n", VAR_11->name, VAR_6->phys);
  FUNC_6(VAR_11);
 }

 return 0;

err_out:
 while (--VAR_9 >= 0)
  FUNC_1(VAR_8->ports[VAR_9].serio);
 FUNC_1(VAR_8);
 return VAR_10;
}
