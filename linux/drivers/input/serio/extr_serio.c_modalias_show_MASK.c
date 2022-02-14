
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int proto; int id; int extra; } ;
struct serio {TYPE_1__ id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int) ;
 struct serio* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct serio *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "serio:ty%02Xpr%02Xid%02Xex%02X\n",
   VAR_3->id.type, VAR_3->id.proto, VAR_3->id.id, VAR_3->id.extra);
}
