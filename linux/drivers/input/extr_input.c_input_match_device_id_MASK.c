
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_device_id {int flags; scalar_t__ bustype; scalar_t__ vendor; scalar_t__ product; scalar_t__ version; int propbit; int swbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; int evbit; } ;
struct TYPE_2__ {scalar_t__ bustype; scalar_t__ vendor; scalar_t__ product; scalar_t__ version; } ;
struct input_dev {int propbit; int swbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; int evbit; TYPE_1__ id; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ) ;

bool FUNC_1(const struct input_dev *VAR_14,
      const struct input_device_id *VAR_15)
{
 if (VAR_15->flags & VAR_3)
  if (VAR_15->bustype != VAR_14->id.bustype)
   return 0;

 if (VAR_15->flags & VAR_5)
  if (VAR_15->vendor != VAR_14->id.vendor)
   return 0;

 if (VAR_15->flags & VAR_4)
  if (VAR_15->product != VAR_14->id.product)
   return 0;

 if (VAR_15->flags & VAR_6)
  if (VAR_15->version != VAR_14->id.version)
   return 0;

 if (!FUNC_0(VAR_15->evbit, VAR_14->evbit, VAR_1) ||
     !FUNC_0(VAR_15->keybit, VAR_14->keybit, VAR_8) ||
     !FUNC_0(VAR_15->relbit, VAR_14->relbit, VAR_11) ||
     !FUNC_0(VAR_15->absbit, VAR_14->absbit, VAR_0) ||
     !FUNC_0(VAR_15->mscbit, VAR_14->mscbit, VAR_10) ||
     !FUNC_0(VAR_15->ledbit, VAR_14->ledbit, VAR_9) ||
     !FUNC_0(VAR_15->sndbit, VAR_14->sndbit, VAR_12) ||
     !FUNC_0(VAR_15->ffbit, VAR_14->ffbit, VAR_2) ||
     !FUNC_0(VAR_15->swbit, VAR_14->swbit, VAR_13) ||
     !FUNC_0(VAR_15->propbit, VAR_14->propbit, VAR_7)) {
  return 0;
 }

 return 1;
}
