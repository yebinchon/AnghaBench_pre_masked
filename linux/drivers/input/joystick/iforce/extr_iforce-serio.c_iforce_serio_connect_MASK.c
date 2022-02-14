
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct serio {int dev; } ;
struct TYPE_2__ {int * xport_ops; } ;
struct iforce_serio {TYPE_1__ iforce; struct serio* serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (struct iforce_serio*) ;
 struct iforce_serio* FUNC_2 (int,int ) ;
 int FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*,struct serio_driver*) ;
 int FUNC_5 (struct serio*,struct iforce_serio*) ;

__attribute__((used)) static int FUNC_6(struct serio *VAR_4, struct serio_driver *VAR_5)
{
 struct iforce_serio *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->iforce.xport_ops = &VAR_3;

 VAR_6->serio = VAR_4;
 FUNC_5(VAR_4, VAR_6);

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7)
  goto fail1;

 VAR_7 = FUNC_0(&VAR_4->dev, VAR_0, &VAR_6->iforce);
 if (VAR_7)
  goto fail2;

 return 0;

 fail2: FUNC_3(VAR_4);
 fail1: FUNC_5(VAR_4, ((void*)0));
 FUNC_1(VAR_6);
 return VAR_7;
}
