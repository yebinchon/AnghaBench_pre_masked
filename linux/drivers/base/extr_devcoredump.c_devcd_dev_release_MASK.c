
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; } ;
struct devcd_entry {TYPE_2__* failing_dev; int owner; int data; int (* free ) (int ) ;} ;
struct TYPE_3__ {scalar_t__ sd; } ;
struct TYPE_4__ {TYPE_1__ kobj; } ;


 struct devcd_entry* FUNC_0 (struct device*) ;
 int FUNC_1 (struct devcd_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,char*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct devcd_entry *VAR_1 = FUNC_0(VAR_0);

 VAR_1->free(VAR_1->data);
 FUNC_2(VAR_1->owner);





 if (VAR_1->failing_dev->kobj.sd)
  FUNC_5(&VAR_1->failing_dev->kobj, &VAR_0->kobj,
      "devcoredump");

 FUNC_3(VAR_1->failing_dev);
 FUNC_1(VAR_1);
}
