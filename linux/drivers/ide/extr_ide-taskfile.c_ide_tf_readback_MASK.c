
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ide_tp_ops {int (* tf_read ) (TYPE_4__*,int *,int ) ;int (* write_devctl ) (TYPE_3__*,int) ;} ;
struct TYPE_10__ {int hob; int tf; } ;
struct TYPE_11__ {TYPE_1__ in; } ;
struct ide_cmd {int tf_flags; TYPE_2__ valid; int hob; int tf; } ;
struct TYPE_12__ {struct ide_tp_ops* tp_ops; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_13__ {TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_4__*,int *,int ) ;

void FUNC_4(ide_drive_t *VAR_3, struct ide_cmd *VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 const struct ide_tp_ops *VAR_6 = VAR_5->tp_ops;


 VAR_6->write_devctl(VAR_5, VAR_0);

 VAR_6->tf_read(VAR_3, &VAR_4->tf, VAR_4->valid.in.tf);

 if (VAR_4->tf_flags & VAR_2) {
  VAR_6->write_devctl(VAR_5, VAR_1 | VAR_0);

  VAR_6->tf_read(VAR_3, &VAR_4->hob, VAR_4->valid.in.hob);
 }
}
