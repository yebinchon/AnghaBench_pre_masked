
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_5__ {struct request* rq; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (TYPE_2__*,struct request*,scalar_t__,unsigned int) ;

int FUNC_3(ide_drive_t *VAR_0, blk_status_t VAR_1, unsigned int VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_0->hwif;
 struct request *VAR_4 = VAR_3->rq;
 int VAR_5;





 if (FUNC_0(VAR_4) && VAR_1)
  VAR_2 = FUNC_1(VAR_4) << 9;

 VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1, VAR_2);
 if (VAR_5 == 0)
  VAR_3->rq = ((void*)0);

 return VAR_5;
}
