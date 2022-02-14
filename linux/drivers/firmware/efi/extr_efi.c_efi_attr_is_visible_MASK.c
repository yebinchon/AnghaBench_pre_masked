
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_8__ {scalar_t__ fw_vendor; scalar_t__ runtime; scalar_t__ config_table; } ;
struct TYPE_7__ {struct attribute attr; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_5__ {struct attribute attr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static umode_t FUNC_1(struct kobject *VAR_6,
       struct attribute *VAR_7, int VAR_8)
{
 if (VAR_7 == &VAR_4.attr) {
  if (FUNC_0(VAR_1) ||
    VAR_2.fw_vendor == VAR_0)
   return 0;
 } else if (VAR_7 == &VAR_5.attr) {
  if (VAR_2.runtime == VAR_0)
   return 0;
 } else if (VAR_7 == &VAR_3.attr) {
  if (VAR_2.config_table == VAR_0)
   return 0;
 }

 return VAR_7->mode;
}
