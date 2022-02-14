
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct serio {struct serio* parent; TYPE_1__ id; } ;
struct psmouse_attribute {int (* set ) (struct psmouse*,int ,char const*,size_t) ;scalar_t__ protect; int data; } ;
struct psmouse {scalar_t__ state; TYPE_2__* protocol; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {struct device_attribute dattr; } ;
struct TYPE_5__ {scalar_t__ smbus_companion; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct psmouse*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (struct psmouse*) ;
 int VAR_5 ;
 struct psmouse* FUNC_4 (struct serio*) ;
 int FUNC_5 (struct psmouse*,int ,char const*,size_t) ;
 struct psmouse_attribute* FUNC_6 (struct device_attribute*) ;
 struct serio* FUNC_7 (struct device*) ;

ssize_t FUNC_8(struct device *VAR_6, struct device_attribute *VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 struct serio *VAR_10 = FUNC_7(VAR_6);
 struct psmouse_attribute *VAR_11 = FUNC_6(VAR_7);
 struct psmouse *VAR_12, *VAR_13 = ((void*)0);
 int VAR_14;

 VAR_14 = FUNC_0(&VAR_5);
 if (VAR_14)
  goto out;

 VAR_12 = FUNC_4(VAR_10);

 if (VAR_12->protocol->smbus_companion &&
   VAR_7 != &VAR_4.dattr) {
  VAR_14 = -VAR_1;
  goto out_unlock;
 }

 if (VAR_11->protect) {
  if (VAR_12->state == VAR_2) {
   VAR_14 = -VAR_0;
   goto out_unlock;
  }

  if (VAR_10->parent && VAR_10->id.type == VAR_3) {
   VAR_13 = FUNC_4(VAR_10->parent);
   FUNC_3(VAR_13);
  }

  if (!VAR_12->protocol->smbus_companion)
   FUNC_3(VAR_12);
 }

 VAR_14 = VAR_11->set(VAR_12, VAR_11->data, VAR_8, VAR_9);

 if (VAR_11->protect) {
  if (VAR_14 != -VAR_0 && !VAR_12->protocol->smbus_companion)
   FUNC_2(VAR_12);

  if (VAR_13)
   FUNC_2(VAR_13);
 }

 out_unlock:
 FUNC_1(&VAR_5);
 out:
 return VAR_14;
}
