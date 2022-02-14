
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct serio {scalar_t__ parent; TYPE_2__ id; int * drv; int children; } ;
typedef struct psmouse_protocol {scalar_t__ smbus_companion; } const psmouse_protocol ;
struct TYPE_3__ {struct serio* serio; } ;
struct psmouse {int (* pt_activate ) (struct psmouse*) ;struct input_dev* dev; int (* disconnect ) (struct psmouse*) ;struct psmouse_protocol const* protocol; int (* pt_deactivate ) (struct psmouse*) ;TYPE_1__ ps2dev; } ;
struct input_dev {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct input_dev* FUNC_0 () ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int FUNC_7 (struct psmouse*) ;
 int VAR_9 ;
 struct psmouse_protocol const* FUNC_8 (char const*,size_t) ;
 struct psmouse_protocol const* VAR_10 ;
 int FUNC_9 (struct psmouse*) ;
 int FUNC_10 (struct psmouse*,int ) ;
 scalar_t__ FUNC_11 (struct psmouse*,struct psmouse_protocol const*) ;
 int FUNC_12 (struct psmouse*,char*) ;
 struct psmouse* FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct serio*) ;
 int FUNC_15 (struct psmouse*) ;
 int FUNC_16 (struct psmouse*) ;
 int FUNC_17 (struct psmouse*) ;
 int FUNC_18 (struct psmouse*) ;

__attribute__((used)) static ssize_t FUNC_19(struct psmouse *VAR_11, void *VAR_12, const char *VAR_13, size_t VAR_14)
{
 struct serio *VAR_15 = VAR_11->ps2dev.serio;
 struct psmouse *VAR_16 = ((void*)0);
 struct input_dev *VAR_17, *VAR_18;
 const struct psmouse_protocol *VAR_19, *VAR_20;
 int VAR_21;
 int VAR_22 = 0;

 VAR_19 = FUNC_8(VAR_13, VAR_14);
 if (!VAR_19)
  return -VAR_0;

 if (VAR_11->protocol == VAR_19)
  return VAR_14;

 VAR_18 = FUNC_0();
 if (!VAR_18)
  return -VAR_3;

 while (!FUNC_4(&VAR_15->children)) {
  if (++VAR_22 > 3) {
   FUNC_12(VAR_11,
         "failed to destroy children ports, protocol change aborted.\n");
   FUNC_1(VAR_18);
   return -VAR_1;
  }

  FUNC_6(&VAR_9);
  FUNC_14(VAR_15);
  FUNC_5(&VAR_9);

  if (VAR_15->drv != &VAR_8) {
   FUNC_1(VAR_18);
   return -VAR_2;
  }

  if (VAR_11->protocol == VAR_19) {
   FUNC_1(VAR_18);
   return VAR_14;
  }
 }

 if (VAR_15->parent && VAR_15->id.type == VAR_7) {
  VAR_16 = FUNC_13(VAR_15->parent);
  if (VAR_16->pt_deactivate)
   VAR_16->pt_deactivate(VAR_16);
 }

 VAR_17 = VAR_11->dev;
 VAR_20 = VAR_11->protocol;

 if (VAR_11->disconnect)
  VAR_11->disconnect(VAR_11);

 FUNC_10(VAR_11, VAR_5);

 VAR_11->dev = VAR_18;
 FUNC_10(VAR_11, VAR_6);

 if (FUNC_11(VAR_11, VAR_19) < 0) {
  FUNC_9(VAR_11);

  FUNC_11(VAR_11, &VAR_10[0]);
 }

 FUNC_7(VAR_11);
 FUNC_10(VAR_11, VAR_4);

 if (VAR_11->protocol->smbus_companion) {
  FUNC_1(VAR_11->dev);
  VAR_11->dev = ((void*)0);
 } else {
  VAR_21 = FUNC_2(VAR_11->dev);
  if (VAR_21) {
   if (VAR_11->disconnect)
    VAR_11->disconnect(VAR_11);

   FUNC_10(VAR_11, VAR_5);
   FUNC_1(VAR_18);
   VAR_11->dev = VAR_17;
   FUNC_10(VAR_11, VAR_6);
   FUNC_11(VAR_11, VAR_20);
   FUNC_7(VAR_11);
   FUNC_10(VAR_11, VAR_4);

   return VAR_21;
  }
 }

 if (VAR_17)
  FUNC_3(VAR_17);

 if (VAR_16 && VAR_16->pt_activate)
  VAR_16->pt_activate(VAR_16);

 return VAR_14;
}
