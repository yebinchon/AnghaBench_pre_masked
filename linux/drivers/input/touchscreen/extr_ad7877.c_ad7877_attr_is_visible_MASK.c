
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct kobject {int dummy; } ;
struct attribute {scalar_t__ mode; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {struct attribute attr; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static umode_t FUNC_0(struct kobject *VAR_3,
         struct attribute *VAR_4, int VAR_5)
{
 umode_t VAR_6 = VAR_4->mode;

 if (VAR_4 == &VAR_0) {
  if (VAR_2)
   VAR_6 = 0;
 } else if (VAR_4 == &VAR_1) {
  if (!VAR_2)
   VAR_6 = 0;
 }

 return VAR_6;
}
