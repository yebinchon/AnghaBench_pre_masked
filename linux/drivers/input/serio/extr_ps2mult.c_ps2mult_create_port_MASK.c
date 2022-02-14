
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct serio {char* phys; TYPE_2__* port_data; struct serio* parent; int stop; int start; int write; TYPE_1__ id; int name; } ;
struct ps2mult {TYPE_2__* ports; struct serio* mx_serio; } ;
struct TYPE_4__ {struct serio* serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct serio* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,char*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ps2mult *VAR_6, int VAR_7)
{
 struct serio *VAR_8 = VAR_6->mx_serio;
 struct serio *VAR_9;

 VAR_9 = FUNC_0(sizeof(struct serio), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_2(VAR_9->name, "TQC PS/2 Multiplexer", sizeof(VAR_9->name));
 FUNC_1(VAR_9->phys, sizeof(VAR_9->phys),
   "%s/port%d", VAR_8->phys, VAR_7);
 VAR_9->id.type = VAR_2;
 VAR_9->write = VAR_5;
 VAR_9->start = VAR_3;
 VAR_9->stop = VAR_4;
 VAR_9->parent = VAR_6->mx_serio;
 VAR_9->port_data = &VAR_6->ports[VAR_7];

 VAR_6->ports[VAR_7].serio = VAR_9;

 return 0;
}
