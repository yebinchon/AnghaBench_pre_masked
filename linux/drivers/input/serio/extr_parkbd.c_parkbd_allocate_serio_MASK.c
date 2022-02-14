
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct serio {int phys; int name; int write; TYPE_1__ id; } ;
struct TYPE_6__ {TYPE_2__* port; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 struct serio* FUNC_0 (int,int ) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static struct serio *FUNC_3(void)
{
 struct serio *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct serio), VAR_0);
 if (VAR_4) {
  VAR_4->id.type = VAR_2;
  VAR_4->write = VAR_3,
  FUNC_2(VAR_4->name, "PARKBD AT/XT keyboard adapter", sizeof(VAR_4->name));
  FUNC_1(VAR_4->phys, sizeof(VAR_4->phys), "%s/serio0", VAR_1->port->name);
 }

 return VAR_4;
}
