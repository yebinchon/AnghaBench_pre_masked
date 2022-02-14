
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pc; TYPE_2__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;
struct TYPE_9__ {int c; } ;
struct TYPE_8__ {TYPE_1__* tp_ops; } ;
struct TYPE_7__ {int (* output_data ) (TYPE_4__*,int *,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(ide_drive_t *VAR_1)
{

 VAR_1->hwif->tp_ops->output_data(VAR_1, ((void*)0), VAR_1->pc->c, 12);


 return VAR_0;
}
