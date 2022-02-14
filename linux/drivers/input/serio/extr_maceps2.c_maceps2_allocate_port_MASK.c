
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int type; } ;
struct serio {TYPE_2__ dev; int * port_data; int phys; int name; int close; int open; int write; TYPE_1__ id; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct serio* FUNC_0 (int,int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int ,int,char*,int) ;

__attribute__((used)) static struct serio *FUNC_2(int VAR_7)
{
 struct serio *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct serio), VAR_0);
 if (VAR_8) {
  VAR_8->id.type = VAR_1;
  VAR_8->write = VAR_5;
  VAR_8->open = VAR_4;
  VAR_8->close = VAR_2;
  FUNC_1(VAR_8->name, sizeof(VAR_8->name), "MACE PS/2 port%d", VAR_7);
  FUNC_1(VAR_8->phys, sizeof(VAR_8->phys), "mace/serio%d", VAR_7);
  VAR_8->port_data = &VAR_6[VAR_7];
  VAR_8->dev.parent = &VAR_3->dev;
 }

 return VAR_8;
}
