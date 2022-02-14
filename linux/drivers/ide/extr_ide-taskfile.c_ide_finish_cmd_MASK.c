
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {int dummy; } ;
struct TYPE_12__ {scalar_t__ nsect; } ;
struct ide_cmd {int tf_flags; TYPE_2__ tf; } ;
struct TYPE_13__ {TYPE_1__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_14__ {scalar_t__ result; } ;
struct TYPE_11__ {struct request* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_3__*,struct ide_cmd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 TYPE_4__* FUNC_6 (struct request*) ;

void FUNC_7(ide_drive_t *VAR_3, struct ide_cmd *VAR_4, u8 VAR_5)
{
 struct request *VAR_6 = VAR_3->hwif->rq;
 u8 VAR_7 = FUNC_4(VAR_3), VAR_8 = VAR_4->tf.nsect;
 u8 VAR_9 = !!(VAR_4->tf_flags & VAR_2);

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_6(VAR_6)->result = VAR_7;

 if (VAR_7 == 0 && VAR_9) {
  FUNC_5(VAR_3, VAR_8);
  FUNC_3(VAR_3);
 }

 FUNC_2(VAR_3, VAR_7 ? VAR_0 : VAR_1, FUNC_0(VAR_6));
}
