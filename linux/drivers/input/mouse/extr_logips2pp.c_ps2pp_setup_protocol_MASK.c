
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* serio; } ;
struct psmouse {int pktsize; TYPE_2__ ps2dev; int disconnect; int set_resolution; int protocol_handler; } ;
struct ps2pp_info {scalar_t__ kind; } ;
struct TYPE_6__ {int dattr; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (struct psmouse*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_5,
    const struct ps2pp_info *VAR_6)
{
 int VAR_7;

 VAR_5->protocol_handler = VAR_2;
 VAR_5->pktsize = 3;

 if (VAR_6->kind != VAR_0) {
  VAR_5->set_resolution = VAR_3;
  VAR_5->disconnect = VAR_1;

  VAR_7 = FUNC_0(&VAR_5->ps2dev.serio->dev,
        &VAR_4.dattr);
  if (VAR_7) {
   FUNC_1(VAR_5,
        "failed to create smartscroll sysfs attribute, error: %d\n",
        VAR_7);
   return VAR_7;
  }
 }

 return 0;
}
