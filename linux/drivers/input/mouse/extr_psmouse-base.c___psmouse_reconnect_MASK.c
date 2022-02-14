
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct serio {struct serio* parent; TYPE_1__ id; } ;
struct psmouse {int (* fast_reconnect ) (struct psmouse*) ;int (* reconnect ) (struct psmouse*) ;TYPE_2__* protocol; int (* pt_activate ) (struct psmouse*) ;} ;
typedef enum psmouse_type { ____Placeholder_psmouse_type } psmouse_type ;
struct TYPE_4__ {int type; int smbus_companion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*,int ,int) ;
 int FUNC_5 (struct psmouse*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct psmouse*) ;
 int FUNC_7 (struct psmouse*) ;
 int FUNC_8 (struct psmouse*,int ) ;
 struct psmouse* FUNC_9 (struct serio*) ;
 int FUNC_10 (struct psmouse*) ;

__attribute__((used)) static int FUNC_11(struct serio *VAR_6, bool VAR_7)
{
 struct psmouse *VAR_8 = FUNC_9(VAR_6);
 struct psmouse *VAR_9 = ((void*)0);
 int (*VAR_10)(struct psmouse *);
 enum psmouse_type VAR_11;
 int VAR_12 = -1;

 FUNC_0(&VAR_5);

 if (VAR_7) {
  VAR_10 = VAR_8->fast_reconnect;
  if (!VAR_10) {
   VAR_12 = -VAR_0;
   goto out_unlock;
  }
 } else {
  VAR_10 = VAR_8->reconnect;
 }

 if (VAR_6->parent && VAR_6->id.type == VAR_3) {
  VAR_9 = FUNC_9(VAR_6->parent);
  FUNC_3(VAR_9);
 }

 FUNC_8(VAR_8, VAR_2);

 if (VAR_10) {
  if (VAR_10(VAR_8))
   goto out;
 } else {
  FUNC_7(VAR_8);

  if (FUNC_6(VAR_8) < 0)
   goto out;

  VAR_11 = FUNC_4(VAR_8, VAR_4, 0);
  if (VAR_8->protocol->type != VAR_11)
   goto out;
 }





 if (!VAR_8->protocol->smbus_companion) {
  FUNC_8(VAR_8, VAR_1);
  FUNC_5(VAR_8);
 }

 if (VAR_9 && VAR_9->pt_activate)
  VAR_9->pt_activate(VAR_9);





 if (!VAR_8->protocol->smbus_companion)
  FUNC_2(VAR_8);

 VAR_12 = 0;

out:

 if (VAR_9)
  FUNC_2(VAR_9);

out_unlock:
 FUNC_1(&VAR_5);
 return VAR_12;
}
