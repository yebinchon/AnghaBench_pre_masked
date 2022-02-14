
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static umode_t
FUNC_0(struct kobject *VAR_3, struct attribute *VAR_4, int VAR_5)
{
 if (VAR_4 == &VAR_1.attr)
  return VAR_2.flags & VAR_0 ? VAR_4->mode : 0;

 return VAR_4->mode;
}
