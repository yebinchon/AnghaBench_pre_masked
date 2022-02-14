
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* extra; scalar_t__* id; scalar_t__* proto; scalar_t__* type; } ;
struct serio {scalar_t__* firmware_id; TYPE_1__ id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__*,...) ;
 struct serio* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct serio *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);

 FUNC_0("SERIO_TYPE=%02x", VAR_3->id.type);
 FUNC_0("SERIO_PROTO=%02x", VAR_3->id.proto);
 FUNC_0("SERIO_ID=%02x", VAR_3->id.id);
 FUNC_0("SERIO_EXTRA=%02x", VAR_3->id.extra);

 FUNC_0("MODALIAS=serio:ty%02Xpr%02Xid%02Xex%02X",
    VAR_3->id.type, VAR_3->id.proto, VAR_3->id.id, VAR_3->id.extra);

 if (VAR_3->firmware_id[0])
  FUNC_0("SERIO_FIRMWARE_ID=%s",
         VAR_3->firmware_id);

 return 0;
}
