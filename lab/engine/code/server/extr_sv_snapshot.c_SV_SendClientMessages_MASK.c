
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_7__ remoteAddress; scalar_t__ unsentFragments; } ;
struct TYPE_11__ {int lastSnapshotTime; int snapshotMsec; void* rateDelayed; TYPE_1__ netchan; scalar_t__ netchan_start_queue; scalar_t__* downloadName; int state; } ;
typedef TYPE_2__ client_t ;
struct TYPE_15__ {int value; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int time; TYPE_2__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_7__) ;
 TYPE_6__* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;

void FUNC_3(void)
{
 int VAR_7;
 client_t *VAR_8;


 for(VAR_7=0; VAR_7 < VAR_5->integer; VAR_7++)
 {
  VAR_8 = &VAR_6.clients[VAR_7];

  if(!VAR_8->state)
   continue;

  if(*VAR_8->downloadName)
   continue;

  if(VAR_8->netchan.unsentFragments || VAR_8->netchan_start_queue)
  {
   VAR_8->rateDelayed = VAR_3;
   continue;
  }

  if(!(VAR_8->netchan.remoteAddress.type == VAR_0 ||
       (VAR_4->integer && FUNC_2(VAR_8->netchan.remoteAddress))))
  {


   if(VAR_6.time - VAR_8->lastSnapshotTime < VAR_8->snapshotMsec * VAR_1->value)
    continue;

   if(FUNC_0(VAR_8) > 0)
   {

    VAR_8->rateDelayed = VAR_3;
    continue;
   }
  }


  FUNC_1(VAR_8);
  VAR_8->lastSnapshotTime = VAR_6.time;
  VAR_8->rateDelayed = VAR_2;
 }
}
