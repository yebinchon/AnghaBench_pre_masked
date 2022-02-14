
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct psmouse_protocol {scalar_t__ (* detect ) (struct psmouse*,int) ;scalar_t__ (* init ) (struct psmouse*) ;char* name; int type; } ;
struct TYPE_7__ {TYPE_2__* serio; } ;
struct psmouse {int pktsize; char* vendor; char* name; int model; struct psmouse_protocol const* protocol; int phys; int devname; scalar_t__ resync_time; scalar_t__ (* poll ) (struct psmouse*) ;TYPE_3__ ps2dev; struct input_dev* dev; } ;
struct TYPE_8__ {int vendor; int version; int product; int bustype; } ;
struct TYPE_5__ {int * parent; } ;
struct input_dev {TYPE_4__ id; int phys; int name; TYPE_1__ dev; } ;
typedef enum psmouse_type { ____Placeholder_psmouse_type } psmouse_type ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct psmouse*,int ,int) ;
 int VAR_1 ;
 struct psmouse_protocol* FUNC_2 (int) ;
 int FUNC_3 (int ,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (struct psmouse*,int) ;
 scalar_t__ FUNC_5 (struct psmouse*) ;
 scalar_t__ FUNC_6 (struct psmouse*) ;

__attribute__((used)) static int FUNC_7(struct psmouse *VAR_2,
       const struct psmouse_protocol *VAR_3)
{
 const struct psmouse_protocol *VAR_4;
 struct input_dev *VAR_5 = VAR_2->dev;
 enum psmouse_type VAR_6;

 VAR_5->dev.parent = &VAR_2->ps2dev.serio->dev;

 if (VAR_3 && (VAR_3->detect || VAR_3->init)) {
  FUNC_0(VAR_2);

  if (VAR_3->detect && VAR_3->detect(VAR_2, 1) < 0)
   return -1;

  if (VAR_3->init && VAR_3->init(VAR_2) < 0)
   return -1;

  VAR_4 = VAR_3;
 } else {
  VAR_6 = FUNC_1(VAR_2, VAR_1, 1);
  VAR_4 = FUNC_2(VAR_6);
 }

 VAR_2->protocol = VAR_4;






 if (VAR_2->pktsize == 3)
  VAR_2->resync_time = 0;







 if (VAR_2->resync_time && VAR_2->poll(VAR_2))
  VAR_2->resync_time = 0;

 FUNC_3(VAR_2->devname, sizeof(VAR_2->devname), "%s %s %s",
   VAR_4->name, VAR_2->vendor, VAR_2->name);

 VAR_5->name = VAR_2->devname;
 VAR_5->phys = VAR_2->phys;
 VAR_5->id.bustype = VAR_0;
 VAR_5->id.vendor = 0x0002;
 VAR_5->id.product = VAR_2->protocol->type;
 VAR_5->id.version = VAR_2->model;

 return 0;
}
