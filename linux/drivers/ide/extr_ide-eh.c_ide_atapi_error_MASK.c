
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct request {int dummy; } ;
typedef int ide_startstop_t ;
struct TYPE_11__ {TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_12__ {int dev_flags; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_13__ {int result; } ;
struct TYPE_10__ {int (* read_status ) (TYPE_2__*) ;int (* exec_command ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,struct request*) ;
 int VAR_7 ;
 TYPE_6__* FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static ide_startstop_t FUNC_5(ide_drive_t *VAR_8, struct request *VAR_9,
           u8 VAR_10, u8 VAR_11)
{
 ide_hwif_t *VAR_12 = VAR_8->hwif;

 if ((VAR_10 & VAR_0) ||
     ((VAR_10 & VAR_2) && (VAR_8->dev_flags & VAR_6) == 0)) {

  FUNC_2(VAR_9)->result |= VAR_5;
 } else {

 }

 if (VAR_12->tp_ops->read_status(VAR_12) & (VAR_0 | VAR_3))

  VAR_12->tp_ops->exec_command(VAR_12, VAR_1);

 if (FUNC_2(VAR_9)->result >= VAR_4) {
  FUNC_1(VAR_8, VAR_9);
 } else {
  if ((FUNC_2(VAR_9)->result & VAR_5) == VAR_5) {
   ++FUNC_2(VAR_9)->result;
   return FUNC_0(VAR_8);
  }
  ++FUNC_2(VAR_9)->result;
 }

 return VAR_7;
}
