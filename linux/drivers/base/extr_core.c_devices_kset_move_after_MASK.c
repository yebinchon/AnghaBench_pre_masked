
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct device {TYPE_1__ kobj; } ;
struct TYPE_4__ {int list_lock; } ;


 int FUNC_0 (struct device*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct device *VAR_2)
{
 if (!VAR_0)
  return;
 FUNC_2("devices_kset: Moving %s after %s\n",
   FUNC_0(VAR_1), FUNC_0(VAR_2));
 FUNC_3(&VAR_0->list_lock);
 FUNC_1(&VAR_1->kobj.entry, &VAR_2->kobj.entry);
 FUNC_4(&VAR_0->list_lock);
}
