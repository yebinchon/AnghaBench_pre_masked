
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* disk_ops; int id; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int (* get_capacity ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_0)
{
 if (FUNC_0(VAR_0->id))
  (void)VAR_0->disk_ops->get_capacity(VAR_0);
}
