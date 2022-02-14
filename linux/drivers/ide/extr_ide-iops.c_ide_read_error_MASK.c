
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ide_taskfile {int error; } ;
struct TYPE_8__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_7__ {TYPE_1__* tp_ops; } ;
struct TYPE_6__ {int (* tf_read ) (TYPE_3__*,struct ide_taskfile*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct ide_taskfile*,int ) ;

u8 FUNC_1(ide_drive_t *VAR_1)
{
 struct ide_taskfile VAR_2;

 VAR_1->hwif->tp_ops->tf_read(VAR_1, &VAR_2, VAR_0);

 return VAR_2.error;
}
