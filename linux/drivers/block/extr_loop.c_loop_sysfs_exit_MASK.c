
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {int lo_disk; scalar_t__ sysfs_inited; } ;
struct TYPE_2__ {int kobj; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct loop_device *VAR_1)
{
 if (VAR_1->sysfs_inited)
  FUNC_1(&FUNC_0(VAR_1->lo_disk)->kobj,
       &VAR_0);
}
