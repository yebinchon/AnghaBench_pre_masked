
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kset {int dummy; } ;
struct TYPE_3__ {struct kset* kset; scalar_t__ state_in_sysfs; } ;
struct firmware_map_entry {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct kset* FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct firmware_map_entry *VAR_3)
{
 static int VAR_4;
 static struct kset *VAR_5;

 if (VAR_3->kobj.state_in_sysfs)
  return -VAR_0;

 if (!VAR_5) {
  VAR_5 = FUNC_2("memmap", ((void*)0), VAR_2);
  if (!VAR_5)
   return -VAR_1;
 }

 VAR_3->kobj.kset = VAR_5;
 if (FUNC_0(&VAR_3->kobj, ((void*)0), "%d", VAR_4++))
  FUNC_1(&VAR_3->kobj);

 return 0;
}
