
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {int lastSentSize; int lastSentTime; TYPE_1__ remoteAddress; } ;
struct TYPE_10__ {int rate; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int integer; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;

int FUNC_2(client_t *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = VAR_6->netchan.lastSentSize;
 VAR_7 = VAR_6->rate;

 if(VAR_4->integer)
 {
  if(VAR_4->integer < 1000)
   FUNC_0( "sv_MaxRate", "1000" );
  if(VAR_4->integer < VAR_7)
   VAR_7 = VAR_4->integer;
 }

 if(VAR_5->integer)
 {
  if(VAR_5->integer < 1000)
   FUNC_0("sv_minRate", "1000");
  if(VAR_5->integer > VAR_7)
   VAR_7 = VAR_5->integer;
 }


 if (VAR_7 == 0)
 {
  return 0;
 }

 if(VAR_6->netchan.remoteAddress.type == VAR_0)
  VAR_9 += VAR_1;
 else
  VAR_9 += VAR_2;

 VAR_8 = VAR_9 * 1000 / ((int) (VAR_7 * VAR_3->value));
 VAR_7 = FUNC_1() - VAR_6->netchan.lastSentTime;

 if(VAR_7 > VAR_8)
  return 0;
 else
  return VAR_8 - VAR_7;
}
