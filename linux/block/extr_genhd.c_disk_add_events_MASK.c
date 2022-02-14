
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {TYPE_1__* ev; int disk_name; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int node; } ;


 int FUNC_0 (struct gendisk*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct gendisk *VAR_3)
{

 if (FUNC_6(&FUNC_1(VAR_3)->kobj, VAR_1) < 0)
  FUNC_5("%s: failed to create sysfs files for events\n",
   VAR_3->disk_name);

 if (!VAR_3->ev)
  return;

 FUNC_3(&VAR_2);
 FUNC_2(&VAR_3->ev->node, &VAR_0);
 FUNC_4(&VAR_2);





 FUNC_0(VAR_3, 1);
}
