
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int devno; } ;
struct TYPE_5__ {int ssid; int devno; } ;
struct TYPE_8__ {TYPE_2__ fcp; TYPE_1__ ccw; } ;
struct TYPE_7__ {int type; } ;





 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_2,
       struct kobj_attribute *VAR_3, char *VAR_4)
{
 switch (VAR_1.type) {
 case 130:
  return FUNC_0(VAR_4, "0.%x.%04x\n", VAR_0.ccw.ssid,
          VAR_0.ccw.devno);
 case 129:
 case 128:
  return FUNC_0(VAR_4, "0.0.%04x\n", VAR_0.fcp.devno);
 default:
  return 0;
 }
}
