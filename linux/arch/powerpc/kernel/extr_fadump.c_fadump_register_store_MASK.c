
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int dump_registered; TYPE_1__* ops; scalar_t__ dump_active; int fadump_enabled; } ;
struct TYPE_5__ {int (* fadump_unregister ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_4,
     struct kobj_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = -1;

 if (!VAR_3.fadump_enabled || VAR_3.dump_active)
  return -VAR_1;

 if (FUNC_0(VAR_6, 0, &VAR_9))
  return -VAR_0;

 FUNC_1(&VAR_2);

 switch (VAR_9) {
 case 0:
  if (VAR_3.dump_registered == 0) {
   goto unlock_out;
  }


  FUNC_3("Un-register firmware-assisted dump\n");
  VAR_3.ops->fadump_unregister(&VAR_3);
  break;
 case 1:
  if (VAR_3.dump_registered == 1) {

   VAR_3.ops->fadump_unregister(&VAR_3);
  }

  VAR_8 = FUNC_4();
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

unlock_out:
 FUNC_2(&VAR_2);
 return VAR_8 < 0 ? VAR_8 : VAR_7;
}
