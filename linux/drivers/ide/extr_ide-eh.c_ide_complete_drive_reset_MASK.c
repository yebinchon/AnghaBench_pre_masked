
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_7__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
typedef scalar_t__ blk_status_t ;
struct TYPE_8__ {scalar_t__* cmd; int result; } ;
struct TYPE_6__ {struct request* rq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 TYPE_3__* FUNC_3 (struct request*) ;

__attribute__((used)) static inline void FUNC_4(ide_drive_t *VAR_2, blk_status_t VAR_3)
{
 struct request *VAR_4 = VAR_2->hwif->rq;

 if (VAR_4 && FUNC_0(VAR_4) &&
     FUNC_3(VAR_4)->cmd[0] == VAR_1) {
  if (VAR_3 <= 0 && FUNC_3(VAR_4)->result == 0)
   FUNC_3(VAR_4)->result = -VAR_0;
  FUNC_2(VAR_2, VAR_3, FUNC_1(VAR_4));
 }
}
