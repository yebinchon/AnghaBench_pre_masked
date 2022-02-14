
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_flash_t {int status; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct update_flash_t VAR_9 ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_10,
       struct kobj_attribute *VAR_11,
       const char *VAR_12, size_t VAR_13)
{
 struct update_flash_t *const VAR_14 = &VAR_9;
 int VAR_15 = VAR_13;

 FUNC_0(&VAR_8);

 switch (VAR_12[0]) {
 case '0':
  if (VAR_14->status == VAR_1)
   FUNC_2(VAR_4);
  VAR_14->status = VAR_3;
  break;
 case '1':

  if (VAR_7.status == VAR_6)
   VAR_14->status =
    FUNC_2(VAR_5);
  else
   VAR_14->status = VAR_2;
  break;
 default:
  VAR_15 = -VAR_0;
 }

 FUNC_1(&VAR_8);
 return VAR_15;
}
