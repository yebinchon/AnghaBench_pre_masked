
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serio {int dummy; } ;
struct psmouse_attribute {int data; int (* show ) (struct psmouse*,int ,char*) ;} ;
struct psmouse {TYPE_1__* protocol; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct device_attribute dattr; } ;
struct TYPE_3__ {scalar_t__ smbus_companion; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct psmouse* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct psmouse*,int ,char*) ;
 struct psmouse_attribute* FUNC_2 (struct device_attribute*) ;
 struct serio* FUNC_3 (struct device*) ;

ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct serio *VAR_5 = FUNC_3(VAR_2);
 struct psmouse_attribute *VAR_6 = FUNC_2(VAR_3);
 struct psmouse *VAR_7 = FUNC_0(VAR_5);

 if (VAR_7->protocol->smbus_companion &&
   VAR_3 != &VAR_1.dattr)
  return -VAR_0;

 return VAR_6->show(VAR_7, VAR_6->data, VAR_4);
}
