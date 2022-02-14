
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ide_taskfile {int lbah; int lbam; int nsect; } ;
struct TYPE_8__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_7__ {TYPE_1__* tp_ops; } ;
struct TYPE_6__ {int (* tf_read ) (TYPE_3__*,struct ide_taskfile*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct ide_taskfile*,int) ;

void FUNC_1(ide_drive_t *VAR_3, u16 *VAR_4, u8 *VAR_5)
{
 struct ide_taskfile VAR_6;

 VAR_3->hwif->tp_ops->tf_read(VAR_3, &VAR_6, VAR_2 |
         VAR_1 | VAR_0);

 *VAR_4 = (VAR_6.lbah << 8) | VAR_6.lbam;
 *VAR_5 = VAR_6.nsect & 3;
}
