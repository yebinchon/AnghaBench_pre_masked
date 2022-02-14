
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int cursize; } ;
typedef TYPE_3__ msg_t ;
struct TYPE_10__ {size_t outgoingSequence; } ;
struct TYPE_13__ {TYPE_1__ netchan; TYPE_2__* frames; } ;
typedef TYPE_4__ client_t ;
struct TYPE_14__ {int time; } ;
struct TYPE_11__ {int messageAcked; int messageSent; int messageSize; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 TYPE_5__ VAR_1 ;

void FUNC_1(msg_t *VAR_2, client_t *VAR_3)
{

 VAR_3->frames[VAR_3->netchan.outgoingSequence & VAR_0].messageSize = VAR_2->cursize;
 VAR_3->frames[VAR_3->netchan.outgoingSequence & VAR_0].messageSent = VAR_1.time;
 VAR_3->frames[VAR_3->netchan.outgoingSequence & VAR_0].messageAcked = -1;


 FUNC_0(VAR_3, VAR_2);
}
