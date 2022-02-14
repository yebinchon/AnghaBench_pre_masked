
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct TYPE_2__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {int swbit; int evbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; int propbit; scalar_t__ uniq; scalar_t__ phys; scalar_t__ name; TYPE_1__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct input_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_18, struct kobj_uevent_env *VAR_19)
{
 struct input_dev *VAR_20 = FUNC_4(VAR_18);

 FUNC_2("PRODUCT=%x/%x/%x/%x",
    VAR_20->id.bustype, VAR_20->id.vendor,
    VAR_20->id.product, VAR_20->id.version);
 if (VAR_20->name)
  FUNC_2("NAME=\"%s\"", VAR_20->name);
 if (VAR_20->phys)
  FUNC_2("PHYS=\"%s\"", VAR_20->phys);
 if (VAR_20->uniq)
  FUNC_2("UNIQ=\"%s\"", VAR_20->uniq);

 FUNC_0("PROP=", VAR_20->propbit, VAR_11);

 FUNC_0("EV=", VAR_20->evbit, VAR_5);
 if (FUNC_3(VAR_3, VAR_20->evbit))
  FUNC_0("KEY=", VAR_20->keybit, VAR_12);
 if (FUNC_3(VAR_7, VAR_20->evbit))
  FUNC_0("REL=", VAR_20->relbit, VAR_15);
 if (FUNC_3(VAR_1, VAR_20->evbit))
  FUNC_0("ABS=", VAR_20->absbit, VAR_0);
 if (FUNC_3(VAR_6, VAR_20->evbit))
  FUNC_0("MSC=", VAR_20->mscbit, VAR_14);
 if (FUNC_3(VAR_4, VAR_20->evbit))
  FUNC_0("LED=", VAR_20->ledbit, VAR_13);
 if (FUNC_3(VAR_8, VAR_20->evbit))
  FUNC_0("SND=", VAR_20->sndbit, VAR_16);
 if (FUNC_3(VAR_2, VAR_20->evbit))
  FUNC_0("FF=", VAR_20->ffbit, VAR_10);
 if (FUNC_3(VAR_9, VAR_20->evbit))
  FUNC_0("SW=", VAR_20->swbit, VAR_17);

 FUNC_1(VAR_20);

 return 0;
}
