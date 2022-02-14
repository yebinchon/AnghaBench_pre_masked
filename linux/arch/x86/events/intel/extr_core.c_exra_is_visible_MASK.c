
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_2__ {int version; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static umode_t
FUNC_0(struct kobject *VAR_1, struct attribute *VAR_2, int VAR_3)
{
 return VAR_0.version >= 2 ? VAR_2->mode : 0;
}
